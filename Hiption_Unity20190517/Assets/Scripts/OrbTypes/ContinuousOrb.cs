using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class ContinuousOrb : MonoBehaviour
{
    public HipHit hitType;
	public HipHit hitTypePlus;
    public float timeImpact;
    public float timeEndImpact;
    public ushort back;
    public float strength;
    public float score;
	public Orientation orientation;
    bool inDetectionOrb = false;
    
    public OrbManager orbManager;
    
    public ParticleSystem orbParticles;
    
    public Rigidbody2D rigidBody;
    
    uint start_i = 0;
    
    bool isDoingMove = false;

	public int player;

    Orientation last_orient;

    // Use this for initialization
    public virtual void Start ()
    {
        this.rigidBody = GetComponent<Rigidbody2D> ();
        
		GetComponent<TrailRenderer> ().material.color = Color.red;

        if (hitType == HipHit.CONT12 || hitType == HipHit.CONT6) {
			gameObject.GetComponentInChildren<AuraControl> ().AuraStart ();
            //GetComponent<MeshRenderer> ().material.color = Color.red;
            GetComponent<TrailRenderer> ().material.color = Color.red;
            //orbParticles.startColor = Color.red;
        }
        
		////added stuff being tested from here

		float dotRotation = 0;

		switch (orientation) {
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
		Transform hotRotationContainer = transform.Find ("HotRotationContainer");
		if (hotRotationContainer != null)
			hotRotationContainer.eulerAngles = new Vector3 (0, 0, dotRotation);
		//transform.Find ("HotRotationContainer").transform.eulerAngles = new Vector3 (0, 0, dotRotation);

		////added stuff being tested to here


        /*
        //if (hitType == HipHit.HIT3) {
          //  orbParticles.transform.eulerAngles = new Vector3 (0, 90, 0);
        //} else if (hitType == HipHit.HITUP) {
          //  orbParticles.transform.eulerAngles = new Vector3 (-90, 0, 0);
        //} else if (hitType == HipHit.HITDOWN) {
          //  orbParticles.transform.eulerAngles = new Vector3 (90, 0, 0);
        //} else if (hitType == HipHit.HIT9) {
          //  orbParticles.transform.eulerAngles = new Vector3 (0, -90, 0);
        }*/
    }
    
public virtual float isHitting ()
    {
    //Debug.Log("<color=orange>CONTINUOUS HIT: "+orientation.ToString()+"</color>");
	return orbManager.linkManager.IsHit (player, hitType, start_i, strength,this.orientation,last_orient, score);
    }
    
    // Update is called once per frame
    void Update ()
    {
        if (orbManager.isSessionEnding)
            return;
        if (inDetectionOrb && !isDoingMove) 
        {
		// // // // // // // // // // // 18-05-17 
//            start_i = orbManager.linkManager.GetStart (); // accelDataCounter should Return

//		start_i = orbManager.linkManager.snsrManager.playersDevices [0].accelDataCounter;
            
            //Debug.Log("Got Start " + start_i);
            
            isDoingMove = true;
            
            iTween.Stop (gameObject);
            
            iTween.ValueTo (gameObject, new Hashtable () {
                {"name", "checkContinuousMove"},
                {"from", 0.0f},
                {"to", 1.0f},
                {"onupdate", "checkContinuous"},
                {"time", (timeEndImpact - timeImpact)},
                {"oncomplete", "finishedMove"},
                {"oncompletetarget", gameObject},
            });
        }
    }
    
    float lastProgress = 0.0f;
    
    void checkContinuous (float progress)
    {
        if (isHitting ()>0.0f) {
		orbManager.AddScore (((progress - lastProgress) * score), player);
        }
        lastProgress = progress;
        /* else {
            orbManager.didFail ();
            Destroy (gameObject);
        }*/
    }
    
    void finishedMove ()
    {
        if(isHitting()>0.0f) {
		orbManager.AddScore (((1.0f - lastProgress) * score), player);
            orbParticles.Play ();
        }

        GetComponent<MeshRenderer> ().enabled = false;

		// FFD added code nov 19 2016
		gameObject.GetComponentInChildren<AuraControl> ().AuraStop ();

        inDetectionOrb = false;
        iTween.Stop (gameObject);
        iTween.ValueTo (gameObject,
            new Hashtable () {
            {"name", "destroyCountdown"},
            {"from", 0.0f},
            {"to", 1.0f},
            {"onupdate", "dummyUpdate"},
            {"onupdatetarget", gameObject},
            {"oncomplete", "destroyOrb"},
            {"oncompletetarget", gameObject},
            {"time", orbParticles.duration},
        });
    }

    
    void destroyOrb ()
    {
        Destroy (gameObject);
    }
    
    void OnTriggerEnter2D (Collider2D other)
    {
        if (other.CompareTag ("HitOrb")) {
            onEnterDetection ();
        } else if (other.CompareTag ("FailOrb")) {
            onEnterFail ();
        }
    }
    
    void dummyUpdate ()
    {
        
    }
    
    void onEnterDetection ()
    {
    //Set the orientations.

    inDetectionOrb = true;

    //Set the orientations.
    if (orbManager.lastOrientation == null)
    {
        //Debug.Log("<color=brown>Last orientation null</color>");
        orbManager.lastOrientation = this.orientation;
        last_orient = orbManager.lastOrientation;
        return;
    }

    if (orbManager.lastOrientation != null)
    {
        //Debug.Log("<color=brown>Last orientation !null</color>");
        last_orient = orbManager.lastOrientation;
        orbManager.lastOrientation = this.orientation;
        /*
        if (orbManager.lastOrientation == this.orientation.ToString())
        {
            last_orient = orbManager.lastOrientation;
            Debug.Log("<color=orange>same orientation</orange>");
        }
        else
        {
            last_orient = orbManager.lastOrientation;
            orbManager.lastOrientation = this.orientation.ToString();
        }
        */
    }

    }
    
    void onEnterFail ()
    { 
	orbManager.didFail (player);
        Destroy (gameObject);
    }
}
