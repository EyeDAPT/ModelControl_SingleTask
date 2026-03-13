using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Valve.VR;
using TMPro;
using Assets.LSL4Unity.Scripts;
using UnityEngine.SceneManagement;

public class Spawn02 : MonoBehaviour
{

    public GameObject cubeYellowPrefab;
    public GameObject cubeBluePrefab;
    public Transform[] spawnPoints;
    public Transform[] spawnPointsBlack;
    public TextMeshPro gameTimeText;
    public float gameTime;

    private LSLMarkerStream Spawn_marker;



    // Start is called before the first frame update
    void Start()
    {
        Invoke("SpawnYellow", 0f);
        Invoke("SpawnBlue", 0f);
        Spawn_marker = FindObjectOfType<LSLMarkerStream>();
        
    }
    private void Update()
    {
        gameTime -= Time.deltaTime;
        gameTimeText.text = gameTime.ToString();
        if (gameTime <= 0)
        {
            SceneManager.LoadScene("Spawn03");
        }

    }
    public void SpawnYellow()
    {
        GameObject cubeYellow1 = Instantiate(cubeYellowPrefab) as GameObject;
        cubeYellow1.transform.position = spawnPointsBlack[0].transform.position;
        GameObject cubeYellow2 = Instantiate(cubeYellowPrefab) as GameObject;
        cubeYellow2.transform.position = spawnPoints[7].transform.position;
        GameObject cubeYellow3 = Instantiate(cubeYellowPrefab) as GameObject;
        cubeYellow3.transform.position = spawnPointsBlack[9].transform.position;
        GameObject cubeYellow4 = Instantiate(cubeYellowPrefab) as GameObject;
        cubeYellow4.transform.position = spawnPoints[11].transform.position;
        GameObject cubeYellow5 = Instantiate(cubeYellowPrefab) as GameObject;
        cubeYellow5.transform.position = spawnPoints[2].transform.position;
        GameObject cubeYellow6 = Instantiate(cubeYellowPrefab) as GameObject;
        cubeYellow6.transform.position = spawnPointsBlack[19].transform.position;
        GameObject cubeYellow7 = Instantiate(cubeYellowPrefab) as GameObject;
        cubeYellow7.transform.position = spawnPointsBlack[12].transform.position;
        GameObject cubeYellow8 = Instantiate(cubeYellowPrefab) as GameObject;
        cubeYellow8.transform.position = spawnPoints[14].transform.position;
        GameObject cubeYellow9 = Instantiate(cubeYellowPrefab) as GameObject;
        cubeYellow9.transform.position = spawnPoints[1].transform.position;
        GameObject cubeYellow10 = Instantiate(cubeYellowPrefab) as GameObject;
        cubeYellow10.transform.position = spawnPointsBlack[18].transform.position;

    }
    public void SpawnBlue()
    {
        GameObject cubeBlue1 = Instantiate(cubeBluePrefab) as GameObject;
        cubeBlue1.transform.position = spawnPoints[4].transform.position;
        GameObject cubeBlue2 = Instantiate(cubeBluePrefab) as GameObject;
        cubeBlue2.transform.position = spawnPointsBlack[3].transform.position;
        GameObject cubeBlue3 = Instantiate(cubeBluePrefab) as GameObject;
        cubeBlue3.transform.position = spawnPoints[5].transform.position;
        GameObject cubeBlue4 = Instantiate(cubeBluePrefab) as GameObject;
        cubeBlue4.transform.position = spawnPointsBlack[6].transform.position;
        GameObject cubeBlue5 = Instantiate(cubeBluePrefab) as GameObject;
        cubeBlue5.transform.position = spawnPoints[8].transform.position;
        GameObject cubeBlue6 = Instantiate(cubeBluePrefab) as GameObject;
        cubeBlue6.transform.position = spawnPoints[10].transform.position;
        GameObject cubeBlue7 = Instantiate(cubeBluePrefab) as GameObject;
        cubeBlue7.transform.position = spawnPointsBlack[13].transform.position;
        GameObject cubeBlue8 = Instantiate(cubeBluePrefab) as GameObject;
        cubeBlue8.transform.position = spawnPointsBlack[15].transform.position;
        GameObject cubeBlue9 = Instantiate(cubeBluePrefab) as GameObject;
        cubeBlue9.transform.position = spawnPoints[16].transform.position;
        GameObject cubeBlue10 = Instantiate(cubeBluePrefab) as GameObject;
        cubeBlue10.transform.position = spawnPointsBlack[17].transform.position;
    }
}