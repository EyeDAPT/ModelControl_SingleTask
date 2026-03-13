using UnityEngine;

public class PanelManager : MonoBehaviour
{
    public Transform playerCamera;  // Assign via Inspector or auto-detect in Start
    public float distanceFromCamera = 2f;
    public Vector3 offset = Vector3.zero;

    public GameObject keypadPanel;
    public GameObject difficultyPanel;

    void Start()
    {
        if (playerCamera == null)
        {
            playerCamera = Camera.main.transform;
        }

        HideAllPanels();  // Start with both hidden
    }

    void LateUpdate()
    {
        Vector3 targetPosition = playerCamera.position + playerCamera.forward * distanceFromCamera + offset;
        transform.position = targetPosition;

        transform.LookAt(playerCamera);
        transform.Rotate(0, 180, 0);  // Flip if needed to face camera correctly
    }

    public void ShowKeypad()
    {
        HideAllPanels();
        keypadPanel.SetActive(true);
    }

    public void ShowDifficultyMenu()
    {
        HideAllPanels();
        difficultyPanel.SetActive(true);
    }

    public void HideAllPanels()
    {
        keypadPanel.SetActive(false);
        difficultyPanel.SetActive(false);
    }
}
