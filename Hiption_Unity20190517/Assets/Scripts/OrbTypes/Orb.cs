using UnityEngine;
using System.Collections;

public class Orb : MonoBehaviour
{
    public HipHit hitType;
	public HipHit mirrorHitType;
	public Orientation orientation;
    public float timeImpact;
    public float timeEndImpact;
    public ushort back;
    public float strength;
    public float score;

	public ParticleSystem aura;

    bool inDetectionOrb = false;

    bool onBegin=false;

    public OrbManager orbManager;
    
    public ParticleSystem orbParticles;

    public Orientation last_orient;

	public Orientation mirrorOrientation;

	public int player;

   // public Rigidbody2D rigidBody;

    // Use this for initialization

    void OnEnable() {
        //Testing.
        //Invoke("onBeginGame", 1.5f);
        //Invoke("onEnterDetection", 1.5f);
    }

    public virtual void Start ()
    {
        //Debug.Log("<color=orange>"+orientation.ToString()+"</color>");

        //Debug.Log("Orb:GameobjectName:"+this.gameObject.name);
     //   this.rigidBody = GetComponent<Rigidbody2D> ();
        
        if (hitType == HipHit.HIT12 || hitType == HipHit.HIT6) {
			gameObject.GetComponentInChildren<AuraControl> ().AuraStart ();
            //GetComponent<MeshRenderer> ().material.color = Color.red;
            //orbParticles.startColor = Color.red;
        }

		//GameObject rotationContainer = transform.Find ("HotRotationContainer");
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

		float dotRotationMirror = 0;
	
		if (player == 21) {
			dotRotationMirror = 180;
		}
			
		Transform hotRotationContainer = transform.Find ("HotRotationContainer");
		if (hotRotationContainer != null)
			hotRotationContainer.eulerAngles = new Vector3 (0, 0, dotRotation);

		Transform hotRotationContainer2 = transform.Find ("HotRotationContainer2");
		if (hotRotationContainer2 != null)
			hotRotationContainer2.eulerAngles = new Vector3 (0, 0, dotRotation + dotRotationMirror);

		//Debug.Log ("dot rotation  =  " + dotRotation);

    }
    
	public virtual float isHitting ()
    {
		float result;

		if (player == 0 || player == 1) {

			result = orbManager.linkManager.IsHit (player, hitType, back, strength, this.orientation, last_orient, score);
		}
			
		else if (player == 12 ) {

			float resultZero = orbManager.linkManager.IsHit (0, hitType, back, strength, this.orientation, last_orient, score);
			float resultOne = orbManager.linkManager.IsHit (1, hitType, back, strength, this.orientation, last_orient, score);

			if ((resultOne >0.0f) && (resultZero >0.0f)) {
				result = resultZero + resultOne;
			}
			else {
				result = 0.0f;
			}
		}

		else if (player == 21) {

			if (this.orientation == Orientation.ORIENT_12) {
				mirrorOrientation = Orientation.ORIENT_6;
			}
			else if (this.orientation == Orientation.ORIENT_1_5) {
				mirrorOrientation = Orientation.ORIENT_7_5;
			}
			else if (this.orientation == Orientation.ORIENT_3) {
				mirrorOrientation = Orientation.ORIENT_9;
			}
			else if (this.orientation == Orientation.ORIENT_4_5) {
				mirrorOrientation = Orientation.ORIENT_10_5;
			}
			else if (this.orientation == Orientation.ORIENT_6) {
				mirrorOrientation = Orientation.ORIENT_12;
			}
			else if (this.orientation == Orientation.ORIENT_7_5) {
				mirrorOrientation = Orientation.ORIENT_1_5;
			}
			else if (this.orientation == Orientation.ORIENT_9) {
				mirrorOrientation = Orientation.ORIENT_3;
			}
			else  {
				mirrorOrientation = Orientation.ORIENT_4_5;
			}

			if (hitType ==  HipHit.HIT12) {
				mirrorHitType = HipHit.HIT6;
			}
			else if (hitType ==  HipHit.HIT6) {
				mirrorHitType = HipHit.HIT12;
			}
			else if (hitType ==  HipHit.HIT3) {
				mirrorHitType = HipHit.HIT9;
			}
			else if (hitType ==  HipHit.HIT9) {
				mirrorHitType = HipHit.HIT3;
			}
			else if (hitType ==  HipHit.HITUP) {
				mirrorHitType = HipHit.HITUP;
			}
			else  {
				mirrorHitType = HipHit.HITDOWN;
			}

			float resultZero = orbManager.linkManager.IsHit (0, hitType, back, strength, this.orientation, last_orient, score);
			float resultOne = orbManager.linkManager.IsHit (1, mirrorHitType, back, strength, mirrorOrientation, last_orient, score);

			if ((resultOne >0.0f) && (resultZero >0.0f)) {
				result = resultZero + resultOne;
			}
			else {
				result = 0.0f;
			}
		}
		else {
			result = 0.0f;
		}

		Debug.Log ("printing result " + result);

        return result;
    }
	
