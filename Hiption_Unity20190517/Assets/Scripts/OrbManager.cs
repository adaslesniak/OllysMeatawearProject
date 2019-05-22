using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using UnityEngine.SceneManagement;
using System.IO;
using System.Collections.Generic;
using System.Linq;
using System;

public class OrbManager : MonoBehaviour
{

	public SphereControl spherelink;

    List<RhythmLine> lines;
    public GameObject orbFolder;
    public float startDistance;
    public float spawnSecondsBefore = 2;
    public float hitOrbRadius;
    float hitOrbCircumference;
    public bool isSessionEnding;

    public string rhythmMapName;
//    public WAXLink linkManager;
	public NativeCommunication linkManager;

    public GameObject hitPrefab;
    public GameObject circleHitPrefab;
    public GameObject continuousPrefab;
    public GameObject stillPrefab;

	public GameObject circleStepRig;

    int currentIndex = 0;
    PersistentPlayData persistent;

	///persistent location: Users/thewhiteolly/Library/Application Support/DefaultCompany/Unity/RhythmMaps/

    public AudioSource musicSource;
   
    public Text scoreTextPlayer1;
	public Text scoreTextPlayer2;
    public Text sessionStatus;
    public float totalScorePlayer1;
	public float totalScorePlayer2;
    public Image activityMonitor;


    HipHit previousHit;

    [HideInInspector]
    public bool hasStarted = false;

    public string loadScene;

    float[] circlePoints = { 0.09802f, 0.29028f, 0.47140f, 0.63439f, 0.77301f, 0.88192f, 0.95694f, 0.99518f };

    public Orientation lastOrientation ;
    
    public GameObject loadingScr;
    public GameObject endPanel;

	public GameObject lmObj;

    //Singleton
    public static OrbManager instance = null;

    void OnDisable()
    {
        //Debug.Log("Disabled orb manager");
        //linkManager.OnAccelCalibrationDone -= CalibrationComplete;
    }

    // Use this for initialization
    void Start ()
    {
        //Debug.Log("Orb start ***");
        //Singleton.
        if (instance == null)
            instance = this;
        else 
            if (instance != null)
            Destroy(this.gameObject);
        
		//musicSource.time += 30;
        
        hitOrbCircumference = 2 * Mathf.PI * Mathf.Pow (hitOrbRadius, 2);
        isSessionEnding = false;

        Screen.sleepTimeout = SleepTimeout.NeverSleep;

        lmObj = GameObject.Find ("LinkManager");
      
	linkManager = lmObj.GetComponent<NativeCommunication> ();
        //linkManager.ToggleSensor (true);

        linkManager.orbManager = this;
       
        GameObject tmpPersistent = GameObject.Find ("PersistentPlayData");

        if (tmpPersistent == null) {
            tmpPersistent = new GameObject ("PersistentPlayData");
            persistent = tmpPersistent.AddComponent<PersistentPlayData> ();
            
			List <string> filenames = FileUtility.GetRmapList ();
            
			for(int x = 0; x<filenames.Count;x++){
				//Debug.Log (filenames[x]);
			}

			filenames = FFD_Filter.FilterFiles(filenames,new string[1]{".rmap"});

            if (filenames.Count == 0)
            {
                //Debug.Log("NO RMAPS FOUND: "+persistent.rmapName);
                //sessionStatus.text = "No rmap found, record an rmap first";
                return;
            }

			//for(int x = 0; x<filenames.Count;x++){
			//	Debug.Log (filenames[x]);
			//}

            persistent.rmapName = Path.GetFileName (filenames [0]);
            //persistent.rmapName = "schedule"; //(this hardcodes name of rmap if needed)

        } else {
            persistent = tmpPersistent.GetComponent<PersistentPlayData> ();
        }

		//Debug.Log ("ffd: "+persistent.rmapName);


        musicSource.clip = Resources.Load<AudioClip> ("Tracks/" + persistent.rmapName.Replace (".rmap", ""));
        
        rhythmMapName = persistent.rmapName;

        Debug.Log ("Loading " + rhythmMapName);//schedule.rmap in rhythmMapName.
		Debug.Log("RhythmMaps/" + rhythmMapName.Replace (".rmap", "") + ".txt");
        //Reads an rmap(rhythmMapName = persistent.rmapName) and saves lines in csvLines[] 
        
		//string[] csvLines = File.ReadAllLines (Application.persistentDataPath + "/RhythmMaps/" + rhythmMapName.Replace (".rmap", "") + ".rmap");
		// this one works in unity : string[] csvLines = File.ReadAllLines ("Assets/Resources/RhythmMaps/" + rhythmMapName.Replace (".rmap", "") + ".txt");

		TextAsset csvRmap = Resources.Load(rhythmMapName.Replace (".rmap", "")) as TextAsset;
		string[] csvLines = csvRmap.text.Split("\n"[0]);

		//string[] csvLines = File.ReadAllLines("Assets/Resources/" + rhythmMapName.Replace (".rmap", "") + ".txt");



		//string[] csvLines = File.ReadAllLines (rhythmMapName);


        //List<RhythmLine> unorderedLines = new List<RhythmLine> ();
        lines = new List<RhythmLine> ();
        int format = 0;

        //Debug.Log ("CSV has " + csvLines.Length + " lines");

        //If the files have versions then associate the version to format.
        foreach (string line in csvLines) {
            if (line.StartsWith ("ver=")) {//this check will run for first line.
                if (line.Trim () == "ver=1")
                    format = 1;
                else if (line.Trim () == "ver=1.1")
                    format = 2;
				else if (line.Trim () == "ver=1.2")//1. For now the rmaps are ver=1.2 so every the current format remains 3
					format = 3;
				else if (line.Trim () == "ver=1.3")//1. For now the rmaps are ver=1.2 so every the current format remains 3
					format = 4;

            } else if (format == 1) {
                ProcessLine_NewFormat_v1 (line, ref lines);
            } else if (format == 2) {
                ProcessLine_NewFormat_v1_1 (line, ref lines);
			} else if (format == 3) {//2. Editor code pops this format.
				ProcessLine_NewFormat_v1_2 (line, ref lines);
			} else if (format == 4) {//2. Editor code pops this format.
				ProcessLine_NewFormat_v1_3 (line, ref lines);
            } else if (format == 0) {
                ProcessLine_OllyFormat (line, ref lines);
            }
        }

        //Debug.Log ("<color=magenta>Lines format: " + format+"</color>");
        //Debug.Log ("Parsed Lines: " + lines.Count);
        
        musicSource.Stop ();
       
        //linkManager.OnAccelCalibrationDone += CalibrationComplete;
       
        //linkManager.ToggleSensor (true);
        //linkManager.ResetData();

        //Calibrating sensor.


		//orbFolder.transform.eulerAngles = new Vector3 (0, 0, 90);

        //Skip calibration step if no bluetooth device available.To make sure that the game starts if the event fails to trigger or no sensor is found.
        /*
        #if UNITY_EDITOR
        CalibrationComplete ();
        #endif
        */

		//		if(linkManager.snsrManager.playersDevices.Count == 2 && persistent.rmapName.Contains("_2")//persistent.rmapName == "schedule.rmap")
//		{
//			scoreTextPlayer2.gameObject.SetActive (true);
//			Debug.Log ("Unity:: OrbManager:: Start :: Two Player");
//
//		}
//		else
//		{
//			scoreTextPlayer2.gameObject.SetActive (false);
//			Debug.Log ("Unity:: OrbManager:: Start :: one Player " + persistent.rmapName + " Device Count : " + linkManager.snsrManager.playersDevices.Count);
//		}

        StartSession();
    }

