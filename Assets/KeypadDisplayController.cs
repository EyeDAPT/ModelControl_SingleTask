using UnityEngine;
using TMPro;

public class KeypadDisplayController : MonoBehaviour
{
    public TMP_Text displayText;   // Assign in Inspector
    private string currentValue = "00";

    private void Start()
    {
        UpdateDisplay();
    }

    public void AppendDigit(string digit)
    {
        // If the current value is "00", replace it; otherwise append
        if (currentValue == "00")
            currentValue = digit;
        else
            currentValue += digit;
        UpdateDisplay();
    }

    public void DeleteLastDigit()
    {
        if (currentValue.Length > 1)
            currentValue = currentValue.Substring(0, currentValue.Length - 1);
        else
            currentValue = "00";  // Reset to default if all digits removed
        UpdateDisplay();
    }

    public void SetValue(string newValue)
    {
        currentValue = newValue;
        UpdateDisplay();
    }

    public string GetValue()
    {
        return currentValue;
    }

    private void UpdateDisplay()
    {
        if (displayText != null)
            displayText.text = currentValue;
    }
}