    // Update is called once per frame
	public virtual void Update ()
    {
		//Debug.Log("<color=cyan>BEGIN HITTING</color>");
        if (inDetectionOrb) 
        {
            if (orbManager.isSessionEnding)
                return;
            
			if (isHitting()>0.0f) 
		{
			//Debug.Log("Update:isHitting:true:"+gameObject.name);
				orbManager.AddScore (isHitting(),player);
			GetComponent<MeshRenderer> ().enabled = false;

			GetComponent<CircleCollider2D> ().enabled = false;

			// FFD added code nov 19 2016
			AuraControl ac = gameObject.GetComponentInChildren<AuraControl> ();
			if (ac != null)
				ac.AuraStop ();

			//ParticleSystem.MainModule pm = gameObject.GetComponentInChildren<ParticleSystem.MainModule>;
			//pm.maxParticles = 50;

			Transform child = transform.Find ("VisibleSphere");
				if (child != null) {
					child.GetComponent<MeshRenderer> ().enabled = false;
					Debug.Log ("visible Sphere mesh turned off");
				}
			Transform hotRotationContainer = transform.Find ("HotRotationContainer");
			if (hotRotationContainer != null)
				hotRotationContainer.Find ("HitRotationPointer").GetComponent<MeshRenderer> ().enabled = false;
			//this.transform.Find ("HotRotationContainer").transform.Find ("HitRotationPointer").GetComponent<MeshRenderer> ().enabled = false;

			Transform hotRotationContainer2 = transform.Find ("HotRotationContainer2");
			if (hotRotationContainer2 != null)
				hotRotationContainer2.Find ("HitRotationPointer2").GetComponent<MeshRenderer> ().enabled = false;



			inDetectionOrb = false;
			iTween.Stop (gameObject);
			
			ParticleSystem ps = orbParticles;
				ps.GetComponent<ParticleSystem>().maxParticles = Mathf.RoundToInt (isHitting () * 5.0f);

				//ps.main.maxParticles = Mathf.RoundToInt (isHitting () * 100.0f);
			orbParticles = ps;
				//int particlesIntensity = Mathf.RoundToInt(isHitting() * 100.0f);
			//orbParticles.main.maxParticles = particlesIntensity;
	
			orbParticles.Play ();
			iTween.ValueTo (gameObject,
	                new Hashtable () 
	                    {
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
	    else
	    {
	        //Debug.Log("Update:isHitting:false");
	    }
	}
    }
    
    void destroyOrb ()
    {
        Destroy (gameObject);
    }

	//Ontriggerenter2d is a unity event system, hence not defined earlier, note there are in fact 2d, but this is ok

    void OnTriggerEnter2D (Collider2D other)
    {
        if (other.CompareTag ("HitOrb")) {
			Debug.Log ("OnTriggerEnter2D: "+other.gameObject.name+" -> "+gameObject.name);
            onEnterDetection ();
        } else if (other.CompareTag ("FailOrb")) {
            onEnterFail ();
        }
    }
    
    void dummyUpdate ()
    {
           
    }

    //TEST CODE
    void onBeginGame ()
    {
        //Debug.Log("<color=cyan>BEGIN</color>");
        //Debug.Log("<color=cyan>Orb:GameobjectName:"+this.gameObject.name+"</color>");
        onBegin = true;

        //Debug.Break();
    }

    //Set the orientation on collision.
    void onEnterDetection ()
    {
		//Debug.Log("<color=brown>Enter Detection FFD: "+gameObject.name+"</color>");
        inDetectionOrb = true;

        if (orbManager.lastOrientation == null)
        {
            //Debug.Log("<color=brown>Last orientation null</color>");
            orbManager.lastOrientation = this.orientation;
            last_orient = orbManager.lastOrientation;
            return;
        }

        if (orbManager.lastOrientation != null)
        {
            last_orient = orbManager.lastOrientation;
            orbManager.lastOrientation = this.orientation;
        }
    }

    void onEnterFail ()
    {
		orbManager.didFail (player);
		Debug.Log ("Orb onEnterFail");

		Destroy (gameObject);
    }

	public void SetSize(float _size)
	{
		Transform child = transform.Find ("VisibleSphere");
		if (child != null)
			child.localScale = Vector3.one * _size;
	}
}
