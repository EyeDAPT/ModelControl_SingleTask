using UnityEngine;
using UnityEngine.SceneManagement;
using System;
using System.IO;
using ViveSR.anipal.Eye;
using ViveSR.anipal;
using ViveSR;

public class MenuController : MonoBehaviour
{
    private static EyeData_v2 eyeData = new EyeData_v2();
    public EyeParameter eye_parameter = new EyeParameter();
    public GazeRayParameter gaze = new GazeRayParameter();
    private static bool eye_callback_registered = false;
    private const int maxframe_count = 120 * 1800;                  // Maximum number of samples for eye tracking (120 Hz * time in seconds).
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

    public void StartButton()
    {
       
        {
            SRanipal_Eye_v2.LaunchEyeCalibration();
            SceneManager.LoadScene("Experiment");
        }
    }
}
