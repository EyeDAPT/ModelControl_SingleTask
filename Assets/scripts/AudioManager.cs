using UnityEngine;

public class AudioManager : MonoBehaviour
{
    public static AudioManager instance;
    public AudioSource soundEffectSource; // Assign in Inspector

    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
        }
    }

    public void PlaySound(AudioClip clip)
    {
        if (soundEffectSource != null && clip != null)
        {
            soundEffectSource.PlayOneShot(clip);
        }
    }
}