    //To do when the calibration completes. Reset score, play music etc.
    //void CalibrationComplete ()
    void StartSession()
    {
        //Debug.Log("Session Started");
		scoreTextPlayer1.text = "0";
		scoreTextPlayer2.text = "0";

        if (musicSource.clip == null)
        {
            musicSource.clip = Resources.Load<AudioClip> ("Tracks/" + persistent.rmapName.Replace (".rmap", ""));
          
            rhythmMapName = persistent.rmapName;
        }


            
        //musicSource.PlayDelayed (3);
        musicSource.Play();
        hasStarted = true;
        
    }

    //Splits a single line from the rhythm map. Recieves a ref of lines list and 
    //fills the splitted line into it. It's not triggering for now.
    void ProcessLine_OllyFormat (string line, ref List<RhythmLine> unorderedLines)
    {
        //Debug.Break();
        string[] row = line.Split (',');

        RhythmLine newLine = new RhythmLine ();

        string orient = row [2].Trim ();

        if (row [1].Trim ().Length == 0)
            return;

        bool validLine = true;
        if (!float.TryParse (row [5].Trim (), out newLine.timeImpact)) {
            //Debug.Log ("Error Parsing Impact Time: " + row [5]);
            return;
        }

        if (!float.TryParse (row [6].Trim (), out newLine.timeEndImpact)) {
            //Debug.Log ("Error Parsing End Impact Time: " + row [6]);
            return;
        }

        if (!ushort.TryParse (row [7].Trim (), out newLine.back)) {
            newLine.back = 0;
        }

        if (!float.TryParse (row [8].Trim (), out newLine.strength)) {
            newLine.strength = 0;
        }

        if (!float.TryParse (row [9].Trim (), out newLine.score)) {
            newLine.score = 0;
        }

        newLine.timeTillImpact = 1.5f;

        switch (row [1].Trim ()) {
            case "Hit":
                if (orient == "3")
                    newLine.hitType = HipHit.HIT3;
                else if (orient == "6")
                    newLine.hitType = HipHit.HIT6;
                else if (orient == "9")
                    newLine.hitType = HipHit.HIT9;
                else if (orient == "12")
                    newLine.hitType = HipHit.HIT12;
                else
                    validLine = false;
                break;
        }



		newLine.fired = false;

        if (validLine)
            unorderedLines.Add (newLine);
    }

    void ProcessLine_NewFormat_v1 (string line, ref List<RhythmLine> unorderedLines)
    {
        //        return hitType.ToString () + "," + timeImpact + "," + timeEndImpact + "," + back + "," + strength + "," + score + "\n";

        RhythmLine newLine = new RhythmLine ();

        string[] row = line.Split (',');

        string type = row [0].Trim ();

        try {
            newLine.hitType = (HipHit)Enum.Parse (typeof(HipHit), type);
        } catch (Exception) {
            //Debug.Log ("ERROR: Invalid Hit Type: " + type + ". Ignoring line.");
            return;
        }

        if (!float.TryParse (row [1].Trim (), out newLine.timeImpact)) {
            //Debug.Log ("Error Parsing Impact Time: " + row [5]);
            return;
        }

        if (!float.TryParse (row [2].Trim (), out newLine.timeEndImpact)) {
            //Debug.Log ("Error Parsing End Impact Time: " + row [6]);
            return;
        }


        if (!ushort.TryParse (row [3].Trim (), out newLine.back)) {
            newLine.back = 0;
        }

        if (!float.TryParse (row [4].Trim (), out newLine.strength)) {
            newLine.strength = 0;
        }

        if (!float.TryParse (row [5].Trim (), out newLine.score)) {
            newLine.score = 0;
        }

        newLine.timeTillImpact = 1.5f;

		//newLine.hitTypePlus = null;

		newLine.fired = false;

        unorderedLines.Add (newLine);

    }

    void ProcessLine_NewFormat_v1_1 (string line, ref List<RhythmLine> unorderedLines)
    {
        RhythmLine newLine = new RhythmLine ();

        string[] row = line.Split (',');

        string type = row [0].Trim ();

        try {
            newLine.hitType = (HipHit)Enum.Parse (typeof(HipHit), type);
        } catch (Exception) {
           
            //Debug.Log ("ERROR: Invalid Hit Type: " + type + ". Ignoring line.");
            return;
        }

        if (!float.TryParse (row [1].Trim (), out newLine.timeImpact)) {
            //Debug.Log ("Error Parsing Impact Time: " + row [5]);
            return;
        }

        if (!float.TryParse (row [2].Trim (), out newLine.timeEndImpact)) {
            //Debug.Log ("Error Parsing End Impact Time: " + row [6]);
            return;
        }

        if (!ushort.TryParse (row [3].Trim (), out newLine.back)) {
            newLine.back = 0;
        }

        if (!float.TryParse (row [4].Trim (), out newLine.strength)) {
            newLine.strength = 0;
        }

        if (!float.TryParse (row [5].Trim (), out newLine.score)) {
            newLine.score = 0;
        }

        if (!float.TryParse (row [6].Trim (), out newLine.timeTillImpact)) {
            newLine.timeTillImpact = 1.5f;
        }

		//newLine.hitTypePlus = null;

		newLine.fired = false;
        unorderedLines.Add (newLine);
    }
	/// <summary>//*************************************************************
    /// wombat//****************************************************************
    /// </summary>//************************************************************
    /// <param name="line">lemming.</param>//***********************************
	/// <param name="unorderedLines">Tasmanian devil.</param>
    void ProcessLine_NewFormat_v1_2 (string line, ref List<RhythmLine> unorderedLines)
    {
        RhythmLine newLine = new RhythmLine ();
        string[] row = line.Split(',');
        string type = row [0].Trim ();

        try {
			//Debug.Log(type);
            newLine.hitType = (HipHit)Enum.Parse (typeof(HipHit), type);
        } catch (Exception) {
            //Debug.Log ("ERROR: Invalid Hit Type: " + type + ". Ignoring line.");
            return;
        }
        
        if (!float.TryParse (row [1].Trim (), out newLine.timeImpact)) {
            //Debug.Log ("Error Parsing Impact Time: " + row [5]);
            return;
        }

		Debug.Log(newLine.timeImpact);

        //Impact time.
        if (!float.TryParse (row [2].Trim (), out newLine.timeEndImpact)) {
            //Debug.Log ("Error Parsing End Impact Time: " + row [6]);
            return;
        }
           
        if (!ushort.TryParse (row [3].Trim (), out newLine.back)) {
            newLine.back = 0;
        }
         
        if (!float.TryParse (row [4].Trim (), out newLine.strength)) {
            newLine.strength = 0;
        }
            
        if (!float.TryParse (row [5].Trim (), out newLine.score)) {
            newLine.score = 0;
        }
            
        if (!float.TryParse (row [6].Trim (), out newLine.timeTillImpact)) {
            newLine.timeTillImpact = 1.5f;
        }
           
        string orientation = row [7].Trim ();


        try {
            newLine.orientation = (Orientation)Enum.Parse (typeof(Orientation), orientation);
        } catch (Exception) {
            //Debug.Log ("ERROR: Bad Orientation: " + orientation + " setting to ORIENT_12");
                
        }
         
		newLine.players = new Players ();

       string playersString = row [8].Trim ();

		newLine.players.PlayersLine = playersString;

        //Debug.Log ("type; "+type);

		newLine.players.Init ();

		if (playersString == "1") {
			newLine.players.p1 = true;
		}

		if (playersString == "2") {
			newLine.players.p2 = true;
		}

		if (playersString == "12"  || playersString == "21") {
			newLine.players.p1 = true;
			newLine.players.p2 = true;
		}


        //Set the newline to not triggered yet.
		newLine.fired = false;

        //Add the newly tokenized line to the list of rhythm lines.
        unorderedLines.Add (newLine);
    }

