//TODO: RCRDMGR: Bug fix.
using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using UnityEngine.SceneManagement;
using System.Collections.Generic;
using System;
using System.IO;

public class RecordManager : MonoBehaviour
{
    public AudioSource musicSource;
    int tempOrient = 0;

    const float LINE_DISTANCE = 80.0f;
    const float HOLD_TIME = 0.25f;
    
    public struct TouchData
    {
        public float startTime;
        public Vector2 startPos;
    };
    
    Dictionary<int, TouchData> startData = new Dictionary<int, TouchData> ();

    List<RhythmLine> lines;
    
    Vector2 central;

    public Camera viewCamera;
    public Text countText;
    public GameObject followPrefab;
    public GameObject chaserFolder;
    public string loadScene;

    enum Quadrant
    {
        TOP,
        LEFT,
        BOTTOM,
        RIGHT,
        MIDDLE,
        INVALID,
    }

    PersistentRecordingData persistent;

    void OnDisable()
    {
        Debug.Log("Disabled record manager");

        TouchManager.OnTouchDown -= onTouchDown;
        TouchManager.OnTouchUp -= onTouchUp;
        TouchManager.OnTouchMove -= onTouchMoved;
    }
        
    void Start ()
    {
        Screen.sleepTimeout = SleepTimeout.NeverSleep;
        GameObject tmpPersistent = GameObject.Find ("PersistentRecordingData");

        if (tmpPersistent == null) {
            Debug.LogWarning ("Could not find persistent data object!");
            return;
        }

        persistent = tmpPersistent.GetComponent<PersistentRecordingData> ();
        
        musicSource.clip = Resources.Load<AudioClip> ("Tracks/" + persistent.trackName);

        lines = new List<RhythmLine> ();
        central = new Vector2 (viewCamera.pixelWidth / 2.0f, viewCamera.pixelHeight / 2.0f);

        TouchManager.OnTouchDown += onTouchDown;
        TouchManager.OnTouchUp += onTouchUp;
        TouchManager.OnTouchMove += onTouchMoved;

        musicSource.PlayDelayed (5);

        Debug.Log ("Playing: " + musicSource.clip.name);
    }
        
    void RecordStart (int fingerId, float time, Vector2 pos)
    {
        startData.Add (fingerId, new TouchData () { startPos = pos, startTime = time });
    }
    
    void RecordEnd (int fingerId)
    {
        startData.Remove (fingerId);
    }

    void Update ()
    {        
        if (musicSource.time >= musicSource.clip.length || (!musicSource.isPlaying && Time.time > musicSource.clip.length)) {
            // Music has finished
            musicSource.Stop ();
            SaveCSV ();
            Application.LoadLevel ("MainMenu");
            return;
        }

#if UNITY_EDITOR
        if (musicSource.isPlaying && musicSource.time > 0.0f) 
        {

            if (Input.GetMouseButtonDown (0)) 
            {
                Debug.Log("Mouse down");
                float startTime = musicSource.time;
                Vector2 startPos = new Vector2 (Input.mousePosition.x, Input.mousePosition.y) - central;
                RecordStart (0, startTime, startPos);
                touchStarted (0, Input.mousePosition);
            } 
            else 
                if (Input.GetMouseButtonUp (0) && startData.ContainsKey (0)) 
                {
                    Debug.Log("Mouse up");
                    Vector2 relative = new Vector2 (Input.mousePosition.x, Input.mousePosition.y) - central;
                    touchEnded (0, Input.mousePosition);
                    CalculateTouchAndSave (relative, startData [0]);
                    RecordEnd (0);
                }
        }
#endif

        if (Input.GetMouseButton (0) && startData.ContainsKey (0)) {
            #if UNITY_EDITOR
            touchMoved (0, Input.mousePosition);
            #endif
        
            if (musicSource.time - startData [0].startTime > HOLD_TIME) {
                countText.text = (musicSource.time - startData [0].startTime).ToString ("F");
            }
        }
    }
    
    Dictionary<int, GameObject> fingerFollowers = new Dictionary<int, GameObject> ();
    
    void touchStarted (int fingerId, Vector2 pos)
    {
        if (fingerFollowers.ContainsKey (fingerId)) {
            Debug.Log ("Oh! This finger is already in the dictionary... (" + fingerId + ")");
        }
        countText.text = "";
        
        GameObject fingerFollower = Instantiate (followPrefab);
        fingerFollower.transform.SetParent (chaserFolder.transform);
        
        Vector3 newPos = viewCamera.ScreenToWorldPoint (pos);
        newPos.z = 0.0f;
        
        fingerFollower.transform.position = newPos;
        
        fingerFollowers.Add (fingerId, fingerFollower);
    }
    
