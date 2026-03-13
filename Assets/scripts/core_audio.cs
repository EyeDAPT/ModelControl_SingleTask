using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using Assets.LSL4Unity.Scripts;
using LSL;
using UnityEngine.EventSystems;

public class core_audio : MonoBehaviour
{
    public GameObject leftCubePointer;
    public GameObject rightCubePointer;

    public GameObject cubeYellowPrefab;
    public GameObject cubeBluePrefab;
    public Transform[] spawnPoints;

    public TextMeshPro gameTimeText;
    public float gameTime = 60f;

    private LSLMarkerStream Spawn_marker;
    private liblsl.StreamOutlet arithmeticNumbersOutlet, arithmeticResultsOutlet, modelPredictionOutlet;
    private liblsl.StreamOutlet outlet;
    private liblsl.StreamInfo spawnRateInfo;
    private liblsl.StreamOutlet spawnRateOutlet;
    private liblsl.StreamInfo scoreInfo;
    private liblsl.StreamOutlet scoreOutlet;

    private int storedParticipantInput = -1;

    private DataSender dataSender;
    private float spawnRate;
    private float baseDifficulty = 2.6f;
    private bool isGameRunning = false;
    private bool inBreakTime = false;
    private bool isFirstKeypadShowForLevel = true;
    private bool awaitingDifficultySelection = false;
    private bool levelEnded = false;
    private int score;
    private int currentLevel = 0;
    private int maxLevels = 8;

    private float breakTime = 10f;
    private int arithmeticCorrectResult;
    private List<int> arithmeticNumbersPlayed = new List<int>();
    public AudioSource arithmeticAudioSource;
    private AudioClip[] arithmeticPlainClips;
    private AudioClip[] arithmeticSignedClips;

    // If you're using this offset for timestamps, etc.
    //public static float offset;

    private float lastSpawnTime = 0f;  // ADDED for your spawnRate streaming logic

    private int currentLevelIndex = 0;

    public GameObject keypadPanel;
    public TMP_InputField keypadInputField;
    public Button arithmeticSubmitButton;
    public GameObject difficultyPanel;
    private GameObject snapTurnObject;

    // Added variables to store the predicted difficulty from server
    private float lastPredictedDifficulty = -1f;
    private float lastConfA = 0f;
    private float lastConfB = 0f;
    private float lastConfC = 0f;
    private int userPerceivedDifficulty = -1;
    private bool hasPrediction = false;

    // --------------------------------------------------------------------
    // 1) Move LSL creation to Awake()
    // --------------------------------------------------------------------
    void Awake()
    {
        // Find your LSLMarkerStream object
        Spawn_marker = FindObjectOfType<LSLMarkerStream>();

        // Create the "CubeSpawnData" stream, 4 channels
        var info = new liblsl.StreamInfo(
            "CubeSpawnData", "Markers", 4, 0,
            liblsl.channel_format_t.cf_float32, "SpawnID"
        );
        outlet = new liblsl.StreamOutlet(info);

        // Create a new StreamInfo object for spawn rate
        spawnRateInfo = new liblsl.StreamInfo(
            "SpawnRate", "SpawnRate", 1, 0,
            liblsl.channel_format_t.cf_float32, "SpawnRateID"
        );
        spawnRateOutlet = new liblsl.StreamOutlet(spawnRateInfo);

        // Create a new StreamInfo object for the score
        scoreInfo = new liblsl.StreamInfo(
            "CubeDestroyScore", "Markers", 1, 0,
            liblsl.channel_format_t.cf_float32, "ScoreID"
        );
        scoreOutlet = new liblsl.StreamOutlet(scoreInfo);

        // ArithmeticNumbers stream
        var numbersInfo = new liblsl.StreamInfo(
            "ArithmeticNumbers", "Markers", 1, 0,
            liblsl.channel_format_t.cf_float32, "ArithmeticNumbersStream"
        );
        arithmeticNumbersOutlet = new liblsl.StreamOutlet(numbersInfo);

        // ArithmeticResults stream (3 values)
        var resultsInfo = new liblsl.StreamInfo(
            "ArithmeticResults", "Markers", 3, 0,
            liblsl.channel_format_t.cf_float32, "ArithmeticResultsStream"
        );
        arithmeticResultsOutlet = new liblsl.StreamOutlet(resultsInfo);

        // Suppose you want 4 channels: predictedDifficulty, confA, confB, confC
        var modelPredInfo = new liblsl.StreamInfo(
            "ModelPredictions",
            "Markers",
            4, // 4 channels now
            0,
            liblsl.channel_format_t.cf_float32,
            "ModelPredictionID"
        );
        modelPredictionOutlet = new liblsl.StreamOutlet(modelPredInfo);
        arithmeticPlainClips = Resources.LoadAll<AudioClip>("Audio/Arithmetic/PlainNumbers");
        arithmeticSignedClips = Resources.LoadAll<AudioClip>("Audio/Arithmetic/SignedNumbers");
        Debug.Log("Plain clips loaded: " + arithmeticPlainClips.Length);
        Debug.Log("Signed clips loaded: " + arithmeticSignedClips.Length);

    }

