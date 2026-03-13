using UnityEngine;
using Valve.VR.Extras;
using TMPro;
using UnityEngine.UI;
using Assets.LSL4Unity.Scripts;

public class PointerControllerBlue : SteamVR_LaserPointer
{
    public int score_blue;
    public TextMeshPro counterTextBlue;

    // Reference to the input field where digits should be appended
    public TMP_Text displayText;

    private LSLMarkerStream Destroy_marker;
    
    

    public override void OnPointerClick(PointerEventArgs e)
    {
        base.OnPointerClick(e);

        // Check if the hit object is a digit button.
        KeypadDigitButton digitButton = e.target.GetComponent<KeypadDigitButton>();
        if (digitButton != null)
        {
            // Let the digit button handle its own logic.
            digitButton.AppendDigit();
            return;
        }


        // If the object has a KeypadDeleteButton component, call its delete logic.
        KeypadDeleteButton deleteButton = e.target.GetComponent<KeypadDeleteButton>();
        if (deleteButton != null)
        {
            deleteButton.DeleteLastCharacter();
            return;
        }

        // If the object has a KeypadConfirmButton component, call its confirm logic.
        KeypadConfirmButton confirmButton = e.target.GetComponent<KeypadConfirmButton>();
        if (confirmButton != null)
        {
            confirmButton.Confirm();
            return;
        }

        // Existing logic for objects tagged "blue"
        if (e.target.gameObject.CompareTag("blue"))
        {
            Destroy(e.target.gameObject);
            score_blue++;
            counterTextBlue.SetText(score_blue.ToString());

            if (Destroy_marker == null)
            {
                Destroy_marker = FindObjectOfType<LSLMarkerStream>();
            }
            Destroy_marker.Write("blue destroyed");
        }
    }
}
