using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Valve.VR;
using TMPro;
using Assets.LSL4Unity.Scripts;
using UnityEngine.SceneManagement;

public class Spawn : MonoBehaviour
{

    public GameObject cubeYellowPrefab;
    public GameObject cubeBluePrefab;
    public Transform[] spawnPoints;
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
            SceneManager.LoadScene("Spawn00");
        }
        

    }
    public void SpawnYellow()
    {
        GameObject cubeYellow1 = Instantiate(cubeYellowPrefab) as GameObject;
        cubeYellow1.transform.position = spawnPoints[2].transform.position;
        GameObject cubeYellow2 = Instantiate(cubeYellowPrefab) as GameObject;
        cubeYellow2.transform.position = spawnPoints[4].transform.position;
        GameObject cubeYellow3 = Instantiate(cubeYellowPrefab) as GameObject;
        cubeYellow3.transform.position = spawnPoints[7].transform.position;
        GameObject cubeYellow4 = Instantiate(cubeYellowPrefab) as GameObject;
        cubeYellow4.transform.position = spawnPoints[9].transform.position;
        GameObject cubeYellow5 = Instantiate(cubeYellowPrefab) as GameObject;
        cubeYellow5.transform.position = spawnPoints[17].transform.position;

    }
    public void SpawnBlue() 
    {
        GameObject cubeBlue1 = Instantiate(cubeBluePrefab) as GameObject;
        cubeBlue1.transform.position = spawnPoints[1].transform.position;
        GameObject cubeBlue2 = Instantiate(cubeBluePrefab) as GameObject;
        cubeBlue2.transform.position = spawnPoints[3].transform.position;
        GameObject cubeBlue3 = Instantiate(cubeBluePrefab) as GameObject;
        cubeBlue3.transform.position = spawnPoints[8].transform.position;
        GameObject cubeBlue4 = Instantiate(cubeBluePrefab) as GameObject;
        cubeBlue4.transform.position = spawnPoints[16].transform.position;
        GameObject cubeBlue5 = Instantiate(cubeBluePrefab) as GameObject;
        cubeBlue5.transform.position = spawnPoints[19].transform.position;
    }
}