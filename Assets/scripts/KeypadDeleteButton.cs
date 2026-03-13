using TMPro;
using UnityEngine;

public class KeypadDeleteButton : MonoBehaviour
{
    public TMP_Text keypadDisplay;

    public void DeleteLastCharacter()
    {
        if (!string.IsNullOrEmpty(keypadDisplay.text))
        {
            keypadDisplay.text = keypadDisplay.text.Substring(0, keypadDisplay.text.Length - 1);
        }
    }
}