	void ProcessLine_NewFormat_v1_3 (string line, ref List<RhythmLine> unorderedLines)
	{
		RhythmLine newLine = new RhythmLine ();
		string[] row = line.Split(',');
		string type = row [0].Trim ();

		// FFD_UPGRADE: process new type into subtype...
		if (type.StartsWith ("CIRCLE")) { // CIRCLE_Q_12_12
			string[] typeset = type.Split ("_" [0]);
			try {
				newLine.circleType = (CircleType)Enum.Parse (typeof(CircleType), type.Substring (7, 1));
				newLine.hitType = (HipHit)Enum.Parse (typeof(HipHit), typeset [0] + "_" + typeset [2] + "_" + typeset [3]);
			} catch (Exception) {
				return;
			}
		} else { // everything else...
			try {
				//Debug.Log (type);
				newLine.hitType = (HipHit)Enum.Parse (typeof(HipHit), type);
			} catch (Exception) {
                //Debug.Log ("ERROR: Invalid Hit Type: " + type + ". Ignoring line.");
				return;
				//newLine.hitTypePlus = null;
			}
		}

		if (!float.TryParse (row [1].Trim (), out newLine.timeImpact)) {
			//Debug.Log ("Error Parsing Impact Time: " + row [5]);
			return;
		}

		//Debug.Log(newLine.timeImpact);

		//Impact time.
		if (!float.TryParse (row [2].Trim (), out newLine.timeEndImpact)) {
			//Debug.Log ("Error Parsing End Impact Time: " + row [6]);
			return;
		}

		if (!ushort.TryParse (row [3].Trim (), out newLine.back)) {
			newLine.back = 0;
		}

		if (!float.TryParse (row [4].Trim (), out newLine.strength)) {
			newLine.strength = 0;
		}

		if (!float.TryParse (row [5].Trim (), out newLine.score)) {
			newLine.score = 0;
		}

		if (!float.TryParse (row [6].Trim (), out newLine.timeTillImpact)) {
			newLine.timeTillImpact = 1.5f;
		}

		string orientation = row [7].Trim ();

		try {
			newLine.orientation = (Orientation)Enum.Parse (typeof(Orientation), orientation);
		} catch (Exception) {
            //Debug.Log ("ERROR: Bad Orientation: " + orientation + " setting to ORIENT_12");

		}


		newLine.players = new Players ();

		string playersString = row [8].Trim ();

		newLine.players.PlayersLine = playersString;

		//Debug.Log ("type; "+type);

		newLine.players.Init ();

		if (playersString == "1") {
			newLine.players.p1 = true;
		}

		if (playersString == "2") {
			newLine.players.p2 = true;
		}

		if (playersString == "12"  || playersString == "21") {
			newLine.players.p1 = true;
			newLine.players.p2 = true;
		}
			
		//Debug.Log("<color=magenta>PLAYER: "+players.ToString()+"</color>");
		//foreach (char p in players) {
		//  try {
		//    PlayerFlag tmpPlayer = (PlayerFlag)Enum.Parse (typeof(PlayerFlag), "PLAYER_" + p);
		//    newLine.players |= tmpPlayer;
		//	Debug.Log(p);
		// } catch (Exception) {
		//    Debug.Log ("Bad Player " + p + " found, ignoring");
		// }
		//    }

		//Set the newline to not triggered yet.
		newLine.fired = false;

		//Add the newly tokenized line to the list of rhythm lines.
		unorderedLines.Add (newLine);
	}


	//public float playSpeed = 1.0f;

	//public float Back30s = 0.0f;

	public float scrollPos = 0.0f;
	public GUISkin hiptionSkin = null;

	void OnGUI()
	{
		GUI.skin = hiptionSkin;
		int minutes = Mathf.FloorToInt(musicSource.time / 60F);
		int seconds = Mathf.FloorToInt(musicSource.time - minutes * 60);
		string niceTime = string.Format("{0:0}:{1:00}", minutes, seconds);

		scrollPos = GUI.HorizontalSlider(new Rect(0f, 0f, Screen.width, 50f), scrollPos, 0, musicSource.clip.length);
		if (GUI.changed == true) {
			musicSource.time = scrollPos;

		} else {
			scrollPos = musicSource.time;
			//Time.time = musicSource.time;
		}

		GUI.Label(new Rect(10,Screen.height-30,250,100), niceTime);

	}


