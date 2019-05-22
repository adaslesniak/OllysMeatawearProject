using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class SelectingDeviceManager : MonoBehaviour {

	public GameObject parentObject; // parent object where search devices list is show
	public GameObject deviceName_Prefab; // list item on which device name will be display

	public GameObject nextButton;

	public Text statusText;// show the status text of connection
	public Text deviceSelectionText;

	public GameObject qaMenu;


//	public WAXLink linkManager;
	public NativeCommunication linkManager;

	int status;

	// Use this for initialization
//	void Start () 
//	{
//		statusText.text = "";
//		deviceSelectionText.text = "Select player 1 device";
//
//		nextButton.SetActive (false);
//
//		GameObject lmObj = GameObject.Find ("LinkManager");
//		if (lmObj == null) 
//		{
//			lmObj = new GameObject ("LinkManager");
//			lmObj.AddComponent<WAXLink> ();
//		}
//		linkManager = lmObj.GetComponent<WAXLink> ();
//		linkManager.sensorMgr = this;
//
//		linkManager.OnAccelCalibrationDone += CalibrationComplete;
//		StopDevice();
//
//		#if !UNITY_EDITOR
//		StartDevice();
//		#endif
//	}
//	public void StartDevice()
//	{
//		linkManager.ToggleSensor (true);
//		linkManager.ResetData();
//	}
//
//	public void StopDevice()
//	{
//		linkManager.ToggleSensor(false);
//		Debug.Log("Stopped device");
//		statusText.text = "Device Stoped";
//		//linkManager.ResetData();
//	}
//	void CalibrationComplete()
//	{
//		Debug.Log("Calibration completed");
//		statusText.text = "Calibration complete";
////		statusImg.color = Color.green;
//		Invoke("StartSession",1.0f);
//	}
//
//	void StartSession()
//	{
//		// select second device or go to main menu
//
//		deviceSelectionText.text = "select player 2 device or click next for single player game";
//		nextButton.SetActive (true);
//
//		print ("start Session"); 
//	}

	//Called form iOS native(WAXBTHandler.mm)
//	public void SensorActivity(string _sensorStatus)
//	{
//		Debug.Log("Sensor Activity: "+_sensorStatus);
//		//sensorStatus.text = _sensorStatus.ToString();
//		status = int.Parse(_sensorStatus); 
//
//		//int status = 0;
//		//int.TryParse(_sensorStatus, out status);
//		if (status >= 1)
//		{
//			Debug.Log("Connecting " + _sensorStatus);
//			Logger.LogLine("Connecting");
//			//Debug.Log("Connecting");
////			imgSensorStatus.sprite = sensorFound;
////			imgSensorStatus.color = Color.blue;
//
//			statusText.text = "Calibrating sensor";
////			statusImg.color = Color.blue;
//		}
//		else if (status == 0)
//		{
//			Debug.Log("Disconnecting " + _sensorStatus);
//			Logger.LogLine("Disconnecting");
//			//Debug.Log("Disconnecting");
////			imgSensorStatus.color = Color.white;
////			imgSensorStatus.sprite = sensorNotFound;
//
//			statusText.text = "No device found";
////			statusImg.color = Color.red;
//		}
//		else if (status < 0)
//		{
//			Debug.Log("CONNECTING SENSOR");
//			statusText.text = "Searching";
////			statusImg.color = Color.grey;
//		}
//	}
	
	// Update is called once per frame
	void Update () {
		
	}

//	public void DeviceFound(string deviceName)
//	{
//		statusText.text = "" + deviceName;
//
//		GameObject deviceButton = (GameObject)Instantiate (deviceName_Prefab, new Vector3(0,0,0), Quaternion.identity);
//		deviceButton.transform.GetChild (0).gameObject.GetComponent <Text>().text = "" +deviceName;
//		deviceButton.transform.parent = parentObject.transform;
//		deviceButton.transform.localScale = new Vector3 (1, 1, 1);
//	}

	public void Next_Btn()
	{
		SceneManager.LoadScene ("MainMenu");
	}

	public void Back_Btn()
	{
		SceneManager.LoadScene ("StartingScene");
	}
}
