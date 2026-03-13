using System.Collections;
using System.Runtime.InteropServices;
using UnityEngine;
using System;
using System.IO;
using ViveSR.anipal.Eye;
using ViveSR.anipal;
using ViveSR;


public class GazeRays1 : MonoBehaviour
{
    // ********************************************************************************************************************
    //
    // Define user ID information.
    // - The developers can define the user ID format such as "ABC_001". The ID is used for the name of text file
    // that records the measured eye movement data.
    //
    // ********************************************************************************************************************
    public static int UserID = 11; // Always change Participant Number for every participant
    public static int scenario = 22; // Always change Scenario Number for every scenario
                                     //public string UserID; // Definte ID number such as 001, ABC001, etc.
    public string Path = Directory.GetCurrentDirectory();
    //string File_Path = Directory.GetCurrentDirectory() + "\video_" + UserID + ".txt";
    public string File_Path = Directory.GetCurrentDirectory() + "P" + UserID + "_" + "S" + scenario + ".txt";
    // ********************************************************************************************************************
    //
    //  Parameters for time-related information.
    //
    // ********************************************************************************************************************
    public static int cnt_callback = 0;
    public int cnt_saccade = 0, Endbuffer = 3, SaccadeTimer = 30;
    float Timeout = 1.0f, InitialTimer = 0.0f;
    private static long SaccadeEndTime = 0;
    private static long MeasureTime, CurrentTime, MeasureEndTime = 0;
    private static float time_stamp;
    private static int frame;
    private static int hour, minute, second;

    // ********************************************************************************************************************
    //
    //  Parameters for eye data.
    //
    // ********************************************************************************************************************
    private static EyeData eyeData = new EyeData();
    public EyeParameter eye_parameter = new EyeParameter();
    public GazeRayParameter gaze = new GazeRayParameter();
    private static bool eye_callback_registered = false;
    private static UInt64 eye_valid_L, eye_valid_R;                 // The bits explaining the validity of eye data.
    private static float openness_L, openness_R;                    // The level of eye openness.
    private static float pupil_diameter_L, pupil_diameter_R;        // Diameter of pupil dilation.
    private static Vector2 pos_sensor_L, pos_sensor_R;              // Positions of pupils.
    private static Vector3 gaze_origin_L, gaze_origin_R;            // Position of gaze origin.
    private static Vector3 gaze_direct_L, gaze_direct_R;            // Direction of gaze ray.
                                                                    // private static float frown_L, frown_R;                          // The level of user's frown.
                                                                    // private static float squeeze_L, squeeze_R;                      // The level to show how the eye is closed tightly.
                                                                    // private static float wide_L, wide_R;                            // The level to show how the eye is open widely.
    private static double gaze_sensitive;                           // The sensitive factor of gaze ray.
    private static float distance_C;                                // Distance from the central point of right and left eyes.
    private static bool distance_valid_C;                           // Validity of combined data of right and left eyes.
    public bool cal_need;                                           // Calibration judge.
    public bool result_cal;                                         // Result of calibration.
    private static int track_imp_cnt = 0;
    private static TrackingImprovement[] track_imp_item;

    //private static EyeData eyeData = new EyeData();
    //private static bool eye_callback_registered = false;

    //public Text uiText;
    private float updateSpeed = 0;
    private static float lastTime, currentTime;


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

    // ********************************************************************************************************************
    //
    //  Start is called before the first frame update. The Start() function is performed only one time.
    //
    // ********************************************************************************************************************
    void Start()
    {
        //File_Path = Directory.GetCurrentDirectory() + "\\Assets" + UserID + ".txt";
        InputUserID();                              // Check if the file with the same ID exists.
                                                    //Invoke("SystemCheck", 0.5f);                // System check.
                                                    //SRanipal_Eye_v2.LaunchEyeCalibration();     // Perform calibration for eye tracking.
                                                    //Calibration();
                                                    //TargetPosition();                           // Implement the targets on the VR view.
                                                    //Invoke("Measurement", 0.5f);                // Start the measurement of ocular movements in a separate callback function.  

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
            lr.startColor = Color.blue;
            lr.endColor = Color.blue;
        }

