using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Valve.VR;
using TMPro;
using Assets.LSL4Unity.Scripts;
using LSL;




public class Core : MonoBehaviour
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
    private float lastSpawnTime;
    float spawnRate = 2.5f;

    float increaseSpawnRate = 0.15f;
    float increaseSpawnRateInterval = 30f;
    


    void Start()
    {
        Spawn_marker = FindObjectOfType<LSLMarkerStream>();
        var info = new liblsl.StreamInfo("CubeSpawnData", "Markers", 4, 0, liblsl.channel_format_t.cf_float32, "SpawnID");
        outlet = new liblsl.StreamOutlet(info);
        // Create a new StreamInfo object for the spawn rate
        spawnRateInfo = new liblsl.StreamInfo("SpawnRate", "SpawnRate", 1, 0, liblsl.channel_format_t.cf_float32, "SpawnRateID");
        // Create a new StreamOutlet object for the spawn rate
        spawnRateOutlet = new liblsl.StreamOutlet(spawnRateInfo);
        InvokeRepeating("SpawnYellow", 1f, spawnRate);
        InvokeRepeating("SpawnBlue", 2f, spawnRate);
        InvokeRepeating("IncreaseSpawnRate", increaseSpawnRateInterval, increaseSpawnRateInterval);
        InvokeRepeating("SpawnBlack", 5f, 7f);
        Invoke("EndExperiment", 120f);
    }
    private void Update()
    {
        gameTime -= Time.deltaTime;
        if (gameTime < 1)
        {
            gameTime = 0;
        }
        gameTimeText.text = gameTime.ToString();

        // Stream spawn rate
        if (outlet != null && Time.time > lastSpawnTime + 1f / spawnRate)
        {
            float[] spawnRateSample = { spawnRate };
            spawnRateOutlet.push_sample(spawnRateSample);
            lastSpawnTime = Time.time;
        }
    }
    void IncreaseSpawnRate()
    {
        spawnRate *= (1 - increaseSpawnRate);
        CancelInvoke("SpawnYellow");
        CancelInvoke("SpawnBlue");
        InvokeRepeating("SpawnYellow", spawnRate, spawnRate);
        InvokeRepeating("SpawnBlue", spawnRate, spawnRate);
    }

    void EndExperiment()
    {
        CancelInvoke("SpawnYellow");
        CancelInvoke("SpawnBlue");
        CancelInvoke("IncreaseSpawnRate");
        CancelInvoke("SpawnBlack");
        // Additional code to end the experiment here
    }

    public void SpawnYellow()
    {
        Spawn_marker.Write("yellow spawned");
        GameObject cubeYellow = Instantiate(cubeYellowPrefab) as GameObject;
        cubeYellow.transform.position = spawnPoints[Random.Range(0, spawnPoints.Length)].transform.position;
        float[] sample = {cubeYellow.transform.position.x, cubeYellow.transform.position.y, cubeYellow.transform.position.z, 0};
        if (outlet != null)
            outlet.push_sample(sample);

    }
    public void SpawnBlue()
    {
        GameObject cubeBlue = Instantiate(cubeBluePrefab) as GameObject;
        Spawn_marker.Write("blue spawned");
        cubeBlue.transform.position = spawnPoints[Random.Range(0, spawnPoints.Length)].transform.position;
        float[] sample = {cubeBlue.transform.position.x, cubeBlue.transform.position.y, cubeBlue.transform.position.z, 1 };
        if (outlet != null)
            outlet.push_sample(sample);

    }

    public void SpawnBlack()
    {
        GameObject cubeBlack = Instantiate(cubeBlackPrefab) as GameObject;
        cubeBlack.transform.position = spawnPointsBlack[Random.Range(0, spawnPointsBlack.Length)].transform.position;
        Spawn_marker.Write("black spawned");
        float[] sample = {cubeBlack.transform.position.x, cubeBlack.transform.position.y, cubeBlack.transform.position.z, 2 };
        if (outlet != null)
            outlet.push_sample(sample);

    }
}
