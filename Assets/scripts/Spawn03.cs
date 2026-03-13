using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Valve.VR;
using TMPro;
using Assets.LSL4Unity.Scripts;

public class Spawn03 : MonoBehaviour
{

    public GameObject cubeYellowPrefab;
    public GameObject cubeBluePrefab;
    public Transform[] spawnPoints;
    public TextMeshPro gameTimeText;
    public float gameTime;

    private LSLMarkerStream Spawn_marker;



    // Start is called before the first frame update
    void Awake()
    {
        Invoke("SpawnYellow", 0f);
        Invoke("SpawnBlue", 0f);
        Spawn_marker = FindObjectOfType<LSLMarkerStream>();
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
        GameObject cubeYellow1 = Instantiate(cubeYellowPrefab) as GameObject;
        cubeYellow1.transform.position = spawnPoints[0].transform.position;
        GameObject cubeYellow2 = Instantiate(cubeYellowPrefab) as GameObject;
        cubeYellow2.transform.position = spawnPoints[12].transform.position;
        GameObject cubeYellow3 = Instantiate(cubeYellowPrefab) as GameObject;
        cubeYellow3.transform.position = spawnPoints[5].transform.position;
        GameObject cubeYellow5 = Instantiate(cubeYellowPrefab) as GameObject;
        cubeYellow5.transform.position = spawnPoints[18].transform.position;

    }
    public void SpawnBlue()
    {
        GameObject cubeBlue1 = Instantiate(cubeBluePrefab) as GameObject;
        cubeBlue1.transform.position = spawnPoints[2].transform.position;
        GameObject cubeBlue2 = Instantiate(cubeBluePrefab) as GameObject;
        cubeBlue2.transform.position = spawnPoints[7].transform.position;
        GameObject cubeBlue4 = Instantiate(cubeBluePrefab) as GameObject;
        cubeBlue4.transform.position = spawnPoints[16].transform.position;
        GameObject cubeBlue5 = Instantiate(cubeBluePrefab) as GameObject;
        cubeBlue5.transform.position = spawnPoints[13].transform.position;
    }
}