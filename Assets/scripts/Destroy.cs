using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Valve.VR;
using LSL;



public class Destroy : MonoBehaviour
{
    private core3 coreScript;
    private Spawn cs;
    private liblsl.StreamOutlet outlet1;
    
    // Start is called before the first frame update
    void Start()
    {
        coreScript = FindObjectOfType<core3>();
        //cs = GetComponent<Spawn>();
        var info1 = new liblsl.StreamInfo("CubeDestroyData", "Markers", 4, 0, liblsl.channel_format_t.cf_float32, "DestroyID");
        outlet1 = new liblsl.StreamOutlet(info1);
    }

    // Update is called once per frame
    private void OnTriggerEnter(Collider other)
    {
        if (other.tag == "blue")
        {
            float[] sample1= {other.gameObject.transform.position.x, other.gameObject.transform.position.y, other.gameObject.transform.position.z, 1 };
            outlet1.push_sample(sample1);
            Destroy(other.gameObject);
            //cs.SpawnYellow();
            coreScript.IncrementScore();
        }
        if (other.tag == "yellow")
        {
            float[] sample1 = { other.gameObject.transform.position.x, other.gameObject.transform.position.y, other.gameObject.transform.position.z, 0};
            outlet1.push_sample(sample1);
            Destroy(other.gameObject);
            //cs.SpawnBlue();
            coreScript.IncrementScore();
        }
    }
}
