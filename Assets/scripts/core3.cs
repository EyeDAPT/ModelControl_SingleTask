
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Valve.VR;
using TMPro;
using Assets.LSL4Unity.Scripts;
using LSL;

public class core3 : MonoBehaviour
{
    public GameObject cubeYellowPrefab;
    public GameObject cubeBluePrefab;
    public Transform[] spawnPoints;
    public Transform[] spawnPointsBlack;
    public TextMeshPro gameTimeText;
    public float gameTime;
    public GameObject cubeBlackPrefab;
    private LSLMarkerStream Spawn_marker;
    private liblsl.StreamOutlet outlet;
    private liblsl.StreamInfo spawnRateInfo;
    private liblsl.StreamOutlet spawnRateOutlet;
    private liblsl.StreamInfo scoreInfo;
    private liblsl.StreamOutlet scoreOutlet;
    private float lastSpawnTime;
    float spawnRate = 2.5f;
    float increaseSpawnRate = 0.15f;
    float increaseSpawnRateInterval = 45f;
    int score;
    private List<float> spawnRates = new List<float> { 1.6f, 1.6f, 2.1f, 2.1f, 2.6f, 2.6f, 3.1f, 3.1f };
    private int currentLevel = 0;
    private bool isGameRunning = false;
    private List<int> randomLevelOrder = new List<int>();
    private int levelsPlayed = 0; // to keep track of the total number of levels played
    private const int maxLevels = 16; // maximum number of levels before the game stops
    public float breakTime = 10f;
    private bool inBreakTime = false;  // to check if we're in break time
    private float originalSpawnRate = 0;  // to store the original spawn rate before the break
    private int currentLevelIndex = 0; // Index to keep track of the current spawn rate


    void Start()
    {
        Spawn_marker = FindObjectOfType<LSLMarkerStream>();
        var info = new liblsl.StreamInfo("CubeSpawnData", "Markers", 4, 0, liblsl.channel_format_t.cf_float32, "SpawnID");
        outlet = new liblsl.StreamOutlet(info);

        // Create a new StreamInfo object for the spawn rate
        spawnRateInfo = new liblsl.StreamInfo("SpawnRate", "SpawnRate", 1, 0, liblsl.channel_format_t.cf_float32, "SpawnRateID");
        // Create a new StreamOutlet object for the spawn rate
        spawnRateOutlet = new liblsl.StreamOutlet(spawnRateInfo);
        // Create a new StreamInfo object for the score
        scoreInfo = new liblsl.StreamInfo("CubeDestroyScore", "Markers", 1, 0, liblsl.channel_format_t.cf_float32, "ScoreID");
        // Create a new StreamOutlet object for the score
        scoreOutlet = new liblsl.StreamOutlet(scoreInfo);
        Debug.Log("Game will start after a delay");
        ShuffleSpawnRates(); // Shuffle the spawn rates at the start of the game
        StartCoroutine(StartGameAfterDelay(10f));

        //InvokeRepeating("SpawnYellow", 1f, spawnRate);
        //InvokeRepeating("SpawnBlue", 2f, spawnRate);
        //InvokeRepeating("IncreaseSpawnRate", increaseSpawnRateInterval, increaseSpawnRateInterval);
        //InvokeRepeating("SpawnBlack", 5f, 7f);
        //Invoke("EndExperiment", 45f);
        score = 0;
    }

