using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SelectedDevice : MonoBehaviour {

	public NativeCommunication linkManager;
	public string deviceSerialNo;

	// Use this for initialization
	void Start () 
	{
		GameObject lmObj = GameObject.Find ("LinkManager");
		if (lmObj == null) 
		{
			lmObj = new GameObject ("LinkManager");
			lmObj.AddComponent<NativeCommunication> ();
		}
		linkManager = lmObj.GetComponent<NativeCommunication> ();
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void connectTo()
	{
//		linkManager.ConnectToDevice (deviceSerialNo);

//		PlayerManager player = new PlayerManager ();
//		player.deviceSerialNo = deviceSerialNo;

		linkManager.snsrManager.deviceSelectionText.text = "";
		linkManager.snsrManager.selectedPlayers.Add (deviceSerialNo);
		linkManager.snsrManager.nextButton.SetActive (true);
		int count = linkManager.snsrManager.selectedPlayers.Count;
		for(int i = 0; i < count; i++)
		{
			linkManager.snsrManager.deviceSelectionText.text = linkManager.snsrManager.deviceSelectionText.text + "\nplayer " + (i + 1) + " Device " + linkManager.snsrManager.selectedPlayers [i] ;
		}


		Destroy (gameObject);

	}
}
