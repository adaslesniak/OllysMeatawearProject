using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;

public class TestRamps : MonoBehaviour {

	public GameObject errorScreen;

	public GameObject lmObj;
	public NativeCommunication linkManager;

	// Use this for initialization
	void Start () 
	{
		lmObj = GameObject.Find ("LinkManager");

		linkManager = lmObj.GetComponent<NativeCommunication> ();



	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void TestRMap_Btn()
	{
		// just for testing purpose make ha static rmap file

		List<string> lines;
		lines = new List<string> ();

		string r1 = "HITUP,3.533,3.661,20,2.747889,20,1.5,ORIENT_12,1234";
		string r2 = "HITDOWN,4.941,5.026,20,2.976055,20,1.5,ORIENT_12,1234";
		string r3 = "HIT9,5.879,5.965,20,1.896614,20,1.5,ORIENT_12,1234";
		string r4 = "HIT3,6.647,6.733,20,2.237319,20,1.5,ORIENT_12,1234";

		lines.Add (r1);
		lines.Add (r2);
		lines.Add (r3);
		lines.Add (r4);


		if (!Directory.Exists (Application.persistentDataPath + "/RhythmMaps/")) {
			Directory.CreateDirectory (Application.persistentDataPath + "/RhythmMaps/");
		}

		string clipName = "BabyLove_1";

		Debug.Log ("Writing: " + Application.persistentDataPath + "/RhythmMaps/" + clipName + ".rmap");

		StreamWriter writer = new StreamWriter (Application.persistentDataPath + "/RhythmMaps/" + clipName + ".rmap");

		writer.WriteLine ("ver=1.2");

		foreach (string line in lines) {
			writer.WriteLine (line);
		}

		writer.Close ();



		Debug.Log ("<color=green>Saved.</color>");


		GameObject goPersist = GameObject.Find ("PersistentPlayData");
		DontDestroyOnLoad (goPersist);
		goPersist.GetComponent<PersistentPlayData> ().rmapName = clipName + ".rmap";

		GameObject.Find("UIManager").GetComponent<MainMenu>().LoadScene("MainScene");
	}

	public void TestRMap2_Btn()
	{

		// just for testing purpose make ha static rmap file

		List<string> lines;
		lines = new List<string> ();

		string r1 = "HITUP,2,2,20,2.747889,20,1.5,ORIENT_12,1234";
		string r2 = "HITDOWN,3,3,20,2.976055,20,1.5,ORIENT_1_5,1234";
		string r3 = "HIT9,4,4,20,1.896614,20,1.5,ORIENT_3,1234";
		string r4 = "HIT3,5,5,20,2.237319,20,1.5,ORIENT_4_5,1234";
		string r5 = "HITUP,6,6,20,3,20,1,ORIENT_6,1234";
		string r6 = "HIT9,7,7,20,3,20,1,ORIENT_7_5,1234";
		string r7 = "HIT3,8,8,20,3,20,1,ORIENT_9,1234";
		string r8 = "HITDOWN,9,9,20,3,20,1,ORIENT_10_5,1234";
		string r11 = "HITUP,11,11,20,2.747889,20,1.5,ORIENT_12,1234";
		string r21 = "HITDOWN,12,12,20,2.976055,20,1.5,ORIENT_1_5,1234";
		string r31 = "HIT9,13,13,20,1.896614,20,1.5,ORIENT_3,1234";
		string r41 = "HIT3,14,14,20,2.237319,20,1.5,ORIENT_4_5,1234";
		string r51 = "HITUP,15,15,20,3,20,1,ORIENT_6,1234";
		string r61 = "HIT9,17,17,20,3,20,1,ORIENT_7_5,1234";
		string r71 = "HIT3,19,19,20,3,20,1,ORIENT_9,1234";
		string r81 = "HITDOWN,20,20,20,3,20,1,ORIENT_10_5,1234";

		lines.Add (r1);
		lines.Add (r2);
		lines.Add (r3);
		lines.Add (r4);
		lines.Add (r5);
		lines.Add (r6);
		lines.Add (r7);
		lines.Add (r8);
		lines.Add (r11);
		lines.Add (r21);
		lines.Add (r31);
		lines.Add (r41);
		lines.Add (r51);
		lines.Add (r61);
		lines.Add (r71);
		lines.Add (r81);


		if (!Directory.Exists (Application.persistentDataPath + "/RhythmMaps/")) {
			Directory.CreateDirectory (Application.persistentDataPath + "/RhythmMaps/");
		}

		string clipName = "BabyLove_1";

		Debug.Log ("Writing: " + Application.persistentDataPath + "/RhythmMaps/" + clipName + ".rmap");

		StreamWriter writer = new StreamWriter (Application.persistentDataPath + "/RhythmMaps/" + clipName + ".rmap");

		writer.WriteLine ("ver=1.2");

		foreach (string line in lines) {
			writer.WriteLine (line);
		}

		writer.Close ();

		Debug.Log ("<color=green>Saved.</color>");



		GameObject goPersist = GameObject.Find ("PersistentPlayData");
		DontDestroyOnLoad (goPersist);
		goPersist.GetComponent<PersistentPlayData> ().rmapName = clipName + ".rmap";

		GameObject.Find("UIManager").GetComponent<MainMenu>().LoadScene("MainScene");
	}

	public void TwoPlayerTestRMap_Btn()
	{
		#if !UNITY_EDITOR

		if(linkManager.snsrManager.selectedPlayers.Count != 2)
		{
		Debug.Log ("Unity:: TempRamps:: Twoplayertestrmap_Btn:: Selected Player Count " + linkManager.snsrManager.selectedPlayers.Count);
		errorScreen.SetActive (true);
		return;
		}

		#endif



		// just for testing purpose make ha static rmap file
		List<string> lines;
		lines = new List<string> ();

		string r1 = "HIT3,1,1,20,3,20,1,ORIENT_12,1";
		string r2 = "HIT9,2,2,20,3,20,1,ORIENT_12,1";
		string r3 = "HIT3,3,3,20,3,20,1,ORIENT_12,1";
		string r4 = "HIT9,4,4,20,3,20,1,ORIENT_12,1";

		string r5 = "HIT3,5,5,20,3,20,1,ORIENT_12,2";
		string r6 = "HIT9,6,6,20,3,20,1,ORIENT_12,2";
		string r7 = "HIT3,7,7,20,3,20,1,ORIENT_12,2";
		string r8 = "HIT9,8,8,20,3,20,1,ORIENT_12,2";

		string r9 = "HIT3,9,9,20,3,20,1,ORIENT_12,1";
		string r10 = "HIT9,10,10,20,3,20,1,ORIENT_12,1";
		string r11 = "HIT3,11,11,20,3,20,1,ORIENT_12,2";
		string r12 = "HIT9,12,12,20,3,20,1,ORIENT_12,2";

		lines.Add (r1);
		lines.Add (r2);
		lines.Add (r3);
		lines.Add (r4);
		lines.Add (r5);
		lines.Add (r6);
		lines.Add (r7);
		lines.Add (r8);
		lines.Add (r9);
		lines.Add (r10);
		lines.Add (r11);
		lines.Add (r12);


		if (!Directory.Exists (Application.persistentDataPath + "/RhythmMaps/")) {
			Directory.CreateDirectory (Application.persistentDataPath + "/RhythmMaps/");
		}

		string clipName = "schedule_2";

		Debug.Log ("Writing: " + Application.persistentDataPath + "/RhythmMaps/" + clipName + ".rmap");

		StreamWriter writer = new StreamWriter (Application.persistentDataPath + "/RhythmMaps/" + clipName + ".rmap");

		writer.WriteLine ("ver=1.3");

		foreach (string line in lines) {
			writer.WriteLine (line);
		}

		writer.Close ();

		Debug.Log ("<color=green>Saved.</color>");



		GameObject goPersist = GameObject.Find ("PersistentPlayData");
		DontDestroyOnLoad (goPersist);
		goPersist.GetComponent<PersistentPlayData> ().rmapName = clipName + ".rmap";

		GameObject.Find("UIManager").GetComponent<MainMenu>().LoadScene("MainScene");
	}
	public void TwoPlayerTest2RMap_Btn()
	{
		#if !UNITY_EDITOR

		if(linkManager.snsrManager.selectedPlayers.Count != 2)
		{
		Debug.Log ("Unity:: TempRamps:: Twoplayertest2rmap_Btn:: Selected Player Count " + linkManager.snsrManager.selectedPlayers.Count);
		errorScreen.SetActive (true);
		return;
		}

		#endif



		// just for testing purpose make ha static rmap file
		List<string> lines;
		lines = new List<string> ();

		string r1 = "HIT9,18.03,18.03,10,0.1,20,1.5,ORIENT_12,1";
		string r2 = "HIT3,18.529,18.529,10,0.1,20,1.5,ORIENT_12,2";
		string r3 = "HIT9,19.053,19.053,10,0.1,20,1.5,ORIENT_12,1";
		string r4 = "HIT3,19.601,19.601,10,0.1,20,1.5,ORIENT_12,2";

		string r5 = "HIT9,20.1,20.1,10,0.1,20,1.5,ORIENT_12,1";
		string r6 = "HIT3,20.649,20.649,10,0.1,20,1.5,ORIENT_12,2";
		string r7 = "HIT9,21.148,21.148,10,0.1,20,1.5,ORIENT_12,1";
		string r8 = "HIT3,21.721,21.721,10,0.1,20,1.5,ORIENT_12,2";

		string r9 = "HIT9,22.245,22.245,10,0.1,20,1.5,ORIENT_12,1";
		string r10 = "HIT3,22.794,22.794,10,0.1,20,1.5,ORIENT_12,2";
		string r11 = "HIT9,23.317,23.317,10,0.1,20,1.5,ORIENT_12,1";
		string r12 = "HIT3,23.841,23.841,10,0.1,20,1.5,ORIENT_12,1";

		lines.Add (r1);
		lines.Add (r2);
		lines.Add (r3);
		lines.Add (r4);
		lines.Add (r5);
		lines.Add (r6);
		lines.Add (r7);
		lines.Add (r8);
		lines.Add (r9);
		lines.Add (r10);
		lines.Add (r11);
		lines.Add (r12);


		if (!Directory.Exists (Application.persistentDataPath + "/RhythmMaps/")) {
			Directory.CreateDirectory (Application.persistentDataPath + "/RhythmMaps/");
		}

		string clipName = "Fade_to_Grey_2";

		Debug.Log ("Writing: " + Application.persistentDataPath + "/RhythmMaps/" + clipName + ".rmap");

		StreamWriter writer = new StreamWriter (Application.persistentDataPath + "/RhythmMaps/" + clipName + ".rmap");

		writer.WriteLine ("ver=1.3");

		foreach (string line in lines) {
			writer.WriteLine (line);
		}

		writer.Close ();

		Debug.Log ("<color=green>Saved.</color>");



		GameObject goPersist = GameObject.Find ("PersistentPlayData");
		DontDestroyOnLoad (goPersist);
		goPersist.GetComponent<PersistentPlayData> ().rmapName = clipName + ".rmap";

		GameObject.Find("UIManager").GetComponent<MainMenu>().LoadScene("MainScene");
	}
	public void Ok_ErrorButton()
	{
		errorScreen.SetActive (false);
	}
}
