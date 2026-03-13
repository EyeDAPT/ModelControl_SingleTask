using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TimeToLive : MonoBehaviour
{
    public float timeToLive = 8f;

    void Start()
    {
        Destroy(gameObject, timeToLive);
    }
}