using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Runtime.InteropServices;
using System;
using System.IO;

public class NativeCommunication : MonoBehaviour 
{

	public static NativeCommunication instance;

	public SensorManager snsrManager;
	public OrbManager orbManager;

	public delegate void CalibrationDoneHandler (string deviceSerial);
	public event CalibrationDoneHandler OnAccelCalibrationDone;
	public static event Action <String> OnDeviceConnected;
	public static string deviceName;
	public bool calibrationCompleted = false;



	List<string> accLogData = new List<string>();
	List<string> gyroLogData = new List<string>();
	//List<string> hitLogData = new List<string>();

	//string generalLogData = "";

	/// <summary>
	/// /**/
	/// </summary>
	/*[DllImport("__Internal")]
	extern static public void _toggle_sensor (bool toggle);

	[DllImport("__Internal")]
	extern static public void _connect_to (string deviceSerial);

	[DllImport("__Internal")]
	extern static public void _show_devices_list (bool toggle);

	[DllImport("__Internal")]
	extern static public void _stop_Scanning ();

	[DllImport("__Internal")]
	extern static public void _setup_bluetooth ();

	[DllImport("__Internal")]
	extern static public void _reset_data ();
	// // // // // // // // // // // // // // // // // // // // 
    */

	/// <summary>
	/// Call back functions from native 
	/// </summary>
	public void FoundDeviceNotification (string name)
	{
		Debug.Log ("native comm FoundDeviceNotification called");
		Debug.Log("DEVICE: "+name.ToString());
		deviceName = name.ToString();
		if (OnDeviceConnected != null)
		{
			//Debug.Log("DEVICE EVENT : "+name.ToString());
			OnDeviceConnected(name);
		}
	}
	public void BluetoothStateUpdateNotification (string state)
	{
		Debug.Log ("native comm bluetoothstateupdatenotification called");
		switch (state) {
		case "off":
			//SaveLogData ();
			break;
		}
	}

	public void GetAccelData(string accelData)
	{
		
		string[] accelValue;
		accelValue = accelData.Split ("," [0]);
		Vector3 actualAccelValue;
		actualAccelValue.x = float.Parse (accelValue [0]);
		actualAccelValue.y = float.Parse (accelValue [1]);
		actualAccelValue.z = float.Parse (accelValue [2]);
		string deviceSerial = accelValue [3].ToString ();

		snsrManager.AccelSensorData (actualAccelValue, deviceSerial);
	}

	public void GetGyroData(string gyroData)
	{
		string[] gyroValue;
		gyroValue = gyroData.Split ("," [0]);
		Vector3 actualGyroValue;
		actualGyroValue.x = float.Parse (gyroValue [0]);
		actualGyroValue.y = float.Parse (gyroValue [1]);
		actualGyroValue.z = float.Parse (gyroValue [2]); 
		string deviceSerial = gyroValue [3].ToString ();

		snsrManager.GyroSensorDara (actualGyroValue, deviceSerial);
	}

	public void SensorActivity(string _sensorStatus)
	{
		Debug.Log ("Sensor Activity : " + _sensorStatus);
		string[] sensorInfo;
		sensorInfo = _sensorStatus.Split ("," [0]);

		snsrManager.SensorActivity (sensorInfo[0], sensorInfo[1]);
		Debug.Log ("NativeCommunication Sensor status called");
//		snsrManager.shouldLogData = true;
	}
	public void DeviceFound(string deviceName)
	{
		snsrManager.DeviceFound (deviceName);
		Debug.Log ("NativeCommunication Device Found: " + deviceName);
	}

