using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Level1 : MonoBehaviour
{
    public GameObject yellowCubePrefab;
    public GameObject blueCubePrefab;
    public int numYellowCubes = 5;
    public int numBlueCubes = 5;

    void Start()
    {
        for (int i = 0; i < numYellowCubes; i++)
        {
            GameObject yellowCube = Instantiate(yellowCubePrefab);
            yellowCube.transform.position = new Vector3(Random.Range(3, 25), Random.Range(3, 15), -5);
        }
    
         for (int j = 0; j < numBlueCubes; j++)
            { 
            GameObject blueCube = Instantiate(blueCubePrefab);
            blueCube.transform.position = new Vector3(Random.Range(3, 25), Random.Range(3, 15), -5);
        }   
    }
}