    void touchMoved (int fingerId, Vector2 pos)
    {
        if (fingerFollowers.ContainsKey (fingerId)) {
            Vector3 newPos = viewCamera.ScreenToWorldPoint (pos);
            newPos.z = 0.0f;
            fingerFollowers [fingerId].transform.position = newPos;
        }
    }
    
    void touchEnded (int fingerId, Vector2 pos)
    {
        Vector3 newPos = viewCamera.ScreenToWorldPoint (pos);
        newPos.z = 0.0f;
        
        if (fingerFollowers.ContainsKey (fingerId)) {
            GameObject fingerFollower = fingerFollowers [fingerId];
            fingerFollower.transform.position = newPos;
            
            fingerFollowers.Remove (fingerId);
            
            iTween.FadeTo (fingerFollower,
                new Hashtable () {
                    {"a", 0.0f},
                    {"oncomplete", "DestroyFollower"},
                    {"oncompleteparams",  fingerFollower},
                    {"oncompletetarget", gameObject},
                    {"time", 1.0f},
                }
            );
        }
        
    }
    
    void DestroyFollower (GameObject follower)
    {
        Destroy (follower);
    }

    void SaveCSV ()
    {
        if (!Directory.Exists (Application.persistentDataPath + "/RhythmMaps/")) {
            Directory.CreateDirectory (Application.persistentDataPath + "/RhythmMaps/");
        }
        
        string clipName = musicSource.clip.name;
        
        Debug.Log ("Writing: " + Application.persistentDataPath + "/RhythmMaps/" + clipName + ".rmap");

        StreamWriter writer = new StreamWriter (Application.persistentDataPath + "/RhythmMaps/" + clipName + ".rmap");
    
        writer.WriteLine ("ver=1.2");

        foreach (RhythmLine line in lines) {
            writer.WriteLine (line.ToCSVLine ());
        }
        
        writer.Close ();
        
        Debug.Log ("<color=green>Saved.</color>");
        //Debug.Break();
    }

    void CalculateTouchAndSave (Vector2 end, TouchData touchData)
    {
        HipHit type = CalculateHitType (end, touchData);
        if (type == HipHit.INVALID)
            return;

        Debug.Log ("Detected Type: " + type.ToString ());

        float strength = 0;
        ushort back = 20;

        if (type.ToString ().StartsWith ("CONT"))
            back = 100;

        float distance = 0.0f;
        // Calculate Strength based on Distance.
        if (type.ToString ().StartsWith ("CIRC")) // Average for Circle
            distance = ((touchData.startPos.magnitude + end.magnitude) / 2);
        else
            distance = end.magnitude;

        strength = 5 * (distance / central.y);

        Debug.Log ("Strength Calculated as: " + strength);

        RhythmLine newLine = new RhythmLine ();
        newLine.hitType = type;
        newLine.back = back;
        newLine.strength = strength;
        newLine.timeImpact = touchData.startTime;
        newLine.timeEndImpact = musicSource.time;
        newLine.score = 20;
        newLine.timeTillImpact = 1.5f;
        //newLine.orientation = Orientation.ORIENT_12;

        newLine.orientation = (Orientation)tempOrient;

        //looping orientations for testing.
        tempOrient++;
        if (tempOrient > (int)Orientation.ORIENT_10_5)
            tempOrient = 0;
        //-TESTING -End

		newLine.players = new Players ();
		newLine.players.Init ();

		newLine.players.p1 = true ;

        lines.Add (newLine);
    }

    public void onTouchDown (Touch touch)
    {
        if (!musicSource.isPlaying)
            return;
        
        float touchStartTime = musicSource.time;
        Vector2 touchStartPos = touch.position - central;
        
        RecordStart (touch.fingerId, touchStartTime, touchStartPos);
        
        touchStarted (touch.fingerId, touch.position);

    }
    
    public void onTouchMoved (Touch touch)
    {
        if (!musicSource.isPlaying)
            return;
        
        touchMoved (touch.fingerId, touch.position);
    }

    public void onTouchUp (Touch touch)
    {
        if (!musicSource.isPlaying)
            return;

        if (!startData.ContainsKey (touch.fingerId)) {
            return;
        }

        Vector2 relative = touch.position - central;

        touchEnded (touch.fingerId, touch.position);
        
        TouchData touchData = startData [touch.fingerId];
        
        RecordEnd (touch.fingerId);

        CalculateTouchAndSave (relative, touchData);
    }

