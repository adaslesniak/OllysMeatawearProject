using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Runtime.InteropServices;
using System;
using System.Collections.Generic;
using System.IO;

public class WAXLink : MonoBehaviour
{
    public static WAXLink instance;
    
    public delegate void CalibrationDoneHandler ();
    public delegate void MagCalibrationUpdateHandler (string update);
    public event MagCalibrationUpdateHandler OnMagCalibrationUpdate;
    public event CalibrationDoneHandler OnAccelCalibrationDone;
    public event CalibrationDoneHandler OnMagCalibrationComplete;
    public static event Action <String> OnDeviceConnected;
    public static string deviceName;
    public bool calibrationCompleted = false;

    /*[DllImport("__Internal")]
    extern static public UInt16 _current_battery ();
    
    [DllImport("__Internal")]
    extern static public void _toggle_sensor (bool toggle);

	[DllImport("__Internal")]
	extern static public void _connect_to (string deviceSerial);
   
    [DllImport("__Internal")]
    extern static public void _send_audio_time(float time);

    //********************************************************************************
    //Toggling mw sensor/device.
//    [DllImport("__Internal")]
//    extern static public void _toggle_mw_sensor (bool toggle);

    [DllImport("__Internal")]
    extern static public void _setup_bluetooth ();
    
    [DllImport("__Internal")]
    extern static public void _reset_data ();
    
    [DllImport("__Internal")]
    extern static public uint _get_start ();

   
    [DllImport("__Internal")]
    extern static public bool _is_hit (HipHit hitType, uint back, float strength, Orientation currentOrientation, Orientation lastOrientation);
    //extern static public bool _is_hit (HipHit hitType, uint back, float strength);
 
    [DllImport("__Internal")]
    extern static public bool _is_still ();
    
    [DllImport("__Internal")]
    extern static public bool _is_circle_hit (CircleDirection circleDirection, Orientation currentOrientation,Orientation lastOrientation);

    [DllImport("__Internal")]
    extern static public void _log_data();
    */

    public Text batteryText;
    public Text statusText;
    public Text debugText;
    public Transform pointer;
    
    public MeshRenderer orb12;
    public MeshRenderer orb3;
    public MeshRenderer orb6;
    public MeshRenderer orb9;
    public MeshRenderer orbup;
    public MeshRenderer orbdown;
    
    List<string> magLogData;
    List<string> accLogData;
    List<string> gyroLogData;
    List<string> hitLogData;

    //Acclerometer data.
    /*
    public float accX;
    public float accY;
    public float accZ;
    */
    
    string generalLogData;
    
    public OrbManager orbManager;
//    public SensorManager sensorMgr;
	public SelectingDeviceManager sensorMgr;
    
    void Start ()
    {
        if (FindObjectsOfType (GetType ()).Length > 1) {
            Destroy (gameObject);
        }
        DontDestroyOnLoad (gameObject);
//        SetupBluetooth ();
    }

    void Awake ()
    {
        if (instance == null)
        {
            instance = this;
        }
        else if(instance != null){
            Destroy(gameObject);
            return;
        }
        
        magLogData = new List<string> ();
        accLogData = new List<string> ();
        gyroLogData = new List<string> ();
        hitLogData = new List<string>();

        generalLogData = "";
    }
    
    void FixedUpdate ()
    {
        //batteryText.text = CurrentBattery () + "mV";
        
        //float angle = GetAngle ();
        
        //statusText.text = "Current Angle: " + angle;
        
        //pointer.transform.eulerAngles = new Vector3 (0, 0, -angle);
    }
    
    void Update ()
    {       
        /*
        if (orbManager == null)
            Debug.Log("orb manager is null");

        if (orbManager != null)
            Debug.Log("orb manager is !null");
        */
        /*
            
        if (IsHit (HipHit.HIT12, 20, 3)) {
            orb12.material.color = Color.blue;
        } else {
            orb12.material.color = Color.red;
        }
        
        if (IsHit (HipHit.HIT3, 20, 3)) {
            orb3.material.color = Color.blue;
        } else {
            orb3.material.color = Color.red;
        }
        
        if (IsHit (HipHit.HIT6, 20, 3)) {
            orb6.material.color = Color.blue;
        } else {
            orb6.material.color = Color.red;
        }
        
        if (IsHit (HipHit.HIT9, 20, 3)) {
            orb9.material.color = Color.blue;
        } else {
            orb9.material.color = Color.red;
        }
        
        if (IsHit (HipHit.HITUP, 20, 3)) {
            orbup.material.color = Color.blue;
        } else {
            orbdown.material.color = Color.red;
        }
        
        if (IsHit (HipHit.HITDOWN, 20, 3)) {
            orbdown.material.color = Color.blue;
        } else {
            orbdown.material.color = Color.red;
        }
        
        */
    }
        