    void Update ()
    {
		//Debug.Log ("music time: " + musicSource.time);
		//Debug.Log ("time: " + Time.time);

		//orbFolder.transform.Rotate ( new Vector3 (0, 0, 90));

        //NORMAL END OF SESSION.
		/// checks whether song finished and then stops music and tells sensor(the motion sensors) to turn off and sends back to main menu
		/// triggers when the game is already playing but the either the music not playing or has reached it's length.
        if (hasStarted && (musicSource.time >= musicSource.clip.length || (!musicSource.isPlaying && Time.time > musicSource.clip.length))) {
            Debug.Log("ENDING SESSION");
            EndSession();

            /*
            musicSource.Stop ();

            linkManager.ToggleSensor (false);
            
            linkManager.SaveLogData (musicSource.clip.name);

            Application.LoadLevel ("MainMenu");

            Debug.Log("<color=yellow>UPDEND SESSION</color>");

            return;
            */
        }

       // if (musicSource.time == 0.0f)
         //   return;

	

		//Dictionary<float, int> musicTimeDict = new Dictionary<float, int>();

		for(currentIndex = 0 ; currentIndex < lines.Count ; currentIndex++)
			

        {



			if ((lines [currentIndex].fired && !lines [currentIndex].hitType.ToString ().StartsWith ("CIRCLE") && musicSource.time < lines [currentIndex].timeImpact - lines [currentIndex].timeTillImpact)){
				for (int i = 0; i < currentIndex+1; i++) {
					RhythmLine l = lines[i];
					l.fired = false;
					Debug.Log (l.timeImpact);
					lines[i] = l;
				} 
			}

			//Debug.Log ("lines.count" + lines.Count);
			//Debug.Log ("music time" + musicSource.time + "& current index" + currentIndex);

			
			if (!lines [currentIndex].fired) 
            {
                float circle_impact_time = Mathf.Abs (lines [currentIndex].timeImpact - lines [currentIndex].timeEndImpact);//circle impat time = impactEnd time(on mouse up) - impact time(on mouse down)
				//float circle_speed = 1.714285f * circle_impact_time;
				//float circle_lead_time = 3.95f * circle_speed;
				//float cirleStartTime = lines [currentIndex].timeEndImpact - (circle_impact_time + circle_lead_time);
				float encircleTime = 2.60f;
				if (lines [currentIndex].circleType == CircleType.H)
					encircleTime = 2.60f/2;
				if (lines [currentIndex].circleType == CircleType.Q)
					encircleTime = 2.60f/4;

				float circle_speed = (1f/encircleTime) * circle_impact_time;
				float circle_lead_time = 1.16f * circle_speed;
				float cirleStartTime = lines [currentIndex].timeEndImpact - (circle_impact_time + circle_lead_time);

				if (lines [currentIndex].hitType.ToString ().StartsWith ("CIRCLE")) {
					//Debug.Log ("CircleSpeed: " + circle_speed + " / circle_impact_time: " + circle_impact_time + " / circle_lead_time: " + circle_lead_time);
					//Debug.Log ("timeEndImpact: " + lines [currentIndex].timeEndImpact + " / lines [currentIndex].timeImpact: " + lines [currentIndex].timeImpact);
					//Debug.Log ("cirleStartTime: " + cirleStartTime);
				}

                //****************************************************************************************
                //****************************************************************************************
                //????? 
                //****************************************************************************************





				if ((!lines [currentIndex].hitType.ToString ().StartsWith ("CIRCLE") && musicSource.time > lines [currentIndex].timeImpact - lines [currentIndex].timeTillImpact) ||
					(lines [currentIndex].hitType.ToString ().StartsWith ("CIRCLE") && musicSource.time > cirleStartTime) ) {
                    //Debug.Log("<color=cyan>TRIGGERING ARRAY INNER: "+(currentIndex+1)+"</color>");
                    // FFD added code dec 1 2016
					// adding code to deal with ou of sync event.
					RhythmLine line = lines [currentIndex];

					line.fired = true;
					lines [currentIndex] = line;
					//line.hitTypePlus = null;





					currentIndex++;

					if (line.hitType != HipHit.STILL)
						previousHit = line.hitType;

					if (line.hitType.ToString ().StartsWith ("BEAT")) {
						Debug.Log ("BEAT");
						float power = line.back;
						float pulseIn = line.strength;
						float PulseOut = line.score;
						spherelink.PulseCircles (new int[]{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 }, pulseIn, PulseOut, power);
					} 
                    //If the line is of Hit type, then spawn an orb.
					else if (line.hitType.ToString ().StartsWith ("HIT")) {
						//if (line.hitType.ToString ().StartsWith ("HIT")|| line.hitType.ToString ().StartsWith ("CIRCLE") ) {

						Orb newOrb;


						//If the hit is of any of these listed types then spawn a simple orb object.
						if (line.hitType == HipHit.HIT12 || line.hitType == HipHit.HIT3 || line.hitType == HipHit.HIT6 || line.hitType == HipHit.HIT9 || line.hitType == HipHit.HITUP || line.hitType == HipHit.HITDOWN) {
							
							//hitPrefab object has a simple Orb.cs attached to it.
							GameObject newObj = Instantiate (hitPrefab) as GameObject;
                        
							newOrb = newObj.GetComponent<Orb> ();
							//Debug.Log ("player=" + line.players.PlayersLine);

							///line.hitTypePlus = null;

							if (line.players.PlayersLine == "1") {
								
								Renderer[] rends = newObj.GetComponentsInChildren<Renderer> ();

								newOrb.player = 0; //player 1
								scoreTextPlayer1.color = Color.cyan;

								for (int rendloop = 0; rendloop < rends.Length; rendloop++) { 
									if (rends [rendloop].name != "ParticleEmitter" ||rends [rendloop].name != "Aura" ) {
										rends [rendloop].material.color = new Color (0.1f, 0.2f, 0.998f,1f);
										rends [rendloop].material.SetColor ("_EmissionColor", new Color (0.09f, 0.72f, 0.89f, 1f));

									}
								}

							} else if (line.players.PlayersLine == "2") {
								Renderer[] rends = newObj.GetComponentsInChildren<Renderer> ();

								newOrb.player = 1; //player 2
								scoreTextPlayer2.color = Color.red;

								for (int rendloop = 0; rendloop < rends.Length; rendloop++) { 
									if (rends [rendloop].name != "ParticleEmitter") {
										rends [rendloop].material.color = new Color (1.0f, 0.0f, 0.0f);
										rends [rendloop].material.SetColor ("_EmissionColor", new Color (0.54f, 0.0f, 0.0f));
									}
								}

							} 

							else if (line.players.PlayersLine == "12") {
								Renderer[] rends = newObj.GetComponentsInChildren<Renderer> ();

								newOrb.player = 12; 
								scoreTextPlayer1.color = Color.cyan;
								scoreTextPlayer2.color = Color.red;

								for (int rendloop = 0; rendloop < rends.Length; rendloop++) { 
									rends [rendloop].material.color = new Color (1.0f, 1.0f, 1.0f);
									rends [rendloop].material.SetColor ("_EmissionColor", new Color (1.0f, 1.0f, 1.0f));
								}
							} 
							else if (line.players.PlayersLine == "21") {

								Renderer[] rends = newObj.GetComponentsInChildren<Renderer> ();

								newOrb.player = 21; 
								scoreTextPlayer1.color = Color.cyan;
								scoreTextPlayer2.color = Color.red;

								GameObject hitPointer2 = GameObject.Find("HitRotationPointer2"); 

								Material hitRotation2Render = hitPointer2.GetComponent<Renderer>().material;

								for (int rendloop = 0; rendloop < rends.Length; rendloop++) {
									rends [rendloop].material.color = new Color (1.0f, 1.0f, 1.0f);
									rends [rendloop].material.SetColor ("_EmissionColor", new Color (1.0f, 1.0f, 1.0f)); 

								}

								hitRotation2Render.color = Color.red;

							}
						
		                       
                            // Set the angle based on the orientation of the line.
							// New Logic for spawning positions including the orientation marker
							float dotRotation = 0;
						
							switch (line.orientation) {
							case Orientation.ORIENT_12:
								dotRotation = 0;
								break;

							case Orientation.ORIENT_1_5:
								dotRotation = -45;
								break;
							
							case Orientation.ORIENT_3:
								dotRotation = -90;
								break;
							
							case Orientation.ORIENT_4_5:
								dotRotation = -135;
								break;
							
							case Orientation.ORIENT_6:
								dotRotation = -180;
								break;
							
							case Orientation.ORIENT_7_5:
								dotRotation = -225;
								break;
							
							case Orientation.ORIENT_9:
								dotRotation = -270;
								break;
							
							case Orientation.ORIENT_10_5:
								dotRotation = -315;
								break;
							
							default:
								break;
							}

							float hitRotation = 0;
						
							switch (line.hitType) {
							case HipHit.HITUP:
							case HipHit.HIT12:
								hitRotation = 0;
								break;
							
							case HipHit.HIT3:
								hitRotation = 270;
								break;
						
							case HipHit.HIT6:
							case HipHit.HITDOWN:
								hitRotation = 180;
								break;

							case HipHit.HIT9:
								hitRotation = 90;
								break;

							default:
								break;
							}

                            //****************************************************************************************
                            //****************************************************************************************
                            //?????
                            //****************************************************************************************
							// Real rotation of the object is the added rotation of the Orientation + Hit
							float realRotation = dotRotation + hitRotation;

							// Set the position to normal location at the set distance
							Vector3 initialPosition = new Vector3 (0, startDistance + hitOrbRadius, newObj.transform.position.z);

							newObj.transform.position = initialPosition;

							// Rotate this by an angle
							newObj.transform.RotateAround (Vector3.zero, Vector3.forward, realRotation);
							newObj.transform.localScale = new Vector3(0.2f*Mathf.Sqrt(line.strength),0.2f*Mathf.Sqrt(line.strength), 0.2f*Mathf.Sqrt(line.strength));


						} else {
							return;
						}

                        //Fill the orb data.
						if (newOrb != null) {
							newOrb.hitType = line.hitType;
							//newOrb.hitTypePlus = null;
							newOrb.back = line.back;
							newOrb.strength = line.strength;
							newOrb.timeImpact = line.timeImpact;
							newOrb.timeEndImpact = line.timeEndImpact;
							newOrb.score = line.score;
							newOrb.orientation = line.orientation;
							newOrb.orbManager = this;
							newOrb.transform.parent = orbFolder.transform;
							newOrb.transform.localRotation = new Quaternion ();

							// FFD_UPGRADE
							// set the scale of the sphere addon...
							newOrb.SetSize ((line.strength + .2f) * .9f / 4.8f);

							iTween.MoveTo (newOrb.gameObject, new Hashtable () {
								{ "name", "orbIncoming" },
								{ "x", 0.0f },
								{ "y", 0.0f },
								{ "time", line.timeTillImpact + (line.timeTillImpact / (hitOrbRadius + startDistance)) },
								{ "easeType", "linear" },
								{ "orienttopath", false },
							});
								
						}
					} else if (line.hitType.ToString ().Equals ("STILL") && previousHit != HipHit.STILL) {
						StillOrb newOrb;

							
						float dotRotation = 0;

						switch (line.orientation) {
						case Orientation.ORIENT_12:
							dotRotation = 0;
							break;

						case Orientation.ORIENT_1_5:
							dotRotation = -45;
							break;

						case Orientation.ORIENT_3:
							dotRotation = -90;
							break;

						case Orientation.ORIENT_4_5:
							dotRotation = -135;
							break;

						case Orientation.ORIENT_6:
							dotRotation = -180;
							break;

						case Orientation.ORIENT_7_5:
							dotRotation = -225;
							break;

						case Orientation.ORIENT_9:
							dotRotation = -270;
							break;

						case Orientation.ORIENT_10_5:
							dotRotation = -315;
							break;

						default:
							break;
						}

						float hitRotation = 0;


						GameObject newObj;


						//GameObject newObj = Instantiate (stillPrefab) as GameObject;
						if (previousHit == HipHit.CONT12 || previousHit == HipHit.CIRCLE_3_12 || previousHit == HipHit.CIRCLE_9_12 || previousHit == HipHit.CONTUP || previousHit == HipHit.HIT12 || previousHit == HipHit.HITUP)   {
							hitRotation = 0;
							Vector3 rezzPosition = new Vector3 (0, startDistance + hitOrbRadius, 0);
							newObj = Instantiate (stillPrefab,rezzPosition, Quaternion.identity) as GameObject;
							newObj.transform.position = new Vector3 (newObj.transform.position.x, startDistance + hitOrbRadius, newObj.transform.position.z);
							} 
						else if (previousHit == HipHit.CONT3 || previousHit == HipHit.CIRCLE_12_3 || previousHit == HipHit.CIRCLE_6_3 || previousHit == HipHit.HIT3) {
							hitRotation = 0;
							Vector3 rezzPosition = new Vector3 (startDistance + hitOrbRadius, 0, 0);
							newObj = Instantiate (stillPrefab,rezzPosition, Quaternion.identity) as GameObject;
							newObj.transform.position = new Vector3 (startDistance + hitOrbRadius, newObj.transform.position.y, newObj.transform.position.z);
							} 
						else if (previousHit == HipHit.CONT6 || previousHit == HipHit.CIRCLE_3_6 || previousHit == HipHit.CIRCLE_9_6 || previousHit == HipHit.CONTDOWN || previousHit == HipHit.HIT6 || previousHit == HipHit.HITDOWN) {
							hitRotation = 0;
							Vector3 rezzPosition = new Vector3 (0, -startDistance - hitOrbRadius, 0);
							newObj = Instantiate (stillPrefab,rezzPosition, Quaternion.identity) as GameObject;
							newObj.transform.position = new Vector3 (newObj.transform.position.x, -startDistance - hitOrbRadius, newObj.transform.position.z);
							} 
						else if (previousHit == HipHit.CONT9 || previousHit == HipHit.CIRCLE_12_9 || previousHit == HipHit.CIRCLE_6_9 || previousHit == HipHit.HIT9) {
							hitRotation = 0;
							Vector3 rezzPosition = new Vector3 (-startDistance - hitOrbRadius, 0, 0);
							newObj = Instantiate (stillPrefab,rezzPosition, Quaternion.identity) as GameObject;
							newObj.transform.position = new Vector3 (-startDistance - hitOrbRadius, newObj.transform.position.y, newObj.transform.position.z);
							}
						else
							return;

						newOrb = newObj.GetComponent<StillOrb> ();


						if (line.players.PlayersLine == "1") {
							newOrb.player = 0;
						} else if (line.players.PlayersLine == "2") {
							newOrb.player = 1;
						} else if (line.players.PlayersLine == "12") {
							newOrb.player = 12;
						} else if (line.players.PlayersLine == "21") {
							newOrb.player = 21;
						}


					

						//****************************************************************************************
						//****************************************************************************************
						//?????
						//****************************************************************************************
						// Real rotation of the object is the added rotation of the Orientation + Hit
						float realRotation = dotRotation + hitRotation;

						// Rotate this by an angle
						newObj.transform.RotateAround (Vector3.zero, Vector3.forward, realRotation);



						if (newOrb != null) {
							newOrb.hitType = line.hitType;
							//newOrb.hitTypePlus = null;
							newOrb.back = line.back;
							newOrb.strength = line.strength;
							newOrb.timeImpact = line.timeImpact;
							newOrb.timeEndImpact = line.timeEndImpact;
							newOrb.score = line.score;
							newOrb.orbManager = this;

							newOrb.transform.parent = orbFolder.transform;

							newOrb.GetComponent<TrailRenderer> ().time = (line.timeEndImpact - line.timeImpact);
							//newOrb.GetComponent<TrailRenderer> ().material.color = Color.red;


							iTween.MoveTo (newOrb.gameObject, new Hashtable () {
								{ "name", "orbIncoming" },
								{ "x", 0.0f },
								{ "y", 0.0f },
								{ "time", line.timeTillImpact + (line.timeTillImpact / (hitOrbRadius + startDistance)) },
								{ "easeType", "linear" },
								{ "orienttopath", true },
							
							});
						}
					} else if (line.hitType.ToString ().StartsWith ("CONT")) {
						ContinuousOrb newOrb;


						if (line.hitType == HipHit.CONT12 || line.hitType == HipHit.CONT3 || line.hitType == HipHit.CONT6 || line.hitType == HipHit.CONT9 || line.hitType == HipHit.CONTUP || line.hitType == HipHit.CONTDOWN) {
							GameObject newObj = Instantiate (continuousPrefab) as GameObject;
							if (line.hitType == HipHit.CONTUP || line.hitType == HipHit.CONT12)
								newObj.transform.position = new Vector3 (newObj.transform.position.x, startDistance + hitOrbRadius, newObj.transform.position.z);
							else if (line.hitType == HipHit.CONT3)
								newObj.transform.position = new Vector3 (startDistance + hitOrbRadius, newObj.transform.position.y, newObj.transform.position.z);
							else if (line.hitType == HipHit.CONTDOWN || line.hitType == HipHit.CONT6)
								newObj.transform.position = new Vector3 (newObj.transform.position.x, -startDistance - hitOrbRadius, newObj.transform.position.z);
							else if (line.hitType == HipHit.CONT9)
								newObj.transform.position = new Vector3 (-startDistance - hitOrbRadius, newObj.transform.position.y, newObj.transform.position.z);



							////testing orientation script in cont object from here


							//  New Logic for spawning positions including the orientation marker
							float dotRotation = 0;

							switch (line.orientation) {
							case Orientation.ORIENT_12:
								dotRotation = 0;
								break;

							case Orientation.ORIENT_1_5:
								dotRotation = -45;
								break;

							case Orientation.ORIENT_3:
								dotRotation = -90;
								break;

							case Orientation.ORIENT_4_5:
								dotRotation = -135;
								break;

							case Orientation.ORIENT_6:
								dotRotation = -180;
								break;

							case Orientation.ORIENT_7_5:
								dotRotation = -225;
								break;

							case Orientation.ORIENT_9:
								dotRotation = -270;
								break;

							case Orientation.ORIENT_10_5:
								dotRotation = -315;
								break;

							default:
								break;

							}

							float hitRotation = 0;

							switch (line.hitType) {
							case HipHit.CONTUP:
							case HipHit.CONT12:
								hitRotation = 0;
								break;

							case HipHit.CONT3:
								hitRotation = 270;
								break;

							case HipHit.CONT6:
							case HipHit.CONTDOWN:
								hitRotation = 180;
								break;

							case HipHit.CONT9:
								hitRotation = 90;
								break;

							default:
								break;

							}

							// Real rotation of the object is the added rotation of the Orientation + Hit
							float realRotation = dotRotation + hitRotation;

							// Set the position to normal location at the set distance
							Vector3 initialPosition = new Vector3 (0, startDistance + hitOrbRadius, newObj.transform.position.z);

							newObj.transform.position = initialPosition;

							newObj.transform.RotateAround (Vector3.zero, Vector3.forward, realRotation);


							newOrb = newObj.GetComponent<ContinuousOrb> ();
						} else {
							return;
						}


						if (newOrb != null) {
							newOrb.hitType = line.hitType;
							//newOrb.hitTypePlus = null;
							newOrb.back = line.back;
							newOrb.strength = line.strength;
							newOrb.timeImpact = line.timeImpact;
							newOrb.timeEndImpact = line.timeEndImpact;
							newOrb.score = line.score;
							newOrb.orbManager = this;
							newOrb.transform.parent = orbFolder.transform;
							newOrb.orientation = line.orientation;

							newOrb.transform.localRotation = new Quaternion ();

							newOrb.GetComponent<TrailRenderer> ().time = (line.timeEndImpact - line.timeImpact) + 0.2f;

							iTween.MoveTo (newOrb.gameObject, new Hashtable () {
								{ "name", "orbIncoming" },
								{ "x", 0.0f },
								{ "y", 0.0f },
								{ "time", line.timeTillImpact + (line.timeTillImpact / (hitOrbRadius + startDistance)) },
								{ "easeType", "linear" },
								{ "orienttopath", false },
							});
						}
					} else if (line.hitType.ToString ().StartsWith ("CIRCLE")) {
						CircleDirection[] directionList = new CircleDirection[32];
						HipHit[] circleList = new HipHit[32];

						if (line.hitType == HipHit.CIRCLE_12_3 ) {
							circleList = new HipHit[] {
								HipHit.CIRCLE_3,
								HipHit.CIRCLE_3,
								HipHit.CIRCLE_4_5,
								HipHit.CIRCLE_4_5,
								HipHit.CIRCLE_4_5,
								HipHit.CIRCLE_4_5,
								HipHit.CIRCLE_6,
								HipHit.CIRCLE_6,
								HipHit.CIRCLE_6,
								HipHit.CIRCLE_6,
								HipHit.CIRCLE_7_5,
								HipHit.CIRCLE_7_5,
								HipHit.CIRCLE_7_5,
								HipHit.CIRCLE_7_5,
								HipHit.CIRCLE_9,
								HipHit.CIRCLE_9,
								HipHit.CIRCLE_9,
								HipHit.CIRCLE_9,
								HipHit.CIRCLE_10_5,
								HipHit.CIRCLE_10_5,
								HipHit.CIRCLE_10_5,
								HipHit.CIRCLE_10_5,
								HipHit.CIRCLE_12,
								HipHit.CIRCLE_12,
								HipHit.CIRCLE_12,
								HipHit.CIRCLE_12,
								HipHit.CIRCLE_1_5,
								HipHit.CIRCLE_1_5,
								HipHit.CIRCLE_1_5,
								HipHit.CIRCLE_1_5,
								HipHit.CIRCLE_3,
								HipHit.CIRCLE_3
							};
								
						} 


						else if (line.hitType == HipHit.CIRCLE_9_6) {
							circleList = new HipHit[] {
								
								HipHit.CIRCLE_6,
								HipHit.CIRCLE_6,
								HipHit.CIRCLE_4_5,
								HipHit.CIRCLE_4_5,
								HipHit.CIRCLE_4_5,
								HipHit.CIRCLE_4_5,
								HipHit.CIRCLE_3,
								HipHit.CIRCLE_3,
								HipHit.CIRCLE_3,
								HipHit.CIRCLE_3,
								HipHit.CIRCLE_1_5,
								HipHit.CIRCLE_1_5,
								HipHit.CIRCLE_1_5,
								HipHit.CIRCLE_1_5,
								HipHit.CIRCLE_12,
								HipHit.CIRCLE_12,
								HipHit.CIRCLE_12,
								HipHit.CIRCLE_12,
								HipHit.CIRCLE_10_5,
								HipHit.CIRCLE_10_5,
								HipHit.CIRCLE_10_5,
								HipHit.CIRCLE_10_5,
								HipHit.CIRCLE_9,
								HipHit.CIRCLE_9,
								HipHit.CIRCLE_9,
								HipHit.CIRCLE_9,
								HipHit.CIRCLE_7_5,
								HipHit.CIRCLE_7_5,
								HipHit.CIRCLE_7_5,
								HipHit.CIRCLE_7_5,
								HipHit.CIRCLE_6,
								HipHit.CIRCLE_6
							};
								
						}
							
						else if (line.hitType == HipHit.CIRCLE_3_6 ) {
							circleList = new HipHit[] {
								HipHit.CIRCLE_6,
								HipHit.CIRCLE_6,
								HipHit.CIRCLE_7_5,
								HipHit.CIRCLE_7_5,
								HipHit.CIRCLE_7_5,
								HipHit.CIRCLE_7_5,
								HipHit.CIRCLE_9,
								HipHit.CIRCLE_9,
								HipHit.CIRCLE_9,
								HipHit.CIRCLE_9,
								HipHit.CIRCLE_10_5,
								HipHit.CIRCLE_10_5,
								HipHit.CIRCLE_10_5,
								HipHit.CIRCLE_10_5,
								HipHit.CIRCLE_12,
								HipHit.CIRCLE_12,
								HipHit.CIRCLE_12,
								HipHit.CIRCLE_12,
								HipHit.CIRCLE_1_5,
								HipHit.CIRCLE_1_5,
								HipHit.CIRCLE_1_5,
								HipHit.CIRCLE_1_5,
								HipHit.CIRCLE_3,
								HipHit.CIRCLE_3,
								HipHit.CIRCLE_3,
								HipHit.CIRCLE_3,
								HipHit.CIRCLE_4_5,
								HipHit.CIRCLE_4_5,
								HipHit.CIRCLE_4_5,
								HipHit.CIRCLE_4_5,
								HipHit.CIRCLE_6,
								HipHit.CIRCLE_6
							};

						} 

						else if (line.hitType == HipHit.CIRCLE_12_9) {
							circleList = new HipHit[] {
								HipHit.CIRCLE_9,
								HipHit.CIRCLE_9,
								HipHit.CIRCLE_7_5,
								HipHit.CIRCLE_7_5,
								HipHit.CIRCLE_7_5,
								HipHit.CIRCLE_7_5,
								HipHit.CIRCLE_6,
								HipHit.CIRCLE_6,
								HipHit.CIRCLE_6,
								HipHit.CIRCLE_6,
								HipHit.CIRCLE_4_5,
								HipHit.CIRCLE_4_5,
								HipHit.CIRCLE_4_5,
								HipHit.CIRCLE_4_5,
								HipHit.CIRCLE_3,
								HipHit.CIRCLE_3,
								HipHit.CIRCLE_3,
								HipHit.CIRCLE_3,
								HipHit.CIRCLE_1_5,
								HipHit.CIRCLE_1_5,
								HipHit.CIRCLE_1_5,
								HipHit.CIRCLE_1_5,
								HipHit.CIRCLE_12,
								HipHit.CIRCLE_12,
								HipHit.CIRCLE_12,
								HipHit.CIRCLE_12,
								HipHit.CIRCLE_10_5,
								HipHit.CIRCLE_10_5,
								HipHit.CIRCLE_10_5,
								HipHit.CIRCLE_10_5,
								HipHit.CIRCLE_9,
								HipHit.CIRCLE_9
							};
								
						}

						else if (line.hitType == HipHit.CIRCLE_6_9) {
							circleList = new HipHit[] {
								HipHit.CIRCLE_9,
								HipHit.CIRCLE_9,
								HipHit.CIRCLE_10_5,
								HipHit.CIRCLE_10_5,
								HipHit.CIRCLE_10_5,
								HipHit.CIRCLE_10_5,
								HipHit.CIRCLE_12,
								HipHit.CIRCLE_12,
								HipHit.CIRCLE_12,
								HipHit.CIRCLE_12,
								HipHit.CIRCLE_1_5,
								HipHit.CIRCLE_1_5,
								HipHit.CIRCLE_1_5,
								HipHit.CIRCLE_1_5,
								HipHit.CIRCLE_3,
								HipHit.CIRCLE_3,
								HipHit.CIRCLE_3,
								HipHit.CIRCLE_3,
								HipHit.CIRCLE_4_5,
								HipHit.CIRCLE_4_5,
								HipHit.CIRCLE_4_5,
								HipHit.CIRCLE_4_5,
								HipHit.CIRCLE_6,
								HipHit.CIRCLE_6,
								HipHit.CIRCLE_6,
								HipHit.CIRCLE_6,
								HipHit.CIRCLE_7_5,
								HipHit.CIRCLE_7_5,
								HipHit.CIRCLE_7_5,
								HipHit.CIRCLE_7_5,
								HipHit.CIRCLE_9,
								HipHit.CIRCLE_9
							};
								
						}
							else if (line.hitType == HipHit.CIRCLE_3_12) {
								circleList = new HipHit[] {
									
									HipHit.CIRCLE_12,
									HipHit.CIRCLE_12,
									HipHit.CIRCLE_10_5,
									HipHit.CIRCLE_10_5,
									HipHit.CIRCLE_10_5,
									HipHit.CIRCLE_10_5,
									HipHit.CIRCLE_9,
									HipHit.CIRCLE_9,
									HipHit.CIRCLE_9,
									HipHit.CIRCLE_9,
									HipHit.CIRCLE_7_5,
									HipHit.CIRCLE_7_5,
									HipHit.CIRCLE_7_5,
									HipHit.CIRCLE_7_5,
									HipHit.CIRCLE_6,
									HipHit.CIRCLE_6,
									HipHit.CIRCLE_6,
									HipHit.CIRCLE_6,
									HipHit.CIRCLE_4_5,
									HipHit.CIRCLE_4_5,
									HipHit.CIRCLE_4_5,
									HipHit.CIRCLE_4_5,
									HipHit.CIRCLE_3,
									HipHit.CIRCLE_3,
									HipHit.CIRCLE_3,
									HipHit.CIRCLE_3,
									HipHit.CIRCLE_1_5,
									HipHit.CIRCLE_1_5,
									HipHit.CIRCLE_1_5,
									HipHit.CIRCLE_1_5,
									HipHit.CIRCLE_12,
									HipHit.CIRCLE_12
								};

						} else if (line.hitType == HipHit.CIRCLE_9_12 ) {
							circleList = new HipHit[] {
								HipHit.CIRCLE_12,
								HipHit.CIRCLE_12,
								HipHit.CIRCLE_1_5,
								HipHit.CIRCLE_1_5,
								HipHit.CIRCLE_1_5,
								HipHit.CIRCLE_1_5,
								HipHit.CIRCLE_3,
								HipHit.CIRCLE_3,
								HipHit.CIRCLE_3,
								HipHit.CIRCLE_3,
								HipHit.CIRCLE_4_5,
								HipHit.CIRCLE_4_5,
								HipHit.CIRCLE_4_5,
								HipHit.CIRCLE_4_5,
								HipHit.CIRCLE_6,
								HipHit.CIRCLE_6,
								HipHit.CIRCLE_6,
								HipHit.CIRCLE_6,
								HipHit.CIRCLE_7_5,
								HipHit.CIRCLE_7_5,
								HipHit.CIRCLE_7_5,
								HipHit.CIRCLE_7_5,
								HipHit.CIRCLE_9,
								HipHit.CIRCLE_9,
								HipHit.CIRCLE_9,
								HipHit.CIRCLE_9,
								HipHit.CIRCLE_10_5,
								HipHit.CIRCLE_10_5,
								HipHit.CIRCLE_10_5,
								HipHit.CIRCLE_10_5,
								HipHit.CIRCLE_12,
								HipHit.CIRCLE_12
							};

						} 
							
						else if (line.hitType == HipHit.CIRCLE_6_3) {
							circleList = new HipHit[] {
								
								HipHit.CIRCLE_3,
								HipHit.CIRCLE_3,
								HipHit.CIRCLE_1_5,
								HipHit.CIRCLE_1_5,
								HipHit.CIRCLE_1_5,
								HipHit.CIRCLE_1_5,
								HipHit.CIRCLE_12,
								HipHit.CIRCLE_12,
								HipHit.CIRCLE_12,
								HipHit.CIRCLE_12,
								HipHit.CIRCLE_10_5,
								HipHit.CIRCLE_10_5,
								HipHit.CIRCLE_10_5,
								HipHit.CIRCLE_10_5,
								HipHit.CIRCLE_9,
								HipHit.CIRCLE_9,
								HipHit.CIRCLE_9,
								HipHit.CIRCLE_9,
								HipHit.CIRCLE_7_5,
								HipHit.CIRCLE_7_5,
								HipHit.CIRCLE_7_5,
								HipHit.CIRCLE_7_5,
								HipHit.CIRCLE_6,
								HipHit.CIRCLE_6,
								HipHit.CIRCLE_6,
								HipHit.CIRCLE_6,
								HipHit.CIRCLE_4_5,
								HipHit.CIRCLE_4_5,
								HipHit.CIRCLE_4_5,
								HipHit.CIRCLE_4_5,
								HipHit.CIRCLE_3,
								HipHit.CIRCLE_3
							};

						}

						else {
							//Debug.Log ("What? " + line.hitType);
						}

						bool useNegativeForOrbSpread = line.hitType == HipHit.CIRCLE_12_9 || line.hitType == HipHit.CIRCLE_3_6 || line.hitType == HipHit.CIRCLE_9_6 || line.hitType == HipHit.CIRCLE_6_9;
						bool spreadOrbsAcrossY = line.hitType == HipHit.CIRCLE_9_12 || line.hitType == HipHit.CIRCLE_3_12 || line.hitType == HipHit.CIRCLE_3_6 || line.hitType == HipHit.CIRCLE_9_6;
						bool fromDownOrLeft = line.hitType == HipHit.CIRCLE_9_12 || line.hitType == HipHit.CIRCLE_9_6 || line.hitType == HipHit.CIRCLE_6_3 || line.hitType == HipHit.CIRCLE_6_9;

						//Debug.Log (line.hitType);

						// FFD_UPGRADE
						// this code instantiates the animation rig and rotates the gimble "bones" and sets them in parentage, placement, and default rotation.
						GameObject newRig = Instantiate (circleStepRig) as GameObject;
						newRig.transform.parent = orbFolder.transform;
						newRig.transform.position = Vector3.zero;
						newRig.transform.rotation = Quaternion.identity;

						// these are for rotating the three gimbles for each layer of the effects.
						Vector3 a_r = Vector3.zero; // this is for the inital rotation based on the circle variable.
						Vector3 b_r = Vector3.zero; // this is used for the rotation based on orient setting.
						Vector3 c_r = Vector3.zero; // this is either 0 or 180(-180) in order to twist the ball set to the left or right of center point.

						// now we load the above variables with the needed rotation data based on circle.
						if (line.hitType == HipHit.CIRCLE_12_9) {
							a_r.z = 0;
							c_r.y = 0;
						} else if (line.hitType == HipHit.CIRCLE_12_3) {
							a_r.z = 0;
							c_r.y = -180;
						} else if (line.hitType == HipHit.CIRCLE_3_12) {
							a_r.z = -90;
							c_r.y = 0;
						} else if (line.hitType == HipHit.CIRCLE_3_6) {
							a_r.z = -90;
							c_r.y = -180;
						} else if (line.hitType == HipHit.CIRCLE_6_3) {
							a_r.z = 180;
							c_r.y = 0;
						} else if (line.hitType == HipHit.CIRCLE_6_9) {
							a_r.z = 180;
							c_r.y = -180;
						} else if (line.hitType == HipHit.CIRCLE_9_6) {
							a_r.z = 90;
							c_r.y = 0;
						} else if (line.hitType == HipHit.CIRCLE_9_12) {
							a_r.z = 90;
							c_r.y = -180;
						}

						// and now we load them based on orient.
						if (line.orientation == Orientation.ORIENT_12) {
							b_r.z = 0;
						} else if (line.orientation == Orientation.ORIENT_1_5) {
							b_r.z = -45;
						} else if (line.orientation == Orientation.ORIENT_3) {
							b_r.z = -90;
						} else if (line.orientation == Orientation.ORIENT_4_5) {
							b_r.z = -135;
						} else if (line.orientation == Orientation.ORIENT_6) {
							b_r.z = 180;
						} else if (line.orientation == Orientation.ORIENT_7_5) {
							b_r.z = 135;
						} else if (line.orientation == Orientation.ORIENT_9) {
							b_r.z = 90;
						} else if (line.orientation == Orientation.ORIENT_10_5) {
							b_r.z = 45;
						}

						// load the above rotations into the "Bone" gimbles.
						RigControl newRigLink = newRig.GetComponent<RigControl> ();

						// FFD added code nov 19 2016
						// FFD added code nov 26 2016
						// okay, in the animation, we have the following times:
						/// time from outside to edge : 3.95000~
						/// time from edge to last ball impacting: 0.58333~
						/// total time of animation: 4.53333~

						// FFD: this is where the 8 balls are rezzed in.  We need to already have the rig in place, rotated and ready...
						int numballs = 32;
						if (line.circleType == CircleType.H)
							numballs = 16;
						else if (line.circleType == CircleType.Q)
							numballs = 8;

						float newspeed = ((2.6f/32)*numballs) / Mathf.Abs (line.timeImpact - line.timeEndImpact);
						//Debug.Log ("Speed: " + line.timeImpact + " / " + line.timeEndImpact + " = " + newspeed);
						newRigLink.Run (newspeed); // start the animation.  We can do this now, since it won't actually start until the end of the frame.

						// three rotational gimbles are set.
						newRigLink.Gimble_A.localEulerAngles = a_r;
						newRigLink.Gimble_B.localEulerAngles = b_r;
						newRigLink.Gimble_C.localEulerAngles = c_r;
						//FFD_UPGRADE_END

						for (int i = 1; i <= numballs; i++) {
							GameObject newObj = Instantiate (circleHitPrefab) as GameObject;

							newObj.name = "circleHit" + i;
							float start_x_pos = spreadOrbsAcrossY ? startDistance : ((i * 2) - 1) * hitOrbCircumference / 32.0f;
							float start_y_pos = spreadOrbsAcrossY ? ((i * 2) - 1) * hitOrbCircumference / 32.0f : startDistance;

							float ease_x_pos = spreadOrbsAcrossY ? hitOrbRadius : ((i * 2) - 1) * hitOrbCircumference / 32.0f;
							float ease_y_pos = spreadOrbsAcrossY ? ((i * 2) - 1) * hitOrbCircumference / 32.0f : hitOrbRadius;


							if (useNegativeForOrbSpread) {
								if (spreadOrbsAcrossY) {
									start_y_pos = -start_y_pos;
									ease_y_pos = -ease_y_pos;
								} else {
									start_x_pos = -start_x_pos;
									ease_x_pos = -ease_x_pos;
								}
							}

							if (fromDownOrLeft) {
								if (spreadOrbsAcrossY) {
									start_x_pos = -start_x_pos;
									ease_x_pos = -ease_x_pos;
								} else {
									start_y_pos = -start_y_pos;
									ease_y_pos = -ease_y_pos;
								}
							}

							newObj.transform.position = new Vector3 (start_x_pos, start_y_pos, newObj.transform.position.z);

							newObj.transform.parent = orbFolder.transform;
							CircleOrb newOrb = newObj.GetComponent<CircleOrb> ();

							//

							if (line.players.PlayersLine == "1") {
								newOrb.player = 0;

							} else if (line.players.PlayersLine == "2") {
								newOrb.player = 1;
							
							} else if (line.players.PlayersLine == "12") {
								newOrb.player = 12;

							} else if (line.players.PlayersLine == "21") {
								newOrb.player = 21;

							}



							if (newOrb != null) {
								// FFD_UPGRADE
								newOrb.anchor = newRigLink.bones [i - 1]; // loads the bone the ball should follow into the ball.
								newRigLink.attached.Add (newOrb.transform); // stores the ball into the animation rig so it can keep track of them existing.  Or not...
								newOrb.orientation = line.orientation; // this is the variable that needs ot be 
								// FFD_UPGRADE_END
                            
								//newOrb.hitType = line.hitType;
								//newOrb.hitType = Convert.ChangeType(directionList [i - 1], HipHit);
								//newOrb.hitTypePlus = directionList[i - 1];
								newOrb.hitType = circleList[i - 1];
								Debug.Log ("circle hit type in orb manager " + line.hitType + " , i =  " +i+ "   ,   " + newOrb.hitType);
								newOrb.back = line.back;
								newOrb.strength = line.strength;
								newOrb.timeImpact = line.timeImpact;
								newOrb.timeEndImpact = line.timeEndImpact;
								newOrb.score = line.score;
								newOrb.orbManager = this;
								newOrb.transform.parent = orbFolder.transform;
								//newOrb.circleDirection = directionList [i - 1];

								newOrb.fromDownOrLeft = fromDownOrLeft;
								newOrb.spreadOrbsAcrossY = spreadOrbsAcrossY;
								newOrb.easePos = new Vector2 (ease_x_pos, ease_y_pos);

								float moveTime = line.timeTillImpact + (line.timeTillImpact / (hitOrbRadius + startDistance));

								newOrb.speed = 5.0f / moveTime;

								iTween.ValueTo (newOrb.gameObject, new Hashtable () {
									{ "name", "orbIncoming" },
									{ "from", 0.0f },
									{ "to", 1.0f },
									{ "onupdate", "calculateCirclePosition" }, {"time", line.timeTillImpact + (line.timeTillImpact / (hitOrbRadius + startDistance))},
                                    {"easeType", "linear"},
                                });
	                        }
	                    }
	                }
	            }
			}
        }

    }

