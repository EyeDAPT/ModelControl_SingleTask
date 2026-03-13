using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor.Recorder;
using UnityEditor.Recorder.Input;
using System.IO;

public class record_images : MonoBehaviour
{
    RecorderController m_RecorderController;

    void OnEnable()
    {
        var controllerSettings = ScriptableObject.CreateInstance<RecorderControllerSettings>();
        m_RecorderController = new RecorderController(controllerSettings);

        // Image sequence
        var imageRecorder = ScriptableObject.CreateInstance<ImageRecorderSettings>();
        imageRecorder.name = "My Image Recorder";
        imageRecorder.Enabled = true;
        imageRecorder.OutputFormat = ImageRecorderSettings.ImageRecorderOutputFormat.PNG;
        imageRecorder.CaptureAlpha = false;

        var mediaOutputFolder = Path.Combine(Application.dataPath, "..", "SampleRecordings");
        imageRecorder.OutputFile = Path.Combine(mediaOutputFolder, "frame_") + DefaultWildcard.Frame;

        imageRecorder.imageInputSettings = new GameViewInputSettings
        {
            OutputWidth = 1920,
            OutputHeight = 1080,
        };

        // Setup Recording
        controllerSettings.AddRecorderSettings(imageRecorder);
        controllerSettings.SetRecordModeToFrameInterval(0, 3600);
        m_RecorderController.PrepareRecording();
        m_RecorderController.StartRecording();
    }
}