    public void ReadyNotification (string count)
    {
        //int iCount = int.Parse (count);

    }

    public void FoundDeviceNotification (string name)
    {
        Debug.Log("DEVICE: "+name.ToString());
        deviceName = name.ToString();
        if (OnDeviceConnected != null)
        {
            //Debug.Log("DEVICE EVENT : "+name.ToString());
            OnDeviceConnected(name);
        }
    }

    public void MagCalibrationCompleteNotification (string blank)
    {
        if (OnMagCalibrationComplete != null)
            OnMagCalibrationComplete ();
    }

    public void AccelCalibrationCompleteNotification (string blank)
    {
        Debug.Log("ACCL. CALIBRATION INVOKED");
		if (OnAccelCalibrationDone != null)
			OnAccelCalibrationDone ();
		else
			Debug.Log ("AccelCalibration Is Empty");
    }
    
    public void MagCalibrationUpdateNotification (string progress)
    {
        if (OnMagCalibrationUpdate != null)
            OnMagCalibrationUpdate (progress);
    }
    
    public void UpdateGeneralLogNotification(string entry) {
        generalLogData += entry;
    }

    public void UpdateMagLogNotification (string debug)
    {
        //debugText.text = debug.Replace (";", "\n");
        if (orbManager != null && sensorMgr != null)
            magLogData.Add ("[" + orbManager.musicSource.time + "] " + debug);
    }
        
    public void UpdateAccLogNotification (string debug)
    {
        Debug.Log("<color=orange>ACC. DATA LOG NOTIF.: "+debug.ToString()+"</color>");

        string time = "nil";
        if (orbManager != null)
            time = ""+orbManager.musicSource.time; 
        accLogData.Add ("[" + time + "] " + debug);
    }

    public void UpdateGyroLogNotification (string debug)
    {
        Debug.Log("<color=orange>GYRO DATA LOG NOTIF.: "+debug.ToString()+"</color>");

        string time = "nil";
        if (orbManager != null)
            time = ""+orbManager.musicSource.time;
        gyroLogData.Add ("[" + time + "] " + debug);

    }

    public void UpdateHitLogNotification (string debug)
    {
        Debug.Log("<color=orange>HIT. DATA LOG NOTIF.: "+debug.ToString()+"</color>");

        string time = "nil";
        if (orbManager != null)
            time = ""+orbManager.musicSource.time;
        hitLogData.Add ("[" + time + "] " + debug);
    }

    public void BluetoothStateUpdateNotification (string state)
    {
        switch (state) {
            case "off":
                //SaveLogData ();
                break;
        }
    }
    