    // --------------------------------------------------------------------
    // 2) Keep the rest of your initialization in Start()
    // --------------------------------------------------------------------
    void Start()
    {
        // Load audio clips (if needed at runtime)
        //arithmeticPlainClips = Resources.LoadAll<AudioClip>("Audio/Arithmetic/PlainNumbers");
        //arithmeticSignedClips = Resources.LoadAll<AudioClip>("Audio/Arithmetic/SignedNumbers");

        keypadPanel.SetActive(false);
        difficultyPanel.SetActive(false);

        if (leftCubePointer) leftCubePointer.SetActive(true);
        if (rightCubePointer) rightCubePointer.SetActive(true);

        snapTurnObject = GameObject.Find("SnapTurn");

        dataSender = FindObjectOfType<DataSender>();
        if (dataSender == null)
        {
            Debug.LogWarning("DataSender not found in scene.");
        }

        // Start the game after 10s
        StartCoroutine(StartGameAfterDelay(10f));
        score = 0;
    }


    void Update()
    {
        if (isGameRunning && !inBreakTime)
        {
            gameTime -= Time.deltaTime;
            gameTimeText.text = gameTime.ToString("F1");

            if (gameTime <= 0)
            {
                gameTime = 0;
                //Debug.Log("Game time ended. Ending level.");
                EndLevel();
            }
        }

        // Stream the current spawn rate periodically:
        if (spawnRateOutlet != null && Time.time > lastSpawnTime + 1f / spawnRate)
        {
            float[] spawnRateSample = { spawnRate };
            spawnRateOutlet.push_sample(spawnRateSample);
            lastSpawnTime = Time.time;
        }

        // Stream the current score
        if (scoreOutlet != null)
        {
            float[] scoreSample = { score };
            scoreOutlet.push_sample(scoreSample);
        }
    }

    //public void ResetOffset()
    //{
    //    offset = (float)System.DateTimeOffset.UtcNow.ToUnixTimeSeconds();
    //    Debug.Log("Offset reset to: " + offset);
    //}

    IEnumerator StartGameAfterDelay(float delay)
    {
        yield return new WaitForSeconds(delay);
        StartGame();
    }

    private void StartGame()
    {
        isGameRunning = true;
        StartNextLevel();
    }

    private void StartNextLevel()
    {
        // If we've already started the maximum number of levels, don't start a new one
        if (currentLevel >= maxLevels)
        {
            Debug.Log("All levels completed. No further levels will start.");
            // Enable snap turn or do any "end-of-game" logic you want here
            //snapTurnObject?.SetActive(true);
            return;
        }

        // Otherwise, increment our level count and proceed
        currentLevel++;
        EyeTrackingBuffer.samples.Clear();

        score = 0;
        levelEnded = false;
        arithmeticNumbersPlayed.Clear();
        //ResetOffset();

        Debug.Log("Starting new level.");

        isFirstKeypadShowForLevel = true;
        awaitingDifficultySelection = false;
        hasPrediction = false;
        lastPredictedDifficulty = -1f;
        userPerceivedDifficulty = -1;

        dataSender?.ResetLevelDataFlag();

        spawnRate = baseDifficulty;

        // Immediately push baseDifficulty (spawnRate) to LSL
        if (spawnRateOutlet != null)
        {
            spawnRateOutlet.push_sample(new float[] { spawnRate });
            Debug.Log($"Pushed spawnRate/baseDifficulty {spawnRate} to LSL at level start.");
        }

        gameTime = 60f;
        gameTimeText.text = gameTime.ToString("F1");

        // Optionally push spawnRate here too
        //spawnRateOutlet.push_sample(new float[] { spawnRate });

        InvokeRepeating("SpawnYellow", 1f, spawnRate);
        InvokeRepeating("SpawnBlue", 2f, spawnRate);

        //StartCoroutine(RunArithmeticCues());
    }