    private void Update()
    {
        // Check if the game is running and it is not break time
        if (isGameRunning && !inBreakTime)
        {
            gameTime -= Time.deltaTime;

            // Update the game time display
            gameTimeText.text = gameTime.ToString("F1");

            // When the game time runs out, end the level
            if (gameTime <= 0)
            {
                gameTime = 0; // Ensure gameTime doesn't go below 0
                Debug.Log("Game time ended. Ending level.");
                EndLevel(); // Call EndLevel to handle the end-of-level logic
            }
        }

        // Stream the current spawn rate
        if (outlet != null && Time.time > lastSpawnTime + 1f / spawnRate)
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

    private void ShuffleSpawnRates()
    {
        for (int i = spawnRates.Count - 1; i > 0; i--)
        {
            int swapIndex = Random.Range(0, i + 1);
            float temp = spawnRates[i];
            spawnRates[i] = spawnRates[swapIndex];
            spawnRates[swapIndex] = temp;
        }
    }
    
    IEnumerator StartGameAfterDelay(float delay)
    {
        // Wait for the specified delay
        yield return new WaitForSeconds(delay);

        // Now start the game
        StartGame();

        // Your repeated methods can be called here after the game starts
        //InvokeRepeating("SpawnYellow", 1f, spawnRate);
        //InvokeRepeating("SpawnBlue", 2f, spawnRate);
        //InvokeRepeating("IncreaseSpawnRate", increaseSpawnRateInterval, increaseSpawnRateInterval);
        //InvokeRepeating("SpawnBlack", 5f, 7f);
        //Invoke("EndExperiment", 45f);
    }
    private void InitializeRandomLevelOrder()
    {
        List<int> levels = new List<int> { 0, 1, 2, 3 }; // Initial order
        randomLevelOrder.Clear();
        while (levels.Count > 0)
        {
            int randomIndex = Random.Range(0, levels.Count);
            randomLevelOrder.Add(levels[randomIndex]);
            levels.RemoveAt(randomIndex);
        }
    }
    private void StartGame()
    {
        isGameRunning = true;
        //currentLevel = 0;
        gameTime = 60f;
        StartNextLevel();
    }
    private void StartNextLevel()
    {
        CancelInvoke("SpawnYellow");
        CancelInvoke("SpawnBlue");

        if (currentLevelIndex >= spawnRates.Count)
        {
            EndGame();
            return;
        }

        spawnRate = spawnRates[currentLevelIndex];
        currentLevelIndex++;
        Debug.Log($"Starting level {currentLevelIndex} with spawn rate {spawnRate}.");


        // Regenerate the random level order and reset currentLevel if we've played a multiple of 4 levels
        //if (levelsPlayed > 0 && levelsPlayed % 4 == 0)
        //{
        //   Debug.Log("Played 4 levels. Regenerating level order.");
        //    InitializeRandomLevelOrder();
        //    currentLevel = 0;
        // }
        
        isGameRunning = true;
        gameTime = 60f; // Set gameTime for each level
        gameTimeText.text = gameTime.ToString();
        Debug.Log("Level started. Spawn rate: " + spawnRate + ". Game time set to: " + gameTime);
        InvokeRepeating("SpawnYellow", 1f, spawnRate);
        InvokeRepeating("SpawnBlue", 2f, spawnRate);


    }

    private void EndLevel()
    {
        Debug.Log("Ending level.");

        CancelInvoke("SpawnYellow");
        CancelInvoke("SpawnBlue");
        GameObject[] remainingCubes = GameObject.FindGameObjectsWithTag("yellow");
        foreach (GameObject cube in remainingCubes)
        {
            Destroy(cube);
        }
        remainingCubes = GameObject.FindGameObjectsWithTag("blue");
        foreach (GameObject cube in remainingCubes)
        {
            Destroy(cube);
        }
        if (!inBreakTime) // Check if we are not already in break time
        {
            gameTime = breakTime;
            originalSpawnRate = spawnRate; // Store the original spawn rate
            spawnRate = 0; // Set spawn rate to 0 during break
            inBreakTime = true; // Indicate that we're in break time
            StartCoroutine(HandleBreak()); // Start the break
            Debug.Log("Entering break time.");
        }


    }
    private void UpdateSpawnRate()
    {
        spawnRate = spawnRates[randomLevelOrder[currentLevel]];
        spawnRateOutlet.push_sample(new float[] { spawnRate });
    }

    private IEnumerator HandleBreak()
    {
        yield return new WaitForSeconds(breakTime); // Wait for the break to complete
        inBreakTime = false; // Indicate that break time is over
        spawnRate = originalSpawnRate; // Reset spawn rate to original
        StartNextLevel(); // Start the next level
    }


    void IncreaseSpawnRate()
    {
        spawnRate *= (1 - increaseSpawnRate);
        CancelInvoke("SpawnYellow");
        CancelInvoke("SpawnBlue");
        InvokeRepeating("SpawnYellow", spawnRate, spawnRate);
        InvokeRepeating("SpawnBlue", spawnRate, spawnRate);
    }
    private void EndGame()
    {
        isGameRunning = false;
        CancelInvoke("SpawnYellow");
        CancelInvoke("SpawnBlue");
        // You can add any additional end game logic here
        Debug.Log("Game Over. All spawn rates have been used.");
    }

    public void EndExperiment()
    {
        CancelInvoke();
        GameObject[] remainingCubes = GameObject.FindGameObjectsWithTag("yellow");
        foreach (GameObject cube in remainingCubes)
        {
            Destroy(cube);
        }
        remainingCubes = GameObject.FindGameObjectsWithTag("blue");
        foreach (GameObject cube in remainingCubes)
        {
            Destroy(cube);
        }
        score = 0;

    }

    public void SpawnYellow()
    {
        GameObject cubeYellow = Instantiate(cubeYellowPrefab) as GameObject;
        cubeYellow.transform.position = spawnPoints[Random.Range(0, spawnPoints.Length)].transform.position;
        Spawn_marker.Write("yellow spawned");
        float[] sample = { cubeYellow.transform.position.x, cubeYellow.transform.position.y, cubeYellow.transform.position.z, 0 };
        if (outlet != null)
            outlet.push_sample(sample);
    }

    public void SpawnBlue()
    {
        GameObject cubeBlue = Instantiate(cubeBluePrefab) as GameObject;
        Spawn_marker.Write("blue spawned");
        cubeBlue.transform.position = spawnPoints[Random.Range(0, spawnPoints.Length)].transform.position;
        float[] sample = { cubeBlue.transform.position.x, cubeBlue.transform.position.y, cubeBlue.transform.position.z, 1 };
        if (outlet != null)
            outlet.push_sample(sample);
    }

    public void SpawnBlack()
    {
        GameObject cubeBlack = Instantiate(cubeBlackPrefab) as GameObject;
        cubeBlack.transform.position = spawnPointsBlack[Random.Range(0, spawnPointsBlack.Length)].transform.position;
        Spawn_marker.Write("black spawned");
        float[] sample = { cubeBlack.transform.position.x, cubeBlack.transform.position.y, cubeBlack.transform.position.z, 2 };
        if (outlet != null)
            outlet.push_sample(sample);
    }

    public void IncrementScore()
    {
        score++;
    }
}
