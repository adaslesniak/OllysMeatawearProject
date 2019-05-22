using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class StillOrb : MonoBehaviour
{
    public HipHit hitType;
	public HipHit hitTypePlus;
    public float timeImpact;
    public float timeEndImpact;
    public ushort back;
	public float strength;
    public float score;
	public Orientation orientation;
	public Orientation last_orient;

	bool inDetectionOrb = false;
    
    public OrbManager orbManager;
    
    public ParticleSystem orbParticles;
    
    public Rigidbody2D rigidBody;
    
    bool isDoingMove = false;
	public int player;
    
    // Use this for initialization
    public virtual void Start ()
    {
        this.rigidBody = GetComponent<Rigidbody2D> ();


		//GetComponent<MeshRenderer> ().material.color = Color.grey;
		//GetComponent<TrailRenderer> ().material.color = Color.grey;
		//orbParticles.startColor = Color.grey;

		//Debug.Log ("player in Still is " + player);

		if (player == 0){
			GetComponent<MeshRenderer> ().material.color = new Color (0.0f, 0.81176f, 1.0f);
			GetComponent<TrailRenderer> ().material.color = new Color (0.0f, 0.81176f, 1.0f);
			orbParticles.startColor = new Color (0.0f, 0.81176f, 1.0f);
			}
		if (player == 1){
			GetComponent<MeshRenderer> ().material.color = new Color (1.0f, 0.0f, 0.0f);
			GetComponent<TrailRenderer> ().material.color = new Color (1.0f, 0.0f, 0.0f);
			orbParticles.startColor = new Color (1.0f, 0.0f, 0.0f);
		}
		if (player == 12 || player == 21 ){
			GetComponent<MeshRenderer> ().material.color = new Color (1.0f, 1.0f, 1.0f);
			GetComponent<TrailRenderer> ().material.color = new Color (1.0f, 1.0f, 1.0f);
			orbParticles.startColor = new Color (1.0f, 1.0f, 1.0f);
		}

    }
    
	public virtual float isHitting ()
    {

		float result;

		if (player == 0 || player == 1) {


			result = orbManager.linkManager.IsHit (player, hitType, back, strength, this.orientation, last_orient, score);


		} else if (player == 12 || player == 21) {
			
			float resultZero = orbManager.linkManager.IsHit (0, hitType, back, strength, this.orientation, last_orient,score);
			float resultOne = orbManager.linkManager.IsHit (1, hitType, back, strength, this.orientation, last_orient, score);

			if ((resultOne >0.0f) && (resultZero >0.0f)) {
				result = resultOne + resultZero;
			} else {
				result = 0.0f;
			}

		} else {
			result =  0.0f;
		}
		//bool result = orbManager.linkManager.IsHit (player,hitType, back, strength, this.orientation, last_orient);
		return result;
		//return false;
    }
    

	float lastProgress = 0.0f;

	float startCount = 0;
	float startProgress = 0;


    // Update is called once per frame
    void Update ()
    {
		//Debug.Log ("still update");

		if (inDetectionOrb && !isDoingMove) {
			isDoingMove = true;
            
			iTween.Stop (gameObject);
            
            iTween.ValueTo (gameObject, new Hashtable () {
                {"name", "checkStillMove"},
                {"from", 0.0f},
                {"to", 1.0f},
                {"time", (timeEndImpact - timeImpact)},
                {"onupdate", "checkStill"},
                {"oncomplete", "finishedMove"},
                {"oncompletetarget", gameObject},
            });
        }

		if (inDetectionOrb && isDoingMove) {

			if (isHitting ()>0.0f) {
				Debug.Log ("still is hitting check");
				orbManager.AddScore (score/30.0f, player);
				orbParticles.Play ();
			}
		}

    }
    
    
    
    void finishedMove ()
    {
		//orbManager.AddScore ((1.0f - lastProgress) * score, player);
        GetComponent<MeshRenderer> ().enabled = false;
        inDetectionOrb = false;
        iTween.Stop (gameObject);
        orbParticles.Play ();
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
		//Debug.Log("onEnterDetection");

        inDetectionOrb = true;
    }
    
    void onEnterFail ()
    { 
		//Debug.Log("onEnter Fail");

		orbManager.didFail (player);
        Destroy (gameObject);
    }
}
