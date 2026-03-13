using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Valve.VR;
using TMPro;
using Assets.LSL4Unity.Scripts;

public class Spawn2 : MonoBehaviour
{

    public GameObject cubeYellowPrefab;
    public GameObject cubeBluePrefab;
    public Transform[] spawnPoints;
    public Transform[] spawnPointsBlack;
    public TextMeshPro gameTimeText;
    public float gameTime;
    public GameObject cubeBlackPrefab;
    private LSLMarkerStream Spawn_marker;



    // Start is called before the first frame update
    void Start()
    {
        Spawn_marker = FindObjectOfType<LSLMarkerStream>();
        InvokeRepeating("SpawnYellow", 2f, 2f);
        InvokeRepeating("SpawnBlue", 1f, 2.5f);
        InvokeRepeating("SpawnBlack", 5f, 7f);
    }
    private void Update()
    {
        gameTime -= Time.deltaTime;
        if (gameTime < 1)
        {
            gameTime = 0;
        }
        gameTimeText.text = gameTime.ToString();
    }
    public void SpawnYellow()
    {
        Spawn_marker.Write("yellow spawned");
        GameObject cubeYellow = Instantiate(cubeYellowPrefab) as GameObject;
        cubeYellow.transform.position = spawnPoints[Random.Range(0, spawnPoints.Length)].transform.position;
        

    }
    public void SpawnBlue()
    {
        GameObject cubeBlue = Instantiate(cubeBluePrefab) as GameObject;
        Spawn_marker.Write("blue spawned");
        cubeBlue.transform.position = spawnPoints[Random.Range(0, spawnPoints.Length)].transform.position;
        
    }

    public void SpawnBlack()
    {
        GameObject cubeBlack = Instantiate(cubeBlackPrefab) as GameObject;
        cubeBlack.transform.position = spawnPointsBlack[Random.Range(0, spawnPointsBlack.Length)].transform.position;
        Spawn_marker.Write("black spawned");
    }
}