    Quadrant CalculateQuadrant (Vector2 pos)
    {
        if (pos.x.IsBetween (-LINE_DISTANCE, LINE_DISTANCE)) {
            if (pos.y > LINE_DISTANCE)
                return Quadrant.TOP;
            else if (pos.y < -LINE_DISTANCE)
                return Quadrant.BOTTOM;
            else
                return Quadrant.MIDDLE;
        } else if (pos.y.IsBetween (-LINE_DISTANCE, LINE_DISTANCE)) {
            if (pos.x > LINE_DISTANCE)
                return Quadrant.LEFT;
            else if (pos.x < -LINE_DISTANCE)
                return Quadrant.RIGHT;
            else
                return Quadrant.MIDDLE;
        }

        return Quadrant.INVALID;
    }

    public HipHit CalculateHitType (Vector2 end, TouchData touchData)
    {
        Quadrant startQuad = CalculateQuadrant (touchData.startPos);
        Quadrant endQuad = CalculateQuadrant (end);
        float timeDelta = musicSource.time - touchData.startTime;
        //Vector2 posDelta = touchStartPos - end;

        if (startQuad == endQuad) 
        { // Tap/Hold Hit        
            if (timeDelta > HOLD_TIME) 
            { // Hold Hit
                switch (startQuad) {
                    case Quadrant.TOP:
                        return HipHit.CONT12;

                    case Quadrant.LEFT:
                        return HipHit.CONT3;

                    case Quadrant.BOTTOM:
                        return HipHit.CONT6;

                    case Quadrant.RIGHT:
                        return HipHit.CONT9;
                        
                    case Quadrant.MIDDLE:
                        return HipHit.STILL;

                    default:
                        return HipHit.INVALID;
                }
            } else {
                switch (startQuad) {
                    case Quadrant.TOP:
                        return HipHit.HITUP;
                        
                    case Quadrant.LEFT:
                        return HipHit.HIT3;
                        
                    case Quadrant.BOTTOM:
                        return HipHit.HITDOWN;
                        
                    case Quadrant.RIGHT:
                        return HipHit.HIT9;
                        
                    default:
                        return HipHit.INVALID;
                }
            }
        } else {
            if (startQuad == Quadrant.TOP && endQuad == Quadrant.BOTTOM) { // Swipe Down
                if (timeDelta > HOLD_TIME) { // Continuous
                    return HipHit.CONT6;
                } else { // Tap
                    return HipHit.HIT6;
                }
            } else if (startQuad == Quadrant.BOTTOM && endQuad == Quadrant.TOP) { // Swipe Up
                if (timeDelta > HOLD_TIME) { // Continuous
                    return HipHit.CONT12;
                } else { // Tap
                    return HipHit.HIT12;
                }
            } else if (startQuad == Quadrant.TOP && endQuad == Quadrant.LEFT) { // Circle 12 to 3
                return HipHit.CIRCLE_12_3;
            } else if (startQuad == Quadrant.LEFT && endQuad == Quadrant.BOTTOM) { // Circle 3 to 6
                return HipHit.CIRCLE_3_6;
            } else if (startQuad == Quadrant.BOTTOM && endQuad == Quadrant.RIGHT) { // Circle 6 to 9
                return HipHit.CIRCLE_6_9;
            } else if (startQuad == Quadrant.RIGHT && endQuad == Quadrant.TOP) { // Circle 9 to 12
                return HipHit.CIRCLE_9_12;
            } else if (startQuad == Quadrant.TOP && endQuad == Quadrant.RIGHT) { // Circle 12 to 9
                return HipHit.CIRCLE_12_9;
            } else if (startQuad == Quadrant.RIGHT && endQuad == Quadrant.BOTTOM) { // Circle 9 to 6
                return HipHit.CIRCLE_9_6;
            } else if (startQuad == Quadrant.BOTTOM && endQuad == Quadrant.LEFT) { // Circle 6 to 3
                return HipHit.CIRCLE_6_3;
            } else if (startQuad == Quadrant.LEFT && endQuad == Quadrant.TOP) { // Circle 3 to 12
                return HipHit.CIRCLE_3_12;
            }
        }

        return HipHit.INVALID;
    }

    public float CalculateStrength (Vector2 point)
    {
        return 2.0f;
    }

    public void BtnBack_Active(){
        //Reset data
        Reset();
        SceneManager.LoadScene(loadScene);
    }

    void Reset(){
        lines.Clear();
        Debug.Log("<color=cyan>rhythm size: "+lines.Count.ToString()+"</color>");
    }
}
    