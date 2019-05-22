//TODO: Don't disable the QA menu just move the position to/off screen.

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;
using System.Runtime.InteropServices;

public class QAmenu : MonoBehaviour {

    //Sensor
    public Text devices;
    public Toggle enableSensorLogging;

    //Unity
    public Toggle enableUnityLogging;
       
    public static QAmenu instance;
    public static event Action<bool> UnityLogging;

    bool latched=false;

    [DllImport("__Internal")]
    extern static void log_sensor(bool log);

    void Awake(){
        DontDestroyOnLoad(instance);
        if (instance == null)
        {
            instance = this;
        }
        else if (instance != null)
        {
            Destroy(instance.gameObject);
        }
        //enableUnityLogging.isOn = true;    
        //enableSensorLogging.isOn = true;
    }
        
    void Start()
    {
        if (Logger.instance.gameObject == null)
        {
            Debug.Log("LOGGER ABSENT!");        

        }
    }
     
    void OnEnable()
    {
        WAXLink.OnDeviceConnected += WAXLink_OnDeviceConnected;
    }

    void OnDisable()
    {
        WAXLink.OnDeviceConnected -= WAXLink_OnDeviceConnected;
    }

    void Update()
    {
        devices.text = "Connected to: "+WAXLink.deviceName;
    }

    void WAXLink_OnDeviceConnected (string name)
    {
        devices.text = "Connected to: "+name;
    }

    public void OnClick_Back()
    {
        gameObject.GetComponentInChildren<Animator>().SetBool("slide_anim",false);
    }

    public void EnableUnityLogging()
    {
        //Logger.LogLine("log "+Logger.toggleLogs.ToString());
        Logger.toggleLogs = enableUnityLogging.isOn;

        //Logger.LogLine(""+enableUnityLogging.isOn.ToString());
//        if (UnityLogging != null)
//        {
//            UnityLogging(enableUnityLogging.isOn);
//        }
    }

    public void EnableSensorLogging()
    {
        Logger.LogLine(""+enableSensorLogging.isOn.ToString());
        log_sensor(enableSensorLogging.isOn);
    }
}
