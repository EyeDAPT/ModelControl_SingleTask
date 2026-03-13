using UnityEngine;

public class DifficultyButton : MonoBehaviour
{
    public enum DifficultyChange { Easier, Harder, Same }

    public DifficultyChange difficultyChange;
    public core_audio coreAudioManager;  // Assigned via Inspector.

    public void OnButtonPress()
    {
        if (coreAudioManager != null)
        {
            float adjustment = 0f;
            switch (difficultyChange)
            {
                case DifficultyChange.Easier:
                    adjustment = 0.3f;
                    break;
                case DifficultyChange.Harder:
                    adjustment = -0.3f;
                    break;
                case DifficultyChange.Same:
                    adjustment = -0.1f;
                    break;
            }

            coreAudioManager.AdjustDifficulty(adjustment);
        }
        else
        {
            Debug.LogWarning("coreAudioManager not assigned on " + gameObject.name);
        }
    }
}
