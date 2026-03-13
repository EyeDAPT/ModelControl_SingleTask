using System.Runtime.InteropServices;
using UnityEngine;
using ViveSR.anipal.Eye;
using ViveSR.anipal;
using ViveSR;

public class GazeRays : MonoBehaviour
{
    private static EyeData eyeData = new EyeData();
    private bool eye_callback_registered = false;

    // Render gaze rays.
    // Press K to toggle.
    // Left is blue, right is red
    private bool renderVisuals = true;

    // Freeze the gaze visuals so we can inspect them more easily.
    // Press F to toggle.
    private bool isFrozen = false;

    private GameObject LeftVisual;
    private GameObject RightVisual;

    void InitLineRenderer(LineRenderer lr)
    {
        lr.startWidth = 0.005f;
        lr.endWidth = 0.005f;
        lr.material = new Material(Shader.Find("Sprites/Default"));
    }

    void Start()
    {
        if (!SRanipal_Eye_Framework.Instance.EnableEye)
        {
            enabled = false;
            return;
        }

        LeftVisual = new GameObject("Left gaze ray visual");
        RightVisual = new GameObject("Right gaze ray visual");

        LeftVisual.AddComponent<LineRenderer>();
        RightVisual.AddComponent<LineRenderer>();

        {
            LineRenderer lr = LeftVisual.GetComponent<LineRenderer>();
            InitLineRenderer(lr);
            lr.startColor = Color.green;
            lr.endColor = Color.green;
        }

        {
            LineRenderer lr = RightVisual.GetComponent<LineRenderer>();
            InitLineRenderer(lr);
            lr.startColor = Color.red;
            lr.endColor = Color.red;
        }
    }

    void InitEyeData()
    {
        if (
            SRanipal_Eye_Framework.Status != SRanipal_Eye_Framework.FrameworkStatus.WORKING &&
            SRanipal_Eye_Framework.Status != SRanipal_Eye_Framework.FrameworkStatus.NOT_SUPPORT
        ) return;

        if (
            SRanipal_Eye_Framework.Instance.EnableEyeDataCallback == true &&
            eye_callback_registered == false
        )
        {
            SRanipal_Eye.WrapperRegisterEyeDataCallback(
                Marshal.GetFunctionPointerForDelegate((SRanipal_Eye.CallbackBasic)EyeCallback)
            );
            eye_callback_registered = true;
        }
        else if (
            SRanipal_Eye_Framework.Instance.EnableEyeDataCallback == false &&
            eye_callback_registered == true
        )
        {
            SRanipal_Eye.WrapperUnRegisterEyeDataCallback(
                Marshal.GetFunctionPointerForDelegate((SRanipal_Eye.CallbackBasic)EyeCallback)
            );
            eye_callback_registered = false;
        }
    }

    // Store the results from GetGazeRay for both eyes
    struct RawGazeRays
    {
        public Vector3 leftOrigin;
        public Vector3 leftDir;

        public Vector3 rightOrigin;
        public Vector3 rightDir;

        // Gaze origin and direction are in local coordinates relative to the
        // camera. Here we convert them to absolute coordinates.
        public RawGazeRays Absolute(Transform t)
        {
            var ans = new RawGazeRays();
            ans.leftOrigin = t.TransformPoint(leftOrigin);
            ans.rightOrigin = t.TransformPoint(rightOrigin);
            ans.leftDir = t.TransformDirection(leftDir);
            ans.rightDir = t.TransformDirection(rightDir);
            return ans;
        }
    }

    void GetGazeRays(out RawGazeRays r)
    {
        r = new RawGazeRays();
        if (eye_callback_registered)
        {
            // These return a bool depending whether the gaze ray is available.
            // We can ignore this return value for now.
            SRanipal_Eye.GetGazeRay(GazeIndex.LEFT, out r.leftOrigin, out r.leftDir, eyeData);
            SRanipal_Eye.GetGazeRay(GazeIndex.RIGHT, out r.rightOrigin, out r.rightDir, eyeData);
        }
        else
        {
            SRanipal_Eye.GetGazeRay(GazeIndex.LEFT, out r.leftOrigin, out r.leftDir);
            SRanipal_Eye.GetGazeRay(GazeIndex.RIGHT, out r.rightOrigin, out r.rightDir);
        }

        // Convert from right-handed to left-handed coordinate system.
        // This fixes a bug in the SRanipal Unity package.
        // r.leftOrigin.x *= -1;
        // r.rightOrigin.x *= -1;
    }

    void RenderGazeRays(RawGazeRays gr)
    {
        LineRenderer llr = LeftVisual.GetComponent<LineRenderer>();
        llr.SetPosition(0, gr.leftOrigin);
        llr.SetPosition(1, gr.leftOrigin + gr.leftDir * 500);

        LineRenderer rlr = RightVisual.GetComponent<LineRenderer>();
        rlr.SetPosition(0, gr.rightOrigin);
        rlr.SetPosition(1, gr.rightOrigin + gr.rightDir * 500);
    }

    void SetRenderVisuals(bool value)
    {
        renderVisuals = value;
        LeftVisual.SetActive(value);
        RightVisual.SetActive(value);
    }

    void Update()
    {
        if (Input.GetKeyDown(KeyCode.K))
        {
            // Toggle visuals
            SetRenderVisuals(!renderVisuals);
        }

        if (Input.GetKeyDown(KeyCode.F))
        {
            // Freeze visuals
            isFrozen = !isFrozen;
        }

        if (renderVisuals && !isFrozen)
        {
            InitEyeData();

            RawGazeRays localGazeRays;
            GetGazeRays(out localGazeRays);
            RawGazeRays gazeRays = localGazeRays.Absolute(Camera.main.transform);
            RenderGazeRays(gazeRays);
        }
    }

    void Release()
    {
        if (eye_callback_registered == true)
        {
            SRanipal_Eye.WrapperUnRegisterEyeDataCallback(
                Marshal.GetFunctionPointerForDelegate((SRanipal_Eye.CallbackBasic)EyeCallback)
            );
            eye_callback_registered = false;
        }

        Destroy(LeftVisual);
        Destroy(RightVisual);
    }

    private static void EyeCallback(ref EyeData eye_data)
    {
        eyeData = eye_data;
    }
}
