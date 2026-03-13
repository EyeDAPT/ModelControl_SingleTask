using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class CountDown : MonoBehaviour
{
    public TextMeshPro countDownTimer;
    public float timeRemaining = 45;
    public int seconds;

    public bool timerIsRunning = false;

    private void Start()
    {
        // Starts the timer automatically
        timerIsRunning = true;
    }
    void Update()
    {
        if (timerIsRunning)
        {
            if (timeRemaining > 0)
            {
                timeRemaining -= Time.deltaTime;
                seconds = (int) (timeRemaining % 60);
            }
            else
            {
                ResetTimer();
            }
        }
        countDownTimer.text = seconds.ToString();
    }
    public void ResetTimer()
    {
        timeRemaining = 45; // Set the desired starting time
        seconds = (int)timeRemaining;
        timerIsRunning = true;
        countDownTimer.text = seconds.ToString();

    }

}
