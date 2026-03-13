using UnityEngine;

public class KeypadConfirmButton : MonoBehaviour
{
    // Reference to your core game manager script.
    // Assign this in the Inspector.
    public core_audio coreAudioManager;

    public void Confirm()
    {
        if (coreAudioManager != null)
        {
            // Call the method that normally gets triggered when the confirm button is pressed.
            Debug.LogWarning("unnecessary");
        }
        else
        {
            Debug.LogWarning("coreAudioManager not assigned in KeypadConfirmButton.");
        }
    }
}


