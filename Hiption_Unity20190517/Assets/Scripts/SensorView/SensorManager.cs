using System.Collections;
using System.Collections.Generic;
using UnityEngine.SceneManagement;
using UnityEngine;
using UnityEngine.UI;
using Constants;
using System.IO;

public class SensorManager : MonoBehaviour 
{

	bool isSensorFound = false;


//	public GameObject qaMenu;

	public Initializer initGame;

	public NativeCommunication linkManager;
	public Text statusText;
	public string loadScene;
	public GameObject loadingScr;


	// selecting a device

	public GameObject parentObject; // parent object where search devices list is show
	public GameObject deviceName_Prefab; // list item on which device name will be display

	public GameObject nextButton;

//	public Text statusText;// show the status text of connection
	public Text deviceSelectionText;

	int status;

//	// // // // // // // // // // // // // // // // // // // // 

	public List<Devices> playersDevices = new List<Devices> ();
	public List<string> selectedPlayers = new List<string> ();

	public string playerDeviceSerial1;


//    void OnDisable()
//    {
//        Debug.Log("Disabled sensor manager");
//		linkManager.OnAccelCalibrationDone -= CalibrationComplete;
//    }
    //Initializer code -END

	void Awake()
	{
		DontDestroyOnLoad (transform.gameObject);
	}

    void Start()
    {
	Debug.Log("SensorManager Start()");	
	statusText.text = "";
	deviceSelectionText.text = "";

	nextButton.SetActive (false);

        //Initializer code -START
        statusText.text = "";
        GameObject lmObj = GameObject.Find ("LinkManager");
        if (lmObj == null) 
        {
            lmObj = new GameObject ("LinkManager");
			lmObj.AddComponent<NativeCommunication> ();
        }
	linkManager = lmObj.GetComponent<NativeCommunication> ();
	linkManager.snsrManager = this;


//        linkManager.OnAccelCalibrationDone += CalibrationComplete;

        //If sensor is already on.
        StopDevice();

        #if !UNITY_EDITOR
        StartDevice();
        #endif

        #if UNITY_EDITOR
		nextButton.SetActive (true);
        #endif
        //Initializer code -END
    }
   

    //Called form iOS native(unity communication.mm)
	public void SensorActivity(string _sensorStatus, string deviceSerial)
    {
        Debug.Log("Sensor Activity: "+_sensorStatus);
        status = int.Parse(_sensorStatus); 

        if (status >= 1)
        {
            Debug.Log("Connecting " + _sensorStatus);
            Logger.LogLine("Connecting");

//            statusText.text = "Calibrating sensor";

			Debug.Log ("Unity::SensorManager:: SensorActivity:: 1");
		Devices device = new Devices ();
			device.Start ();
		device.deviceSerialNo = deviceSerial;
		device.shouldLogData = true;
		playersDevices.Add (device);
			Debug.Log ("Unity::SensorManager:: SensorActivity:: Player Devices :: " + playersDevices.Count);


        }
        else if (status == 0)
        {
            Debug.Log("Disconnecting " + _sensorStatus);
            Logger.LogLine("Disconnecting");
			if(statusText != null)
            statusText.text = "No device found";
        }
        else if (status < 0)
        {
            Debug.Log("CONNECTING SENSOR");
            statusText.text = "Searching";
        }
    }

    void Update()
    {
//        Logger.LogLine("Started sensor manager");  


    }

    //Initializer code -START
    void StartDevice()
    {
	linkManager.SetupBluetooth ();
	linkManager.ShowDeviceList (true);
        linkManager.ResetData();
	Debug.Log ("Sensor manager, start devive void activated");
    }

   public void StopDevice()
    {
	linkManager.ShowDeviceList(false);
        Debug.Log("Stopped device");
        linkManager.ResetData();
		Debug.Log ("Sensor manager, Stop device void activated");
    }

//	public void CalibrationComplete(string deviceSerial)
//    {
//
//		for(int i = 0; i < playersDevices.Count; i++)
//		{
//			if(playersDevices[i].deviceSerialNo == deviceSerial)
//			{
//				Debug.Log("Device " + (i+1) + "Calibration completed");
//				statusText.text = "Device " + (i+1) + "Calibration completed";
//				Invoke("StartSession",1.0f);
//				playerDeviceSerial1 = deviceSerial;
//				Debug.Log ("Unity::SensorManager:: CalibrationComplete:: called start sesstion invoke ");
////				StartSession (deviceSerial);
//			}
//		}
//        
//    }
	// called when player 1 is connected
	void StartSession()
    {
		Debug.Log ("Unity::SensorManager:: CalibrationComplete:: start sesstion ");
		nextButton.SetActive (true);
		Debug.Log ("Unity::SensorManager:: CalibrationComplete:: nextButton Enabled");
		if(playersDevices.Count == 1)
		{
			deviceSelectionText.text = "select player 2 device or click next for single player game";
			Debug.Log ("player 1 serial no : " + playersDevices[0].deviceSerialNo);
		}
		else if(playersDevices.Count == 2)
		{
			deviceSelectionText.text = "Two Player's are now connected";
			Debug.Log ("player 1 serial no : " + playersDevices[0].deviceSerialNo);
			Debug.Log ("player 2 serial no : " + playersDevices[1].deviceSerialNo);
		}

		Debug.Log ("Unity::SensorManager:: CalibrationComplete:: end start sesstion ");
	print ("start Session"); 
    }

	public void DeviceFound(string deviceName)
	{
//		statusText.text = "" + deviceName;

		GameObject deviceButton = (GameObject)Instantiate (deviceName_Prefab, new Vector3(0,0,0), Quaternion.identity);
		deviceButton.transform.GetChild (0).gameObject.GetComponent <Text>().text = "" +deviceName;
		deviceButton.transform.parent = parentObject.transform;
		deviceButton.transform.localScale = new Vector3 (1, 1, 1);
		deviceButton.GetComponent<SelectedDevice> ().deviceSerialNo = deviceName;
		Debug.Log ("Sensor manager, Device found, " + deviceName);
	}

	public void Next_Btn()
	{
//		StopDevice ();
		SceneManager.LoadScene ("MainMenu");
		linkManager.StopScanning ();
		Debug.Log ("Sensor manager, device selection scene next button pressed ");

	}

	public void Back_Btn()
	{
		StopDevice ();
		linkManager.StopScanning ();
		SceneManager.LoadScene ("StartingScene");
		Debug.Log ("Sensor manager, device selection scene back button pressed ");
	}



	public void AccelSensorData(Vector3 accelData, string deviceSerial)
	{
		for(int i = 0 ; i < playersDevices.Count; i++)
		{
			if(playersDevices[i].deviceSerialNo == deviceSerial)
			{
				playersDevices [i].AccelSensorData (accelData);
			}
		}

	}

	public void GyroSensorDara(Vector3 gyroData, string deviceSerial)
	{
		for(int i = 0 ; i < playersDevices.Count; i++)
		{
			if(playersDevices[i].deviceSerialNo == deviceSerial)
			{
				playersDevices [i].GyroSensorDara (gyroData);
			}
		}


	}


	void OnApplicationQuit()
	{
		StopDevice ();
	}

    
}