        {
            LineRenderer lr = RightVisual.GetComponent<LineRenderer>();
            InitLineRenderer(lr);
            lr.startColor = Color.red;
            lr.endColor = Color.red;
        }
    }

    void InputUserID()
    {
        Debug.Log(File_Path);

        if (File.Exists(File_Path))
        {
            Debug.Log("File with the same UserID already exists. Please change the UserID in the C# code.");

            //  When the same file name is found, we stop playing Unity.

            if (UnityEditor.EditorApplication.isPlaying)
            {
                UnityEditor.EditorApplication.isPlaying = false;
            }
        }
        else
        {
            Data_txt();
        }
    }

    // ********************************************************************************************************************
    //
    //  Check if the system works properly.
    //
    // ********************************************************************************************************************
    void SystemCheck()
    {
        if (SRanipal_Eye_API.GetEyeData(ref eyeData) == ViveSR.Error.WORK)
        {
            Debug.Log("Device is working properly.");
        }

        if (SRanipal_Eye_API.GetEyeParameter(ref eye_parameter) == ViveSR.Error.WORK)
        {
            Debug.Log("Eye parameters are measured.");
        }

        //  Check again if the initialisation of eye tracking functions successfully. If not, we stop playing Unity.
        Error result_eye_init = SRanipal_API.Initial(SRanipal_Eye.ANIPAL_TYPE_EYE, IntPtr.Zero);

        if (result_eye_init == Error.WORK)
        {
            Debug.Log("[SRanipal] Initial Eye: " + result_eye_init);
        }
        else
        {
            Debug.LogError("[SRanipal] Initial Eye: " + result_eye_init);

            if (UnityEditor.EditorApplication.isPlaying)
            {
                UnityEditor.EditorApplication.isPlaying = false;    // Stops Unity editor.
            }
        }
    }

    // ********************************************************************************************************************
    //
    //  Calibration is performed if the calibration is necessary.
    //
    // ********************************************************************************************************************
    void Calibration()
    {
        SRanipal_Eye_API.IsUserNeedCalibration(ref cal_need);           // Check the calibration status. If needed, we perform the calibration.

        if (cal_need == true)
        {
            result_cal = SRanipal_Eye.LaunchEyeCalibration();

            if (result_cal == true)
            {
                Debug.Log("Calibration is done successfully.");
            }

            else
            {
                Debug.Log("Calibration is failed.");
                if (UnityEditor.EditorApplication.isPlaying)
                {
                    UnityEditor.EditorApplication.isPlaying = false;    // Stops Unity editor if the calibration if failed.
                }
            }
        }

        if (cal_need == false)
        {
            Debug.Log("Calibration is not necessary");
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
        llr.SetPosition(1, gr.leftOrigin + gr.leftDir * 20);

        LineRenderer rlr = RightVisual.GetComponent<LineRenderer>();
        rlr.SetPosition(0, gr.rightOrigin);
        rlr.SetPosition(1, gr.rightOrigin + gr.rightDir * 20);
    }

    void SetRenderVisuals(bool value)
    {
        renderVisuals = value;
        LeftVisual.SetActive(value);
        RightVisual.SetActive(value);
    }

    // ********************************************************************************************************************
    //
    //  Create a text file and header names of each column to store the measured data of eye movements.
    //
    // ********************************************************************************************************************
    void Data_txt()
    {
        string variable =
        "global_time" + "," +
        "time(100ns)" + "," +
        "time_stamp(ms)" + "," +
        "frame" + "," +
        "eye_valid_L" + "," +
        "eye_valid_R" + "," +
        "openness_L" + "," +
        "openness_R" + "," +
        "pupil_diameter_L(mm)" + "," +
        "pupil_diameter_R(mm)" + "," +
        "pos_sensor_L.x" + "," +
        "pos_sensor_L.y" + "," +
        "pos_sensor_R.x" + "," +
        "pos_sensor_R.y" + "," +
        "gaze_origin_L.x(mm)" + "," +
        "gaze_origin_L.y(mm)" + "," +
        "gaze_origin_L.z(mm)" + "," +
        "gaze_origin_R.x(mm)" + "," +
        "gaze_origin_R.y(mm)" + "," +
        "gaze_origin_R.z(mm)" + "," +
        "gaze_direct_L.x" + "," +
        "gaze_direct_L.y" + "," +
        "gaze_direct_L.z" + "," +
        "gaze_direct_R.x" + "," +
        "gaze_direct_R.y" + "," +
        "gaze_direct_R.z" + "," +
        "gaze_sensitive" + "," +
        // "frown_L" + "," +
        // "frown_R" + "," +
        // "squeeze_L" + "," +
        // "squeeze_R" + "," +
        // "wide_L" + "," +
        // "wide_R" + "," +
        "distance_valid_C" + "," +
        "distance_C(mm)" + "," +
        "track_imp_cnt" +
        Environment.NewLine;

        File.AppendAllText("eyedata_" + "P" + UserID + "_" + "S" + scenario + ".txt", variable);
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

        if (SRanipal_Eye_Framework.Status != SRanipal_Eye_Framework.FrameworkStatus.WORKING) return;


        if (SRanipal_Eye_Framework.Instance.EnableEyeDataCallback == true && eye_callback_registered == false)
        {
            SRanipal_Eye.WrapperRegisterEyeDataCallback(Marshal.GetFunctionPointerForDelegate((SRanipal_Eye.CallbackBasic)EyeCallback));
            eye_callback_registered = true;
        }
        else if (SRanipal_Eye_Framework.Instance.EnableEyeDataCallback == false && eye_callback_registered == true)
        {
            SRanipal_Eye.WrapperUnRegisterEyeDataCallback(Marshal.GetFunctionPointerForDelegate((SRanipal_Eye.CallbackBasic)EyeCallback));
            eye_callback_registered = false;
        }

        float timeNow = Time.realtimeSinceStartup;
    }
    private void OnDisable()
    {
        Release();
    }

    void OnApplicationQuit()
    {
        Release();
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

    /// <summary>
    /// Required class for IL2CPP scripting backend support
    /// </summary>
    internal class MonoPInvokeCallbackAttribute : System.Attribute
    {
        public MonoPInvokeCallbackAttribute() { }
    }

    /// <summary>
    /// Eye tracking data callback thread.
    /// Reports data at ~120hz
    /// MonoPInvokeCallback attribute required for IL2CPP scripting backend
    /// </summary>
    /// <param name="eye_data">Reference to latest eye_data</param>
    [MonoPInvokeCallback]
    private static void EyeCallback(ref EyeData eye_data)
    {
        EyeParameter eye_parameter = new EyeParameter();
        SRanipal_Eye_API.GetEyeParameter(ref eye_parameter);

        eyeData = eye_data;
        // do stuff with eyeData...

        //lastTime = currentTime;
        //currentTime = eyeData.timestamp;
        hour = DateTime.Now.Hour;
        minute = DateTime.Now.Minute;
        second = DateTime.Now.Second;
        MeasureTime = DateTime.Now.Ticks;
        time_stamp = eyeData.timestamp;
        frame = eyeData.frame_sequence;
        eye_valid_L = eyeData.verbose_data.left.eye_data_validata_bit_mask;
        eye_valid_R = eyeData.verbose_data.right.eye_data_validata_bit_mask;
        openness_L = eyeData.verbose_data.left.eye_openness;
        openness_R = eyeData.verbose_data.right.eye_openness;
        pupil_diameter_L = eyeData.verbose_data.left.pupil_diameter_mm;
        pupil_diameter_R = eyeData.verbose_data.right.pupil_diameter_mm;
        pos_sensor_L = eyeData.verbose_data.left.pupil_position_in_sensor_area;
        pos_sensor_R = eyeData.verbose_data.right.pupil_position_in_sensor_area;
        gaze_origin_L = eyeData.verbose_data.left.gaze_origin_mm;
        gaze_origin_R = eyeData.verbose_data.right.gaze_origin_mm;
        gaze_direct_L = eyeData.verbose_data.left.gaze_direction_normalized;
        gaze_direct_R = eyeData.verbose_data.right.gaze_direction_normalized;
        gaze_sensitive = eye_parameter.gaze_ray_parameter.sensitive_factor;
        // frown_L = eyeData.expression_data.left.eye_frown;
        // frown_R = eyeData.expression_data.right.eye_frown;
        // squeeze_L = eyeData.expression_data.left.eye_squeeze;
        // squeeze_R = eyeData.expression_data.right.eye_squeeze;
        // wide_L = eyeData.expression_data.left.eye_wide;
        // wide_R = eyeData.expression_data.right.eye_wide;
        distance_valid_C = eyeData.verbose_data.combined.convergence_distance_validity;
        distance_C = eyeData.verbose_data.combined.convergence_distance_mm;
        track_imp_cnt = eyeData.verbose_data.tracking_improvements.count;
        //track_imp_item = eyeData.verbose_data.tracking_improvements.items;

        //  Convert the measured data to string data to write in a text file.
        string value =

            hour.ToString() + ":" + minute.ToString() + ":" + second.ToString() + "," +
            MeasureTime.ToString() + "," +
            time_stamp.ToString() + "," +
            frame.ToString() + "," +
            eye_valid_L.ToString() + "," +
            eye_valid_R.ToString() + "," +
            openness_L.ToString() + "," +
            openness_R.ToString() + "," +
            pupil_diameter_L.ToString() + "," +
            pupil_diameter_R.ToString() + "," +
            pos_sensor_L.x.ToString() + "," +
            pos_sensor_L.y.ToString() + "," +
            pos_sensor_R.x.ToString() + "," +
            pos_sensor_R.y.ToString() + "," +
            gaze_origin_L.x.ToString() + "," +
            gaze_origin_L.y.ToString() + "," +
            gaze_origin_L.z.ToString() + "," +
            gaze_origin_R.x.ToString() + "," +
            gaze_origin_R.y.ToString() + "," +
            gaze_origin_R.z.ToString() + "," +
            gaze_direct_L.x.ToString() + "," +
            gaze_direct_L.y.ToString() + "," +
            gaze_direct_L.z.ToString() + "," +
            gaze_direct_R.x.ToString() + "," +
            gaze_direct_R.y.ToString() + "," +
            gaze_direct_R.z.ToString() + "," +
            gaze_sensitive.ToString() + "," +
            // frown_L.ToString() + "," +
            // frown_R.ToString() + "," +
            // squeeze_L.ToString() + "," +
            // squeeze_R.ToString() + "," +
            // wide_L.ToString() + "," +
            // wide_R.ToString() + "," +
            distance_valid_C.ToString() + "," +
            distance_C.ToString() + "," +
            track_imp_cnt.ToString() +
            //track_imp_item.ToString() +
            Environment.NewLine;

        File.AppendAllText("eyedata_" + "P" + UserID + "_" + "S" + scenario + ".txt", value);


    }
}