	public void AccelCalibrationCompleteNotification (string deviceSerial)
	{
		Debug.Log("ACCL. CALIBRATION INVOKED");
		if (OnAccelCalibrationDone != null)
			OnAccelCalibrationDone (deviceSerial);
		else
			Debug.Log ("AccelCalibration Is Empty");
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
	//public void UpdateHitLogNotification (string debug)
	//{
	//	Debug.Log("<color=orange>HIT. DATA LOG NOTIF.: "+debug.ToString()+"</color>");
	//
	//	string time = "nil";
	//	if (orbManager != null)
	//		time = ""+orbManager.musicSource.time;
	//	hitLogData.Add ("[" + time + "] " + debug);
	//}
	public void SaveLogData (string track = "")
	{

		//Debug.Log("SAVING DATA");

		if (!Directory.Exists (Application.persistentDataPath + "/Logs/"))
		{
			Directory.CreateDirectory (Application.persistentDataPath + "/Logs/");

			//if (Directory.Exists (Application.persistentDataPath + "/Logs/")){
			//Debug.Log("Log Directory Created")}
		}

				if (track == "") {
			GameObject orbManager = GameObject.Find ("OrbManager");

			if (orbManager != null) {
				track = orbManager.GetComponent<OrbManager> ().musicSource.clip.name;
			}
		}

		//if (!Directory.Exists (Application.persistentDataPath + "/Logs"))
		//	Directory.CreateDirectory (Application.persistentDataPath + "/Logs");

		//if (generalLogData.Length > 0) {
		//	StreamWriter logFile = new StreamWriter(Application.persistentDataPath + "/Logs/" + track + "_" + DateTime.Now.ToString("MM-dd-yy_HH-mm-ss") + "_General.txt");
		//
		//	logFile.Write(generalLogData);
		//
		//	logFile.Close();
		//	generalLogData = "";
		//}

		if (accLogData.Count > 0) {
			StreamWriter logFile = new StreamWriter (Application.persistentDataPath + "/Logs/" + track + "_" + DateTime.Now.ToString ("MM-dd-yy_HH-mm-ss") + "_Acc_v1.2.csv");

			logFile.WriteLine ("counter,iOS_time,scale_value,Raw Accel X,Raw Accel Y,Raw Accel Z,Accel_x_Cal,Accel_y_Cal,Accel_z_Cal,Accel_x_off_100,Accel_y_off_100,Accel_z_off_100,Accel_x_off,Accel_y_off,Accel_z_off,Still,SumStill,Still_100");

			try
			{
				foreach (string s in accLogData) 
				{
					logFile.WriteLine (s);
				}
				logFile.Close ();
			}

			catch(Exception ex)
			{
				return;
			}

			accLogData.Clear ();
		}//**************************************************************************************************************************

		//GYRO LOG DATA
		if(gyroLogData.Count>0){
			StreamWriter logFile = new StreamWriter (Application.persistentDataPath + "/Logs/" + track + "_" + DateTime.Now.ToString ("MM-dd-yy_HH-mm-ss") + "_Gyro_v1.2.csv");

			logFile.WriteLine ("Time-counter,iOS_time,scale_value,G_x,G_y,G_z, GS_x,GO_x,GT_x,Orient");

			try
			{
				foreach (string s in gyroLogData) 
				{
					logFile.WriteLine (s);    
				}
				logFile.Close ();
			}
			catch(Exception ex)
			{
				//Debug.Log("EXC: GYRO STREAM WRITING: "+ ex.ToString());
				return;
			}

			gyroLogData.Clear ();
		}

		//HIT LOG DATA
		//if(hitLogData.Count>0)
		//{
		//	StreamWriter logFile = new StreamWriter (Application.persistentDataPath + "/Logs/" + track + "_" + DateTime.Now.ToString ("MM-dd-yy_HH-mm-ss") + "_HitData_v1.2.csv");

		//	logFile.WriteLine ("Time,G_x,G_y,G_z,GS_x,cur_ornt,GO_x,GO test,cur_ornt,last_ornt,GTi,GT40,GT delta,GT test,acc test ,hit status");

		//	try
		//	{
		//		foreach (string s in hitLogData) 
		//		{
		//			logFile.WriteLine (s);
		//		} 
		//		logFile.Close ();
		//	}
		//	catch(Exception ex)
		//	{
		//		//Debug.Log("EXC: HIT STREAM WRITING: "+ ex.ToString());
		//		return;
		//	}

		//	hitLogData.Clear ();
		//}
	}

	/// <summary>
	/// /*Sending call to native Unity_Communication.mm */
	/// </summary>
	public void SetupBluetooth ()
	{
		Debug.Log ("native comm setupbluetooth called");
		#if !UNITY_EDITOR
		_setup_bluetooth ();
		#else
		UnityEngine.Debug.LogWarning ("Bluetooth connection only works when run through iOS player!");
		#endif   
	}

	public void ResetData ()
	{
		//Debug.Log("Reset unity data");
		accLogData.Clear();
		gyroLogData.Clear();
		//hitLogData.Clear();
		//calibrationCompleted = false;

		#if !UNITY_EDITOR
		_reset_data ();
		#endif
	}

	//def in Unity_Communication.mm

	public void ShowDeviceList (bool toggle)
	{
		Debug.Log ("native comm ShowDeviceList called");
		#if !UNITY_EDITOR
		_toggle_sensor(toggle); // I dont think so if we need this function?
		_show_devices_list(toggle);//def in Unity_Communication.mm
		#endif
	}

	public void ConnectToDevice(string deviceSerial)
	{
		Debug.Log ("native comm ConnectToDevice called");
		#if !UNITY_EDITOR
		_connect_to(deviceSerial); // this method is used to send the serial number of the selected device from unity
		#endif
	}

	public void StopScanning()
	{
		Debug.Log ("native comm StopScanning called");
		#if !UNITY_EDITOR
		_stop_Scanning();// this method is used to stop the device scanning
		#endif
	}

	// // // // // // // // // // // // // Hitting functions // // // // // // // // // // // // // // //

	//public bool IsHit  (int _playerID,HipHit _hitType , uint _back, float _strength, Orientation _currentOrientation, Orientation _lastOrientation)
	//{
	//	IsHit ( _playerID, _hitType, null,  _back,  _strength,  _currentOrientation,  _lastOrientation)

	//}



	public float IsHit (int playerID, HipHit hitType, uint back, float strength, Orientation currentOrientation, Orientation lastOrientation, float score)
	{
		Debug.Log("hit type in Native Comm  " + hitType );
		Debug.Log("player in Native Comm  " + playerID );
		Debug.Log("orientation  " + currentOrientation );
	

		//Debug.Log("hit type in Native Comm  " + hitTypePlus );

		#if !UNITY_EDITOR



		return snsrManager.playersDevices [playerID]._is_hit (hitType,  back, strength, currentOrientation, lastOrientation, score);


		#else

		return 5.0f;

		#endif
	}










	void Awake()
	{
		DontDestroyOnLoad (transform.gameObject);
	}


}
