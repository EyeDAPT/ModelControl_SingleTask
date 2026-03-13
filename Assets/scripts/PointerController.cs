using UnityEngine;
using Valve.VR.Extras;
using TMPro;
using UnityEngine.UI;
using Assets.LSL4Unity.Scripts;

public class PointerController : SteamVR_LaserPointer
{
    public int score_yellow;
    public TextMeshPro counterTextYellow;
    private LSLMarkerStream Destroy_marker;

    public override void OnPointerClick(PointerEventArgs e)
    {
        //base.OnPointerClick(e);

        // Try to get a Unity Button on the target
       // Button uiBtn = e.target.GetComponent<Button>();
        //if (uiBtn != null)
        //{
            // This triggers the Unity UI onClick event, 
            // which is presumably mapped to KeypadDigitButton.OnButtonPress()
         //   uiBtn.onClick.Invoke();
        //    return;
        //}

        if (e.target.gameObject.CompareTag("yellow"))
        {
            Destroy(e.target.gameObject);
            score_yellow++;
            counterTextYellow.SetText(score_yellow.ToString());

            if (Destroy_marker == null)
            {
                Destroy_marker = FindObjectOfType<LSLMarkerStream>();
            }
            Destroy_marker.Write("yellow destroyed");
        }
    }
}
