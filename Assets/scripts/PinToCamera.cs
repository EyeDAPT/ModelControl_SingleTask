using UnityEngine;

public class PinToCamera : MonoBehaviour
{
    // Reference to the player's camera (set this in the Inspector or find it in Start)
    public Transform playerCamera;

    // How far in front of the camera the keypad should appear
    public float distanceFromCamera = 2f;

    // Optional offset for fine tuning
    public Vector3 offset = Vector3.zero;

    void Start()
    {
        if (playerCamera == null)
        {
            playerCamera = Camera.main.transform;
        }
    }

    void LateUpdate()
    {
        // Position the keypad in front of the camera
        transform.position = playerCamera.position + playerCamera.forward * distanceFromCamera + offset;

        // Make the keypad face the camera (optional, if you want it always oriented towards the player)
        transform.LookAt(playerCamera);
        // Optionally, rotate 180 degrees so it isn't backward:
        transform.Rotate(0, 180, 0);
    }
}

