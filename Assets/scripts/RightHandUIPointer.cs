using UnityEngine;
using HTC.UnityPlugin.Pointer3D;
using HTC.UnityPlugin.Vive;

/// <summary>
/// Simple script that ensures there's a ViveRaycaster on the same object
/// and assigns it to the RightHand role.
/// </summary>
[RequireComponent(typeof(ViveRaycaster))]
public class RightHandUIPointer : MonoBehaviour
{
    private ViveRaycaster viveRaycaster;

    private void Awake()
    {
        viveRaycaster = GetComponent<ViveRaycaster>();
        if (viveRaycaster == null)
        {
            Debug.LogError("No ViveRaycaster found on " + name + ".");
            return;
        }

        // If your VIU supports SetEx():
        viveRaycaster.viveRole.SetEx(HandRole.RightHand);
    }
}