    public void SaveLogData (string track = "")
    {
        
        Debug.Log("SAVING DATA");

        if (!Directory.Exists (Application.persistentDataPath + "/Logs/")) 
        {
            Directory.CreateDirectory (Application.persistentDataPath + "/Logs/");

            if(Directory.Exists (Application.persistentDataPath + "/Logs/"))
                Debug.Log("Log Directory Created");
        }

        /*
        string msg = "Do or don't do, there is no try";
        if (msg.Length > 0)
        {
            Debug.Log("SAVING TEST MSG: ");
                
            StreamWriter msgFile = new StreamWriter(Application.persistentDataPath+"/Logs/"+track+"_"+ DateTime.Now.ToString("MM-dd-yy_HH-mm-ss") + "_TEST_MSG_v1.2.txt");
            msgFile.WriteLine("MSG");
            msgFile.WriteLine(msg);
            msgFile.Close();
        }
        */

        //Debug.Log("<color=orange>SAVING LOG DATA: </color>");
        if (track == "") {
            GameObject orbManager = GameObject.Find ("OrbManager");

            if (orbManager != null) {
                track = orbManager.GetComponent<OrbManager> ().musicSource.clip.name;
            }
        }
        
        if (!Directory.Exists (Application.persistentDataPath + "/Logs"))
            Directory.CreateDirectory (Application.persistentDataPath + "/Logs");

        if (generalLogData.Length > 0) {
            StreamWriter logFile = new StreamWriter(Application.persistentDataPath + "/Logs/" + track + "_" + DateTime.Now.ToString("MM-dd-yy_HH-mm-ss") + "_General.txt");

            logFile.Write(generalLogData);

            logFile.Close();
            generalLogData = "";
        }
    
        /*
        if (magLogData.Count > 0) {
        
            StreamWriter logFile = new StreamWriter (Application.persistentDataPath + "/Logs/" + track + "_" + DateTime.Now.ToString ("MM-dd-yy_HH-mm-ss") + "_Mag.csv");
            
            logFile.WriteLine ("Time,Raw Mag X,Raw Mag Y,Raw Mag Z,Mag_y_av,Mag_z_av,Mag_y_a,Mag_z_a,Rotate_Angle_110_2,Mag_y_aa,Mag_z_aa,Mag_angle_tmp1,Mag_angle_tmp2,Mag_angle_2,Calib_hh,Calib_kk,Game_hh,Game_kk,Start_Calib_y,Start_Calib_z");
            
            foreach (string s in magLogData) {
                
                logFile.WriteLine (s);
            }
            
            logFile.Close ();
        
            magLogData.Clear ();
        }*/
        //ACC. DATA LOGS**************************************************************************************************************
        if (accLogData.Count > 0) {
            //Debug.Log("<color=orange>SAVING ACC. DATA</color>");
            StreamWriter logFile = new StreamWriter (Application.persistentDataPath + "/Logs/" + track + "_" + DateTime.Now.ToString ("MM-dd-yy_HH-mm-ss") + "_Acc_v1.2.csv");
            //Debug.Log("Path:"+Application.persistentDataPath);
            logFile.WriteLine ("Time,counter,iOS_time,scale_value,Raw Accel X,Raw Accel Y,Raw Accel Z,Accel_x_Cal,Accel_y_Cal,Accel_z_Cal,Accel_x_off_100,Accel_y_off_100,Accel_z_off_100,Accel_x_off,Accel_y_off,Accel_z_off,Still,SumStill,Still_100");

            try
            {
                foreach (string s in accLogData) 
                {
                    logFile.WriteLine (s);
                    //Debug.Log("<color=orange>SAVING ACC LOG DATA STREAM: "+s.ToString()+" </color>");
                }
                logFile.Close ();
            }

            catch(Exception ex)
            {
                Debug.Log("EXC: ACC STREAM WRITING: "+ ex.ToString());
                return;
            }

            //Debug.Log("<color=orange>SAVED ACC"+accLogData.Count.ToString()+" VALUES</color>"); 
            accLogData.Clear ();
        }//**************************************************************************************************************************

        //GYRO LOG DATA
        if(gyroLogData.Count>0){
            //Debug.Log("<color=orange>SAVING GYRO. DATA</color>");
            StreamWriter logFile = new StreamWriter (Application.persistentDataPath + "/Logs/" + track + "_" + DateTime.Now.ToString ("MM-dd-yy_HH-mm-ss") + "_Gyro_v1.2.csv");
            //Debug.Log("Path:"+Application.persistentDataPath);
            logFile.WriteLine ("Time,counter,iOS_time,scale_value,G_x,G_y,G_z, GS_x,GO_x,GT_x,Orient");

            try
            {
            foreach (string s in gyroLogData) 
                {
                    logFile.WriteLine (s);    
                    //Debug.Log("<color=orange>SAVING GYRO LOG DATA STREAM: "+s.ToString()+" </color>");
                }
                logFile.Close ();
            }
            catch(Exception ex)
            {
                Debug.Log("EXC: GYRO STREAM WRITING: "+ ex.ToString());
                return;
            }

            //Debug.Log("<color=orange>SAVED GYRO"+gyroLogData.Count.ToString()+" VALUES</color>"); 
            gyroLogData.Clear ();
        }

        //HIT LOG DATA
        if(hitLogData.Count>0)
        {
            //Debug.Log("SAVING HIT LOGS, FILE SIZE: "+hitLogData.Count.ToString());
            StreamWriter logFile = new StreamWriter (Application.persistentDataPath + "/Logs/" + track + "_" + DateTime.Now.ToString ("MM-dd-yy_HH-mm-ss") + "_HitData_v1.2.csv");
            //Debug.Log("Path:"+Application.persistentDataPath);
            //logFile.WriteLine ("Time,G_x,G_y,G_z,GS_x,GO_x,GT_x,last_orient,cur_orient,last hit orient,last GO,GO differnce,acc hit test, hit type ,GO test,GTi,GTi-40,deltaGT,GT test ,hit status");

            //x,y,z, GSx, cur_ornt, GO, GO test ,cur_ornt ,lst_ornt, GTi, GT40, deltaGT, GT test, acc_hit, overall_hit
            logFile.WriteLine ("Time,iOS_Time,G_x,G_y,G_z,GS_x,cur_ornt,GO_x,GO test,cur_ornt,last_ornt,GTi,GT40,GT delta,GT test,acc test ,hit status");

            try
            {
                foreach (string s in hitLogData) 
                {
                    logFile.WriteLine (s);
                    //Debug.Log("<color=orange>SAVING HIT LOG DATA STREAM: "+s.ToString()+" </color>");
                } 
                logFile.Close ();
            }
            catch(Exception ex)
            {
                Debug.Log("EXC: HIT STREAM WRITING: "+ ex.ToString());
                return;
            }

            //Debug.Log("<color=orange>SAVED HIT"+hitLogData.Count.ToString()+" VALUES</color>"); 
            hitLogData.Clear ();
        }
    }
    
