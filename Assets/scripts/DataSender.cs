using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using System.Text;

#region Explicit Serializable Classes for Eye Data
[System.Serializable]
public class EyeDataRowExplicit
{
    // same as before...
    public double timestamp;
    public float openness_L;
    public float openness_R;
    public float pupil_diameter_L;
    public float pupil_diameter_R;
    public float pos_sensor_L_x;
    public float pos_sensor_L_y;
    public float pos_sensor_R_x;
    public float pos_sensor_R_y;
    public float gaze_origin_L_x;
    public float gaze_origin_L_y;
    public float gaze_origin_L_z;
    public float gaze_origin_R_x;
    public float gaze_origin_R_y;
    public float gaze_origin_R_z;
    public float gaze_direct_L_x;
    public float gaze_direct_L_y;
    public float gaze_direct_L_z;
    public float gaze_direct_R_x;
    public float gaze_direct_R_y;
    public float gaze_direct_R_z;
    public float distance_C;
    public float eye_valid_L;
    public float eye_valid_R;
}

[System.Serializable]
public class EyeDataWrapperExplicit
{
    public List<EyeDataRowExplicit> items;
}
#endregion

// NEW: match your server's response structure
[System.Serializable]
public class ServerResponse
{
    public string status;
    public int prediction;
    public float[] confidences;
}

public class DataSender : MonoBehaviour
{
    [SerializeField]
    private string serverUrl = "http://localhost:5000/upload-eye";

    private bool hasSentLevelData = false;
    private core_audio coreAudio;

    public void SendLevelData()
    {
        if (hasSentLevelData) return;
        hasSentLevelData = true;

        List<EyeTrackingSample> buffer = EyeTrackingBuffer.samples;
        int totalSamples = buffer.Count;
        int startIndex = Mathf.Max(0, totalSamples - 5300);

        List<EyeDataRowExplicit> dataRows = new List<EyeDataRowExplicit>();
        for (int i = startIndex; i < totalSamples; i++)
        {
            EyeTrackingSample sampleObj = buffer[i];
            EyeDataRowExplicit row = new EyeDataRowExplicit();
            row.timestamp = sampleObj.timestamp;
            row.openness_L = sampleObj.sample[0];
            row.openness_R = sampleObj.sample[1];
            row.pupil_diameter_L = sampleObj.sample[2];
            row.pupil_diameter_R = sampleObj.sample[3];
            row.pos_sensor_L_x = sampleObj.sample[4];
            row.pos_sensor_L_y = sampleObj.sample[5];
            row.pos_sensor_R_x = sampleObj.sample[6];
            row.pos_sensor_R_y = sampleObj.sample[7];
            row.gaze_origin_L_x = sampleObj.sample[8];
            row.gaze_origin_L_y = sampleObj.sample[9];
            row.gaze_origin_L_z = sampleObj.sample[10];
            row.gaze_origin_R_x = sampleObj.sample[11];
            row.gaze_origin_R_y = sampleObj.sample[12];
            row.gaze_origin_R_z = sampleObj.sample[13];
            row.gaze_direct_L_x = sampleObj.sample[14];
            row.gaze_direct_L_y = sampleObj.sample[15];
            row.gaze_direct_L_z = sampleObj.sample[16];
            row.gaze_direct_R_x = sampleObj.sample[17];
            row.gaze_direct_R_y = sampleObj.sample[18];
            row.gaze_direct_R_z = sampleObj.sample[19];
            row.distance_C = sampleObj.sample[20];
            row.eye_valid_L = sampleObj.sample[21];
            row.eye_valid_R = sampleObj.sample[22];
            dataRows.Add(row);
        }

        EyeDataWrapperExplicit wrapper = new EyeDataWrapperExplicit();
        wrapper.items = dataRows;

        string jsonPayload = JsonUtility.ToJson(wrapper);
        Debug.Log("Sending JSON payload: " + jsonPayload);

        // Clear the buffer for the next level
        EyeTrackingBuffer.samples.Clear();

        StartCoroutine(PostRequest(serverUrl, jsonPayload));
    }
    void Start()
    {
        coreAudio = FindObjectOfType<core_audio>();
        if (!coreAudio)
        {
            Debug.LogWarning("core_audio not found in scene. LSL predictions won't be pushed!");
        }
    }

    IEnumerator PostRequest(string url, string jsonPayload)
    {
        byte[] bodyRaw = Encoding.UTF8.GetBytes(jsonPayload);
        UnityWebRequest request = new UnityWebRequest(url, "POST");
        request.uploadHandler = new UploadHandlerRaw(bodyRaw);
        request.downloadHandler = new DownloadHandlerBuffer();
        request.SetRequestHeader("Content-Type", "application/json");

        yield return request.SendWebRequest();

#if UNITY_2020_1_OR_NEWER
    if (request.result == UnityWebRequest.Result.Success)
#else
        if (!request.isNetworkError && !request.isHttpError)
#endif
        {
            // On success, parse the server's response
            string rawResponse = request.downloadHandler.text;
            Debug.Log("Data sent successfully. Server responded with: " + rawResponse);

            // Attempt to parse the JSON into our ServerResponse class
            ServerResponse resp = JsonUtility.FromJson<ServerResponse>(rawResponse);

            if (resp != null)
            {
                Debug.Log("Server status: " + resp.status);
                Debug.Log("Server prediction: " + resp.prediction);

                // If the server gave us confidences, parse them
                float confA = 0f;
                float confB = 0f;
                float confC = 0f;
                if (resp.confidences != null && resp.confidences.Length >= 3)
                {
                    confA = resp.confidences[0];
                    confB = resp.confidences[1];
                    confC = resp.confidences[2];
                    Debug.Log($"Confidences: {confA}, {confB}, {confC}");
                }

                // Send the values to core_audio (LSL)
                if (coreAudio != null)
                {
                    coreAudio.ReceiveServerPrediction((float)resp.prediction, confA, confB, confC);
                }
                else
                {
                    Debug.LogWarning("coreAudio not set; LSL push skipped.");
                }
            }
            else
            {
                Debug.LogWarning("Could not parse server response into ServerResponse object.");
            }
        }
        else
        {
            Debug.Log("Error sending data: " + request.error);
        }
    }


    public void ResetLevelDataFlag()
    {
        hasSentLevelData = false;
    }
}
