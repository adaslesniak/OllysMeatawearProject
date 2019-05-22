using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using UnityEngine.UI;
using System;

public class Initializer : MonoBehaviour {

    public GameObject orbManager;
    public GameObject activityMonitor;
	public Text activityMonitorText;
	public NativeCommunication linkManager;

	public GameObject player1Box;
	public GameObject player2Box;

	public GameObject player1SensorStatus;
	public GameObject player2SensorStatus;

	int connectedDevicesCounter;

	PersistentPlayData persistent;
    
    void OnDisable()
    {
        Debug.Log("Disabled orb manager");
        linkManager.OnAccelCalibrationDone -= CalibrationComplete;
    }
        
    void Start()
    {
		connectedDevicesCounter = 0;
		Debug.Log ("Unity:: Initializer::1");
        GameObject lmObj = GameObject.Find ("LinkManager");
        if (lmObj == null) 
        {
            lmObj = new GameObject ("LinkManager");
			lmObj.AddComponent<NativeCommunication> ();
        }
		linkManager = lmObj.GetComponent<NativeCommunication> ();
		linkManager.snsrManager.initGame = this;
		Debug.Log ("Unity:: Initializer::2");
        linkManager.OnAccelCalibrationDone += CalibrationComplete;


		Debug.Log ("Unity:: Initializer::3");

		GameObject tmpPersistent = GameObject.Find ("PersistentPlayData");

		if (tmpPersistent == null) 
		{
			tmpPersistent = new GameObject ("PersistentPlayData");
			persistent = tmpPersistent.AddComponent<PersistentPlayData> ();

			List <string> filenames = FileUtility.GetRmapList ();

			for(int x = 0; x<filenames.Count;x++){
				Debug.Log (filenames[x]);
			}

			filenames = FFD_Filter.FilterFiles(filenames,new string[1]{".rmap"});

			if (filenames.Count == 0)
			{
				Debug.Log("NO RMAPS FOUND: "+persistent.rmapName);
				return;
			}

			//for(int x = 0; x<filenames.Count;x++){
			//	Debug.Log (filenames[x]);
			//}

			persistent.rmapName = Path.GetFileName (filenames [0]);
			//persistent.rmapName = "schedule"; //(this hardcodes name of rmap if needed)

		} 
		else 
		{
			persistent = tmpPersistent.GetComponent<PersistentPlayData> ();
		}


		if(persistent.rmapName.Contains ("_2" ))//persistent.rmapName == "schedule.rmap")
		{
			player1Box.SetActive (true);
			player2Box.SetActive (true);
		}
		else
		{
			player1Box.SetActive (true);
			player2Box.SetActive (false);
		}

        
        #if !UNITY_EDITOR
		Debug.Log ("Unity:: Initializer::4");
		Debug.Log ("Unity:: Initializer:: start Device:: total players " + connectedDevicesCounter + " Device Serial : " + linkManager.snsrManager.selectedPlayers[connectedDevicesCounter]);
        StartDevice();
        #endif

        #if UNITY_EDITOR
		Invoke("CalibrationCompleteUnityEditor",2.0f);
        #endif
    }

    void StartDevice()
    {
//		Debug.Log ("Unity:: Initializer::5");
		//activityMonitor.SetActive (true);
//		Debug.Log ("Unity:: Initializer::6");
		//activityMonitorText.text = "Calibrating Player " + (connectedDevicesCounter + 1);
//		Debug.Log ("Unity:: Initializer::7");
//		Debug.Log ("Unity:: Initializer:: start Device:: total players " + connectedDevicesCounter + " Device Serial : " + linkManager.snsrManager.selectedPlayers[connectedDevicesCounter]);
		string deviceSerial = linkManager.snsrManager.selectedPlayers [connectedDevicesCounter].ToString ();
		linkManager.ConnectToDevice (deviceSerial);
        linkManager.ResetData();
    }
        
	void CalibrationComplete(string deviceSerial)
    {
//        Debug.Log("Calibration completed");
//        activityMonitor.SetActive(false);
//        orbManager.SetActive(true);

		for(int i = 0; i < linkManager.snsrManager.playersDevices.Count; i++)
		{
			if(linkManager.snsrManager.playersDevices[i].deviceSerialNo == deviceSerial)
			{
				Debug.Log("Device " + (i+1) + "Calibration completed");
//				linkManager.snsrManager.statusText.text = "Device " + (i+1) + "Calibration completed";
//				Invoke("StartSession",1.0f);
				linkManager.snsrManager.playerDeviceSerial1 = deviceSerial;
				Debug.Log ("Unity::Initializer:: CalibrationComplete:: Device " + (i+1) + " Calibration completed ");
				connectedDevicesCounter++;
				Debug.Log ("Unity:: Initializer::8");
				Debug.Log ("Unity:: Initializer::98 :: Connected Devices : " + connectedDevicesCounter);

//				if(persistent.rmapName != "schedule.rmap" && linkManager.snsrManager.playersDevices.Count >= 2)
				if(!persistent.rmapName.Contains ("_2" ) && linkManager.snsrManager.selectedPlayers.Count == 2)
				{
					
					connectedDevicesCounter++;
					Debug.Log ("Unity:: Initializer::99 :: Connected Devices : " + connectedDevicesCounter);
				}

			}
		}
		Debug.Log ("Unity:: Initializer::9");
		if(linkManager.snsrManager.selectedPlayers.Count == 2 && persistent.rmapName.Contains ("_2" ))//persistent.rmapName == "schedule.rmap")
		{
			Debug.Log ("Unity:: Initializer::10");
			if(deviceSerial == linkManager.snsrManager.playersDevices[0].deviceSerialNo)
			{
				Debug.Log ("Unity:: Initializer::11");
				player1SensorStatus.SetActive (true);
			}
			else if(deviceSerial == linkManager.snsrManager.playersDevices[1].deviceSerialNo)
			{
				Debug.Log ("Unity:: Initializer::12");
				player2SensorStatus.SetActive (true);
			}
		}
		else
		{
			Debug.Log ("Unity:: Initializer::13");
			if(deviceSerial == linkManager.snsrManager.playersDevices[0].deviceSerialNo)
			{
				Debug.Log ("Unity:: Initializer::14");
				player1SensorStatus.SetActive (true);
			}
		}
		Debug.Log ("Unity:: Initializer::15 ::  Connected Device Counter :" + connectedDevicesCounter);
		if(linkManager.snsrManager.selectedPlayers.Count == connectedDevicesCounter)
		{
			Debug.Log ("Unity:: Initializer::16 ");
			//activityMonitor.SetActive(false);
			orbManager.SetActive(true);
		}
		else
		{
			Debug.Log ("Unity:: Initializer::17");
			StartDevice ();
		}
    }

	void CalibrationCompleteUnityEditor()
	{
//		Invoke("StartSession",1.0f);
		connectedDevicesCounter++;
//		if(persistent.rmapName != "schedule.rmap" && linkManager.snsrManager.playersDevices.Count >= 2)
		if(!persistent.rmapName.Contains ("_2" ) && linkManager.snsrManager.playersDevices.Count >= 2)
		{
			connectedDevicesCounter++;
		}

		if(persistent.rmapName.Contains ("_2" ) )//== "schedule.rmap")
		{
			
			player1SensorStatus.SetActive (true);

			player2SensorStatus.SetActive (true);
		}
		else
		{
			player1SensorStatus.SetActive (true);
		}

		//activityMonitor.SetActive(false);
		orbManager.SetActive(true);
	}
}   
