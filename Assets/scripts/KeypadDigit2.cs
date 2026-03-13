using UnityEngine;
using TMPro;  // Needed if you are referencing TMP_Text

public class KeypadDigit2: MonoBehaviour
{
    [Tooltip("The digit this button represents, e.g., '1'.")]
    public string digitValue = "1";

    [Tooltip("Reference to the TextMeshPro text field that displays the keypad entry.")]
    public TMP_Text keypadDisplay;

    /// <summary>
    /// Call this from the button's OnClick event.
    /// </summary>
    public void AppendDigit()
    {
        if (keypadDisplay == null)
        {
            Debug.LogWarning("keypadDisplay is not assigned in KeypadDigitButton.");
            return;
        }

        // If the display is "00", replace it with the new digit; otherwise, append.
        if (keypadDisplay.text == "00")
        {
            keypadDisplay.text = digitValue;
        }
        else
        {
            keypadDisplay.text += digitValue;
        }
    }
}