    private IEnumerator RunArithmeticCues()
    {
        yield return new WaitForSeconds(10f);

        // 1) Plain number
        AudioClip plainClip = GetRandomPlainNumberClip();
        if (plainClip != null)
        {
            arithmeticAudioSource.clip = plainClip;
            arithmeticAudioSource.Play();

            if (int.TryParse(plainClip.name, out int baseNumber))
            {
                arithmeticCorrectResult = baseNumber;
                arithmeticNumbersOutlet.push_sample(new float[] { baseNumber });
            }
        }

        // 2) 4 signed numbers
        List<AudioClip> availableSignedClips = new List<AudioClip>(arithmeticSignedClips);
        for (int i = 0; i < 4; i++)
        {
            yield return new WaitForSeconds(10f);
            if (availableSignedClips.Count == 0) break;

            int index = Random.Range(0, availableSignedClips.Count);
            AudioClip signedClip = availableSignedClips[index];
            availableSignedClips.RemoveAt(index);

            arithmeticAudioSource.clip = signedClip;
            arithmeticAudioSource.Play();

            // Parse
            int playedNumber = ParseArithmeticClip(signedClip.name);
            arithmeticNumbersOutlet.push_sample(new float[] { playedNumber });
        }
    }

    private int ParseArithmeticClip(string clipName)
    {
        int number = 0;
        if (clipName.StartsWith("plus_"))
        {
            number = int.Parse(clipName.Substring(5));
            arithmeticCorrectResult += number;
        }
        else if (clipName.StartsWith("minus_"))
        {
            number = -int.Parse(clipName.Substring(6));
            arithmeticCorrectResult += number;
        }
        return number;
    }

    private AudioClip GetRandomPlainNumberClip()
    {
        return arithmeticPlainClips.Length > 0 ?
               arithmeticPlainClips[Random.Range(0, arithmeticPlainClips.Length)] : null;
    }

    private void EndLevel()
    {
        if (levelEnded) return;
        levelEnded = true;

        CancelInvoke("SpawnYellow");
        CancelInvoke("SpawnBlue");
        DestroyCubes("yellow");
        DestroyCubes("blue");

        Debug.Log($"EndLevel called. EyeTrackingBuffer count = {EyeTrackingBuffer.samples.Count}");
        awaitingDifficultySelection = true;
        dataSender?.SendLevelData();

        // Instead of calling ShowKeypad() directly:
        StartCoroutine(WaitAndShowKeypad(2.5f));

    }
    private IEnumerator WaitAndShowKeypad(float delay)
    {
        
        yield return new WaitForSeconds(delay);
        
        ShowDifficultyMenu();
    }




    private void ShowDifficultyMenu()
    {
        difficultyPanel.SetActive(true);
    }

    // This method now only records the user's perceived difficulty
    // but doesn't actually adjust the difficulty anymore
    public void AdjustDifficulty(float adjustment)
    {
        awaitingDifficultySelection = false;
        difficultyPanel.SetActive(false);

        // Store the user's perceived difficulty
        userPerceivedDifficulty = ConvertAdjustmentToDifficulty(adjustment);

        // Check if we have a valid prediction to use for auto-adjustment
        if (!hasPrediction)
        {
            Debug.LogWarning("No server prediction received. Using user's selection for difficulty adjustment.");
            // Fall back to user selection if no prediction is available
            AutoAdjustDifficultyBasedOnPrediction(userPerceivedDifficulty);
        }
        else
        {
            // Use the server prediction to adjust difficulty
            // We already adjusted the difficulty in ReceiveServerPrediction, 
            // so we don't need to do it again here
            Debug.Log($"Using server prediction {lastPredictedDifficulty} for difficulty adjustment.");
        }


        // Send the arithmetic results to LSL including the user's perceived difficulty
        SendArithmeticResultsToLSL(0, 0, userPerceivedDifficulty);

        StartCoroutine(StartNextLevelWithBreak());
    }

    private int ConvertAdjustmentToDifficulty(float adjustment)
    {
        if (adjustment < -0.2) return 1;  // Too Easy
        if (adjustment > 0) return 3;  // Too Hard
        return 2;                     // Just Right
    }

