using UnityEngine;
using UnityEngine.EventSystems;
using TMPro;

public class MenuButtonHandler : MonoBehaviour, IPointerClickHandler
{
    [Tooltip("The value this button represents (e.g., '0', '1', ..., 'Delete', 'Confirm')")]
    public string buttonValue;

    [Tooltip("Reference to the display Input Field (TextMeshPro) that shows the current entry")]
    public TMP_InputField displayField;

    // This method is called when the button is clicked by a pointer.
    public void OnPointerClick(PointerEventData eventData)
    {
        if (displayField == null)
        {
            Debug.LogError("Display Field is not assigned on " + gameObject.name);
            return;
        }

        // Process based on the button's value.
        if (buttonValue.Equals("Delete"))
        {
            // Remove the last character.
            if (displayField.text.Length > 0)
            {
                displayField.text = displayField.text.Substring(0, displayField.text.Length - 1);
            }
        }
        else if (buttonValue.Equals("Confirm"))
        {
            // Process the confirmed input.
            Debug.Log("Confirm button pressed. Input: " + displayField.text);
            // Here you could, for example, call a method on your game manager to process the answer.
            // For instance: GameManager.Instance.ProcessKeypadInput(displayField.text);
        }
        else
        {
            // Append the digit or character.
            displayField.text += buttonValue;
        }
    }
}
