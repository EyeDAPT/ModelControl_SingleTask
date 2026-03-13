using UnityEngine;

public class Pin2 : MonoBehaviour
{
    public Transform playerCamera;  // Assign in Inspector, or auto-find
    public float distanceFromCamera = 2f;
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
        Vector3 targetPosition = playerCamera.position + playerCamera.forward * distanceFromCamera + offset;
        transform.position = targetPosition;

        transform.LookAt(playerCamera);
        transform.Rotate(0, 180, 0);  // Flip to face correctly
    }
}