    // New method to auto-adjust difficulty based on predicted difficulty
    private void AutoAdjustDifficultyBasedOnPrediction(float predictedDifficulty)
    {
        float adjustmentValue = 0f;

        // Convert the predictedDifficulty to an adjustment value
        // 0 = too easy, 1 = just right, 2 = too difficult
        if (predictedDifficulty == 0)
        {
            // Too easy - decrease difficulty (increase spawn rate)
            adjustmentValue = -0.3f;
        }
        else if (predictedDifficulty == 1)
        {
            // Just right - slight decrease
            adjustmentValue = -0.1f;
        }
        else if (predictedDifficulty == 2)
        {
            // Too difficult - increase difficulty (decrease spawn rate)
            adjustmentValue = 0.3f;
        }

        // Apply the adjustment
        baseDifficulty = Mathf.Clamp(baseDifficulty + adjustmentValue, 1f, 5f);
        Debug.Log($"Auto-adjusted difficulty to {baseDifficulty} based on prediction {predictedDifficulty}");

        // Push the new difficulty to LSL
        if (spawnRateOutlet != null)
        {
            spawnRateOutlet.push_sample(new float[] { baseDifficulty });
        }
    }

    private void SendArithmeticResultsToLSL(int arithmeticCorrectResult, int participantInput, int perceivedDifficulty)
    {
        float[] resultSample = { arithmeticCorrectResult, participantInput, perceivedDifficulty };
        arithmeticResultsOutlet.push_sample(resultSample);
        Debug.Log($"LSL Sent: Correct={arithmeticCorrectResult}, Input={participantInput}, Difficulty={perceivedDifficulty}");
    }

    private IEnumerator StartNextLevelWithBreak()
    {
        inBreakTime = true;
        yield return new WaitForSeconds(breakTime);
        inBreakTime = false;
        snapTurnObject?.SetActive(true);
        StartNextLevel();
    }

    private void DestroyCubes(string tag)
    {
        foreach (var cube in GameObject.FindGameObjectsWithTag(tag))
        {
            Destroy(cube);
        }
    }

    public void SpawnYellow()
    {
        int index = Random.Range(0, spawnPoints.Length);
        GameObject obj = Instantiate(cubeYellowPrefab, spawnPoints[index]);
        Spawn_marker.Write("yellow spawned");
        obj.transform.position = spawnPoints[index].position;

        // If you want to push a sample to "CubeSpawnData" (4 channels) each spawn:
        //float timeStamp = (float)System.DateTimeOffset.UtcNow.ToUnixTimeMilliseconds() / 1000.0f;
        //float[] spawnSample = { 1f, index, timeStamp, 0f };
        //outlet.push_sample(spawnSample);

        // or use your existing LSLMarkerStream

    }

    public void SpawnBlue()
    {
        int index = Random.Range(0, spawnPoints.Length);
        GameObject obj = Instantiate(cubeBluePrefab, spawnPoints[index]);
        Spawn_marker.Write("blue spawned");
        obj.transform.position = spawnPoints[index].position;

        // Push to "CubeSpawnData"
        //float timeStamp = (float)System.DateTimeOffset.UtcNow.ToUnixTimeMilliseconds() / 1000.0f;
        //float[] spawnSample = { 2f, index, timeStamp, 0f };
        //outlet.push_sample(spawnSample);

    }

    // Modified to also adjust difficulty immediately when receiving prediction
    public void ReceiveServerPrediction(float predictedDifficulty, float confA, float confB, float confC)
    {
        Debug.Log($"[ReceiveServerPrediction] Pushing to LSL: diff={predictedDifficulty}, A={confA}, B={confB}, C={confC}");

        // Store the prediction values
        lastPredictedDifficulty = predictedDifficulty;
        lastConfA = confA;
        lastConfB = confB;
        lastConfC = confC;
        hasPrediction = true;

        // Push prediction to LSL
        modelPredictionOutlet.push_sample(new float[] { predictedDifficulty, confA, confB, confC });

        // Automatically adjust difficulty based on the prediction
        // Only if we're in the appropriate phase (after arithmetic task)
        if (awaitingDifficultySelection)
        {
            AutoAdjustDifficultyBasedOnPrediction(predictedDifficulty);
        }
        else
        {
            Debug.Log("Received prediction, but not adjusting difficulty yet as we're not in difficulty selection phase.");
        }
    }
}  // END of class