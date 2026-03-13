using System.Collections;
using UnityEngine;
using UnityEngine.Networking;

[System.Serializable]
public class PredictionResponse
{
    public string status;
    public int prediction;
    public float[] confidences;
}

public class ServerCommunicator : MonoBehaviour
{
    // Change this URL if needed (e.g., to your server's IP address)
    public string serverUrl = "http://localhost:5000/upload-eye";

    // Call this method with your JSON eye tracking data
    public void SendEyeData(string jsonData)
    {
        StartCoroutine(PostEyeData(jsonData));
    }

    IEnumerator PostEyeData(string jsonData)
    {
        // Create the request and set headers
        UnityWebRequest request = new UnityWebRequest(serverUrl, "POST");
        byte[] bodyRaw = System.Text.Encoding.UTF8.GetBytes(jsonData);
        request.uploadHandler = new UploadHandlerRaw(bodyRaw);
        request.downloadHandler = new DownloadHandlerBuffer();
        request.SetRequestHeader("Content-Type", "application/json");

        // Send request and wait for response
        yield return request.SendWebRequest();

        if (request.result == UnityWebRequest.Result.Success)
        {
            Debug.Log("Server response: " + request.downloadHandler.text);
            // Parse the JSON response
            PredictionResponse response = JsonUtility.FromJson<PredictionResponse>(request.downloadHandler.text);
            Debug.Log("Prediction received: " + response.prediction);

            // Optionally, send the prediction to your LSL stream
            core_audio coreAudio = FindObjectOfType<core_audio>();
            if (coreAudio != null)
            {
                // Suppose "confidences" has 3 values: confA, confB, confC
                float confA = response.confidences.Length > 0 ? response.confidences[0] : 0f;
                float confB = response.confidences.Length > 1 ? response.confidences[1] : 0f;
                float confC = response.confidences.Length > 2 ? response.confidences[2] : 0f;

                // Pass all 4 arguments
                //coreAudio.ReceiveServerPrediction(response.prediction, confA, confB, confC);
            }

        }
        else
        {
            Debug.LogError("Error sending eye data: " + request.error);
        }
    }
}
