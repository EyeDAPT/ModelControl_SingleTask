using UnityEngine;
using TMPro;
using UnityEngine.UI;
using System.Collections;

public class KeypadDigitButton : MonoBehaviour
{
    public enum ButtonType { Digit, Delete, Confirm }
    [Tooltip("Set what type of button this is.")]
    public ButtonType buttonType = ButtonType.Digit;

    [Tooltip("The digit this button represents (only used if ButtonType is Digit).")]
    public string digitValue = "0";

    [Tooltip("Reference to the display text (e.g., a TextMeshPro component) that shows the keypad value.")]
    public TMP_InputField keypadDisplay;

    [Header("Cooldown Settings")]
    [Tooltip("Cooldown duration in seconds.")]
    public float cooldownDuration = 1f;

    private float nextAllowedPressTime = 0f;

    // Track if we've already pressed this button in the current frame
    private int lastPressFrame = -1;

    private Button uiButton;

    private void Awake()
    {
        uiButton = GetComponent<Button>();
    }

    public void OnButtonPress()
    {
        // A) Guard to avoid double calls in the same frame
        if (Time.frameCount == lastPressFrame)
        {
            // Already pressed this frame -> ignore
            return;
        }
        lastPressFrame = Time.frameCount;

        // B) Existing time-based cooldown check
        if (Time.time < nextAllowedPressTime)
        {
            Debug.Log("Ignored press: on cooldown");
            return;
        }

        // If we're good, set next cooldown
        nextAllowedPressTime = Time.time + cooldownDuration;

        // Optionally disable the UI Button so user sees it grayed out
        if (uiButton)
        {
            uiButton.interactable = false;
            StartCoroutine(ReenableButtonAfterDelay(cooldownDuration));
        }

        // Proceed with button logic
        if (!keypadDisplay)
        {
            Debug.LogWarning("Keypad Display is not assigned on " + gameObject.name);
            return;
        }

        switch (buttonType)
        {
            case ButtonType.Digit:
                AppendDigit();
                break;
            case ButtonType.Delete:
                DeleteLastCharacter();
                break;
            case ButtonType.Confirm:
                ConfirmInput();
                break;
        }
    }

    private IEnumerator ReenableButtonAfterDelay(float delay)
    {
        yield return new WaitForSeconds(delay);
        if (uiButton) uiButton.interactable = true;
    }

    public void AppendDigit()
    {
        if (keypadDisplay.text == "00")
        {
            keypadDisplay.text = digitValue;
        }
        else
        {
            keypadDisplay.text += digitValue;
        }
    }

    public void DeleteLastCharacter()
    {
        if (keypadDisplay.text.Length > 1)
        {
            keypadDisplay.text = keypadDisplay.text.Substring(0, keypadDisplay.text.Length - 1);
        }
        else
        {
            keypadDisplay.text = "00";
        }
    }

    public void ConfirmInput()
    {
        Debug.Log("Confirm pressed. Final value: " + keypadDisplay.text);
        // e.g. SomeManager.Instance.ProcessInput(keypadDisplay.text);
    }
}
