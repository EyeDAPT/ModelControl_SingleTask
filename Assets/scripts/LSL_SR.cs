using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Diagnostics;
using System.Runtime.InteropServices;
using System;
using System.IO;
using LSL;
using ViveSR.anipal.Eye;
using ViveSR.anipal;
using ViveSR;



public class LSL_SR : MonoBehaviour
{
    private static EyeData_v2 eyeData = new EyeData_v2();
    public EyeParameter eye_parameter = new EyeParameter();
    public GazeRayParameter gaze = new GazeRayParameter();
    private static bool eye_callback_registered = false;
    private const int maxframe_count = 120 * 800;                  // Maximum number of samples for eye tracking (120 Hz * time in seconds).
    private static UInt64 eye_valid_L, eye_valid_R;                 // The bits explaining the validity of eye data.
    private static float openness_L, openness_R;                    // The level of eye openness.
    private static float pupil_diameter_L, pupil_diameter_R;        // Diameter of pupil dilation.
    private static Vector2 pos_sensor_L, pos_sensor_R;              // Positions of pupils.
    private static Vector3 gaze_origin_L, gaze_origin_R;            // Position of gaze origin.
    private static Vector3 gaze_direct_L, gaze_direct_R;            // Direction of gaze ray.
    private static float frown_L, frown_R;                          // The level of user's frown.
    private static float squeeze_L, squeeze_R;                      // The level to show how the eye is closed tightly.
    private static float wide_L, wide_R;                            // The level to show how the eye is open widely.
    private static double gaze_sensitive;                           // The sensitive factor of gaze ray.
    private static float distance_C;                                // Distance from the central point of right and left eyes.
    private static bool distance_valid_C;                           // Validity of combined data of right and left eyes.
    public bool cal_need;                                           // Calibration judge.
    public bool result_cal;                                         // Result of calibration.
    private static int track_imp_cnt = 0;
    private static TrackingImprovement[] track_imp_item;

    private liblsl.StreamOutlet outlet;
    private liblsl.StreamInfo streamInfo;
    private float[] currentSample;
    public string StreamName = "Eyetracking";
    public string StreamType = "EYE";
    private int ChannelCount = 23;
    public Color c1 = Color.red;
    public Vector3 starter;
    //float offset = (float)System.DateTimeOffset.UtcNow.ToUnixTimeSeconds();



    // Start is called before the first frame update
    void Start()
    {
        Invoke("Measurement", 0.5f);

        currentSample = new float[ChannelCount];

        streamInfo = new liblsl.StreamInfo(StreamName, StreamType, ChannelCount);

        outlet = new liblsl.StreamOutlet(streamInfo);

    }

    void Measurement()
    {
        EyeParameter eye_parameter = new EyeParameter();
        SRanipal_Eye_API.GetEyeParameter(ref eye_parameter);

        if (SRanipal_Eye_Framework.Instance.EnableEyeDataCallback == true && eye_callback_registered == false)
        {
            SRanipal_Eye_v2.WrapperRegisterEyeDataCallback(Marshal.GetFunctionPointerForDelegate((SRanipal_Eye_v2.CallbackBasic)EyeCallback));
            eye_callback_registered = true;
        }

        else if (SRanipal_Eye_Framework.Instance.EnableEyeDataCallback == false && eye_callback_registered == true)
        {
            SRanipal_Eye_v2.WrapperUnRegisterEyeDataCallback(Marshal.GetFunctionPointerForDelegate((SRanipal_Eye_v2.CallbackBasic)EyeCallback));
            eye_callback_registered = false;
        }
    }

    private static void EyeCallback(ref EyeData_v2 eye_data)
    {
        EyeParameter eye_parameter = new EyeParameter();
        SRanipal_Eye_API.GetEyeParameter(ref eye_parameter);
        eyeData = eye_data;

        // ----------------------------------------------------------------------------------------------------------------
        //  Measure eye movements at the frequency of 120Hz until framecount reaches the maxframe count set.
        // ----------------------------------------------------------------------------------------------------------------


        ViveSR.Error error = SRanipal_Eye_API.GetEyeData_v2(ref eyeData);

        if (error == ViveSR.Error.WORK)
        {
            // --------------------------------------------------------------------------------------------------------
            //  Measure each parameter of eye data that are specified in the guideline of SRanipal SDK.
            // --------------------------------------------------------------------------------------------------------

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
            frown_L = eyeData.expression_data.left.eye_frown;
            frown_R = eyeData.expression_data.right.eye_frown;
            squeeze_L = eyeData.expression_data.left.eye_squeeze;
            squeeze_R = eyeData.expression_data.right.eye_squeeze;
            wide_L = eyeData.expression_data.left.eye_wide;
            wide_R = eyeData.expression_data.right.eye_wide;
            distance_valid_C = eyeData.verbose_data.combined.convergence_distance_validity;
            distance_C = eyeData.verbose_data.combined.convergence_distance_mm;
            track_imp_cnt = eyeData.verbose_data.tracking_improvements.count;

        }
    }

    // Update is called once per frame

    public void FixedUpdate()
    {
        currentSample[0] = openness_L;
        currentSample[1] = openness_R;
        currentSample[2] = pupil_diameter_L;
        currentSample[3] = pupil_diameter_R;
        currentSample[4] = pos_sensor_L.x;
        currentSample[5] = pos_sensor_L.y;
        currentSample[6] = pos_sensor_R.x;
        currentSample[7] = pos_sensor_R.y;
        currentSample[8] = gaze_origin_L.x;
        currentSample[9] = gaze_origin_L.y;
        currentSample[10] = gaze_origin_L.z;
        currentSample[11] = gaze_origin_R.x;
        currentSample[12] = gaze_origin_R.y;
        currentSample[13] = gaze_origin_R.z;
        currentSample[14] = gaze_direct_L.x;
        currentSample[15] = gaze_direct_L.y;
        currentSample[16] = gaze_direct_L.z;
        currentSample[17] = gaze_direct_R.x;
        currentSample[18] = gaze_direct_R.y;
        currentSample[19] = gaze_direct_R.z;
        currentSample[20] = distance_C;
        currentSample[21] = eye_valid_L;
        currentSample[22] = eye_valid_R;

        outlet.push_sample(currentSample);
        //LineRenderer lineRenderer = GetComponent<LineRenderer>();
        //lineRenderer.SetPosition(0, starter);
        //lineRenderer.SetPosition(1, starter + 
        //    (eyeData.verbose_data.combined.eye_data.gaze_direction_normalized * -100f));
        // Save a copy of the current sample to our shared buffer.
        double timestamp = System.DateTimeOffset.UtcNow.ToUnixTimeMilliseconds() /1000;

        //core_audio.offset +
        EyeTrackingBuffer.AddSample(timestamp, currentSample);


    }

}