    public void SetupBluetooth ()
    {
        #if !UNITY_EDITOR
        //_setup_bluetooth ();
        #else
        UnityEngine.Debug.LogWarning ("Bluetooth connection only works when run through iOS player!");
        #endif   
    }
    
    public void ResetData ()
    {
        Debug.Log("Reset unity data");
        magLogData.Clear();
        accLogData.Clear();
        gyroLogData.Clear();
        hitLogData.Clear();
        //calibrationCompleted = false;

        #if !UNITY_EDITOR
        //_reset_data ();
        #endif
    }
    
    public void ToggleSensor (bool toggle)
    {
        #if !UNITY_EDITOR
        //_toggle_sensor(toggle);
//	_show_devices_list(toggle);//def in BTHandler.mm
        #endif
    }

	public void ConnectToDevice(string deviceSerial)
	{
		#if !UNITY_EDITOR
		//_connect_to(deviceSerial); // this method is used to send the serial number of the selected device from unity
		#endif
	}

    public void CalibrateMag ()
    {
        #if UNITY_EDITOR
        MagCalibrationCompleteNotification ("");
        #else
//        _calibrate_magnetometer();
        #endif
    }

    public UInt16 CurrentBattery ()
    {
        #if !UNITY_EDITOR
        //return _current_battery ();
        #else
        return 0;
        #endif
    }
    
    public uint GetStart ()
    {
        #if !UNITY_EDITOR
        //return _get_start ();
        #else
        return 0;
        #endif
    }
    
    public float GetAngle ()
    {
        #if !UNITY_EDITOR
//        return _get_degrees ();
return 0;
        #else
        return 0;
        #endif
    }

    //public bool IsCircleHit (CircleDirection circleDirection)
    //public bool IsCircleHit (CircleDirection circleDirection, Orientation currentOrientation,Orientation lastOrientation)
    //{
        //Debug.Log("<color=orange>IS CIRCLE HIT: "+currentOrientation.ToString()+"</color>");
      //  #if !UNITY_EDITOR
        //return _is_circle_hit(circleDirection, currentOrientation, lastOrientation);
        //#else
        //return true;
        //#endif
    //}
    
    public bool IsStill ()
    {
        #if !UNITY_EDITOR
        //return _is_still ();
        #else
        return Input.GetKey (KeyCode.Space);
        #endif
    }
        
    //public bool IsHit (HipHit hitType, uint back, float strength)
    public bool IsHit (HipHit hitType, uint back, float strength, Orientation currentOrientation, Orientation lasttOrientation)
    {
        //Debug.Log("<color=orange>IS HIT: ORIENT: "+currentOrientation.ToString()+" LAST: "+lasttOrientation.ToString()+"</color>");
        #if !UNITY_EDITOR
        //return _is_hit (hitType, back, strength, currentOrientation, lasttOrientation);
        #else

        return true;
        /*
        switch (hitType) {
            case HipHit.HIT12:
                return Input.GetKeyDown (KeyCode.UpArrow);
                
            case HipHit.HIT3:
                return Input.GetKeyDown (KeyCode.RightArrow);
                
            case HipHit.HIT6:
                return Input.GetKeyDown (KeyCode.DownArrow);
                
            case HipHit.HIT9:
                return Input.GetKeyDown (KeyCode.LeftArrow);
                
            case HipHit.HITUP:
                return Input.GetKeyDown (KeyCode.W);
                
            case HipHit.HITDOWN:
                return Input.GetKeyDown (KeyCode.S);
        }
        
        return false;*/
        #endif
    }

    public void LogDataNatively(){
        //Debug.Log("<color=yellow>SAVIG NATIVE LOG</color>");
        #if !UNITY_EDITOR
        //_log_data();
        #endif
    }

    //********************************************************************************
    //Fetching mw sensor/device accl. and gyro data stream.
    /*
    public void AccelerationFeedback(string _accStatus){
        //Debug.Log("<color=yellow>MW ACCL. DATA: "+_accStatus.ToString()+"</color>");

        char[] delimiterChars = { ',','.'};
        string[] accAxes = _accStatus.Split(delimiterChars);
        accX = float.Parse(accAxes[0]);
        accY = float.Parse(accAxes[1]);
        accZ = float.Parse(accAxes[2]);
    }

    public void GyroFeedback(string _gyroStatus){
        //Debug.Log("<color=yellow>MW GYRO DATA: "+_gyroStatus.ToString()+"</color>");

        char[] delimiterChars = { ',','.'};
        string[] gyroAxes = _gyroStatus.Split(delimiterChars);
    }
    */
    //********************************************************************************
}