	public void didFail (int playerID)
    {
		if(playerID == 0)
		{
			iTween.ShakePosition (scoreTextPlayer1.gameObject,
				new Hashtable () {
					{"name", "failShake"},
					{"x", 5.0f},
					{"y", 5.0f},
					{"time", 0.3f},
				});
		}
		else if(playerID == 1)
		{
			iTween.ShakePosition (scoreTextPlayer2.gameObject,
				new Hashtable () {
					{"name", "failShake"},
					{"x", 5.0f},
					{"y", 5.0f},
					{"time", 0.3f},
				});
		}

    }

	public void AddScore (float score, int playerID)
    {
		if(playerID == 0)
		{
			totalScorePlayer1 += score;
			scoreTextPlayer1.text = totalScorePlayer1.ToString ("0");
		}
		else if(playerID == 1)
		{
			totalScorePlayer2 += score;
			scoreTextPlayer2.text = totalScorePlayer2.ToString ("0");
		}
       
    }

    public void BtnBack_Active(){
        EndSession();
    }

    public void EndSession()
    {
        //Debug.Log("<color=yellow>ENDING SESSION.</color>");
        //isSessionEnding = true;
        musicSource.Stop ();
		Debug.Log ("end session music stopped");

		//18-05-17
//		linkManager.ToggleSensor(false);
		linkManager.ShowDeviceList(false);
		Debug.Log ("stopped showing device list");
        linkManager.SaveLogData (musicSource.clip.name);

//        linkManager.LogDataNatively();
		linkManager.snsrManager.playersDevices.Clear ();
        endPanel.SetActive(true);
        SceneManager.LoadScene(loadScene);
        return;
    }

    //CAUTION: Won't generate logs properly, don't use while debugging.
    public void LoadScene(string _loadScene)
    {
        loadingScr.GetComponent<LoadingManager>().sceneToLoad = _loadScene;
        loadingScr.SetActive(true);
    }
}

