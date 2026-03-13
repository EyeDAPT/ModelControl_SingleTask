using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using LSL;
using ViveSR;

namespace Assets.LSL4Unity.Scripts
{

    public class EyeTrackingLSL : MonoBehaviour
    {
        private liblsl.StreamOutlet opennessOutlet;
        private liblsl.StreamInfo opennessInfo;
        private float[] opennessSample;

        private liblsl.StreamOutlet directionOutlet;
        private liblsl.StreamInfo directionInfo;
        private float[] directionSample;

        private liblsl.StreamOutlet originOutlet;
        private liblsl.StreamInfo originInfo;
        private float[] originSample;

        private liblsl.StreamOutlet pupdiamOutlet;
        private liblsl.StreamInfo pupdiamInfo;
        private float[] pupdiamSample;

        private liblsl.StreamOutlet pupposOutlet;
        private liblsl.StreamInfo pupposInfo;
        private float[] pupposSample;

        public string StreamName = "Eye_Openness";
        public string StreamType = "Eyetracking";
        private int opennessChannels = 6;



        // Start is called before the first frame update
        void Start()
        {
            opennessSample = new float[opennessChannels];
            opennessInfo = new liblsl.StreamInfo(StreamName, StreamType, opennessChannels);
            opennessOutlet = new liblsl.StreamOutlet(opennessInfo);
        }

        // Update is called once per frame
        void Update()
        {
            
            
         


        }
    }
}
