using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour
{
    Spawn02 Level1;
    // Start is called before the first frame update
    void Start()
    {
        Level1.SpawnYellow();
        Debug.Log("worked");
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
