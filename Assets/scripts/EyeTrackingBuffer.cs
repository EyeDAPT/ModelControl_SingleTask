using System.Collections.Generic;

// Class to hold an individual sample along with its timestamp.
public class EyeTrackingSample
{
    public double timestamp;  // Timestamp for when the sample was taken.
    public float[] sample;   // The 23-feature sample.

    public EyeTrackingSample(double timestamp, float[] sample)
    {
        this.timestamp = timestamp;
        // Clone the sample array to avoid later modifications.
        this.sample = (float[])sample.Clone();
    }
}

public static class EyeTrackingBuffer
{
    public static List<EyeTrackingSample> samples = new List<EyeTrackingSample>();

    public static void AddSample(double timestamp, float[] sample)
    {
        // Create a new EyeTrackingSample using the provided timestamp and a cloned sample.
        samples.Add(new EyeTrackingSample(timestamp, sample));

        // Optionally, limit the buffer size.
        if (samples.Count > 5400)
        {
            int removeCount = samples.Count - 5400;
            samples.RemoveRange(0, removeCount);
        }
    }
}
