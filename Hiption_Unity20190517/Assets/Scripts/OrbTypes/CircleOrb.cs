using UnityEngine;
using System.Collections;


//note the orb is called here and only 'overrides' stuff from orb when necessary

public class CircleOrb : Orb
{
	public int playerCircle;

	public float speed = 0.0f;
    
    public bool verticalFirst = false;
    public CircleDirection circleDirection;
	public HipHit mirrorHitTypeCircle;
	//public Orientation mirrorOrientation;

    public Vector2 easePos;
    public Vector3 startPos;

    public bool spreadOrbsAcrossY = true;
    public bool fromDownOrLeft = false;   
	bool inDetectionOrb = false;

    float easeStartAt = 0.0f;

	public Transform anchor;

	public GameObject renderObject;
    
    public override void Start ()
    {
        base.Start ();

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


		/*GameObject hitPointer2 = GameObject.Find ("HitRotationPointer2"); 

		Renderer[] hitRotation2Render = hitPointer2.GetComponents<Renderer> ();//.material;

		for (int rot2loop = 0; rot2loop < hitRotation2Render.Length; rot2loop++) {
			hitRotation2Render [rot2loop].material.color = new Color (1.0f, 0.0f, 0.0f);
			hitRotation2Render [rot2loop].material.SetColor ("_EmissionColor", new Color (1.0f, 0.0f, 0.0f));

			//Debug.Log("rot2loop:   "  +rot2loop);

		}*/



		if (player == 0) {


			Renderer[] rends = GetComponentsInChildren<Renderer> ();

			for (int rendloop = 0; rendloop < rends.Length; rendloop++) { 

				rends [rendloop].material.color = new Color (0.0f, 0.81176f, 1.0f);
				rends [rendloop].material.SetColor ("_EmissionColor", new Color (0.0f, 0.586f, 0.948f));
			}
		} else if (player == 1) {

			Renderer[] rends = GetComponentsInChildren<Renderer> ();

			for (int rendloop = 0; rendloop < rends.Length; rendloop++) { 
				rends [rendloop].material.color = new Color (1.0f, 0.0f, 0.0f);
				rends [rendloop].material.SetColor ("_EmissionColor", new Color (0.7794118f, 0.5f, 0.03676471f));
			}

		} else if (player == 12) {


			Renderer[] rends = GetComponentsInChildren<Renderer> ();

			for (int rendloop = 0; rendloop < rends.Length; rendloop++) { 
				rends [rendloop].material.color = new Color (1.0f, 1.0f, 1.0f);
				rends [rendloop].material.SetColor ("_EmissionColor", new Color (1.0f, 1.0f, 1.0f));
			}

		} else if (player == 21) {

			Renderer[] rends = GetComponentsInChildren<Renderer> ();

			//GameObject hitPointer2 = GameObject.Find ("HitRotationPointer2"); 

			//Renderer[] hitRotation2Render = hitPointer2.GetComponents<Renderer> ();//.material;

			for (int rendloop = 0; rendloop < rends.Length; rendloop++) {
				rends [rendloop].material.color = new Color (1.0f, 1.0f, 1.0f);
				rends [rendloop].material.SetColor ("_EmissionColor", new Color (1.0f, 1.0f, 1.0f)); 

			}

			/*GameObject hitPointer2 = GameObject.Find ("HitRotationPointer2"); 

			Renderer[] hitRotation2Render = hitPointer2.GetComponents<Renderer> ();//.material;

			for (int rot2loop = 0; rot2loop < hitRotation2Render.Length; rot2loop++) {
				hitRotation2Render [rot2loop].material.color = new Color (1.0f, 0.0f, 0.0f);
				hitRotation2Render [rot2loop].material.SetColor ("_EmissionColor", new Color (1.0f, 0.0f, 0.0f));

				//Debug.Log("rot2loop:   "  +rot2loop);

			}
*/
		}

        startPos = transform.position;

		Transform hitPointer1 = transform.Find ("HotRotationContainer/HitRotationPointer");
		Transform hitPointer2 = transform.Find ("HotRotationContainer2/HitRotationPointer2"); 

		Renderer[] hitRotation2Render = hitPointer2.gameObject.GetComponents<Renderer> ();//.material;

		for (int rot2loop = 0; rot2loop < hitRotation2Render.Length; rot2loop++) {
			hitRotation2Render [rot2loop].material.color = new Color (1.0f, 0.0f, 0.0f);
			hitRotation2Render [rot2loop].material.SetColor ("_EmissionColor", new Color (1.0f, 0.0f, 0.0f));

		Debug.Log( gameObject.name +    ":   "  +hitRotation2Render.Length);
		//hitRotation2Render.Length
		}

		if (gameObject.name != "circleHit2") {
			hitPointer1.GetComponent<MeshRenderer> ().enabled = false;
			hitPointer2.GetComponent<MeshRenderer> ().enabled = false;
		}


    }

    public float curveFunction(float start, float end, float progress)
    {
        end -= start;
        return end * progress * progress * progress + start;
    }


	// FFD_UPDATE
	// 



	//public override void Update()
	//{
	//	base.Update ();

	//	if (anchor != null) // if the anchor is set, then follow it.
	//	{
	//		transform.position = anchor.position;
	//	}
	//}




	// FFD_UPDATE_END

    public void calculateCirclePosition(float progress) {

		// FFD_UPGRADE
		if (anchor == null) // if the anchor is not set, then use this code.
		{
			float moveIn = spreadOrbsAcrossY ? transform.position.y : transform.position.x;

			bool doEasing;
            //Debug.Log("<color=orange>"+orientation.ToString()+"</color>");
			if (!spreadOrbsAcrossY) {
				doEasing = (fromDownOrLeft ? transform.position.y >= easePos.y : transform.position.y <= easePos.y);

				if (doEasing && easeStartAt == 0.0f)
					easeStartAt = progress;
			} else {
				doEasing = (fromDownOrLeft ? transform.position.x >= easePos.x : transform.position.x <= easePos.x);

				if (doEasing && easeStartAt == 0.0f)
					easeStartAt = progress;
			}

			if (doEasing) {
				float circProgress = ((1 - easeStartAt) - (1 - progress)) / (1 - easeStartAt);
				//Debug.Log(circProgress);
				moveIn = curveFunction (spreadOrbsAcrossY ? easePos.y : easePos.x, 0.0f, circProgress);
			}

			if (spreadOrbsAcrossY)
				transform.position = new Vector3 (Mathf.Lerp (startPos.x, 0, progress), moveIn, transform.position.z);
			else
				transform.position = new Vector3 (moveIn, Mathf.Lerp (startPos.y, 0, progress), transform.position.z);
		}
    }

    public override float isHitting ()
    {
        
		float result;



		if (player == 0 || player == 1) {


			result = orbManager.linkManager.IsHit (player, hitType, back, strength, this.orientation, last_orient, score);


		}

		else if (player == 12 ) {


			float resultZero = orbManager.linkManager.IsHit (0, hitType, back, strength, this.orientation, last_orient, score);
			float resultOne = orbManager.linkManager.IsHit (1, hitType, back, strength, this.orientation, last_orient, score);

			if ((resultOne > 0.0f) && (resultZero >0.0f)) {
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


			if (hitType ==  HipHit.CIRCLE_10_5) {
				mirrorHitTypeCircle = HipHit.CIRCLE_4_5;
			}
			else if (hitType ==  HipHit.CIRCLE_12) {
				mirrorHitTypeCircle = HipHit.CIRCLE_6;
			}
			else if (hitType ==  HipHit.CIRCLE_1_5) {
				mirrorHitTypeCircle = HipHit.CIRCLE_7_5;
			}
			else if (hitType ==  HipHit.CIRCLE_3) {
				mirrorHitTypeCircle = HipHit.CIRCLE_9;
			}
			else if (hitType ==  HipHit.CIRCLE_4_5) {
				mirrorHitTypeCircle = HipHit.CIRCLE_10_5;
			}
			else if (hitType ==  HipHit.CIRCLE_6) {
				mirrorHitTypeCircle = HipHit.CIRCLE_12;
			}
			else if (hitType ==  HipHit.CIRCLE_7_5) {
				mirrorHitTypeCircle = HipHit.CIRCLE_1_5;
			}
			else  {
				mirrorHitTypeCircle = HipHit.CIRCLE_3;
			}
				
			//Debug.Log ("mirror orientation = " + mirrorOrientation);

			float resultZero = orbManager.linkManager.IsHit (0, hitType, back, strength, this.orientation, last_orient, score);
			float resultOne = orbManager.linkManager.IsHit (1, mirrorHitTypeCircle, back, strength, mirrorOrientation, last_orient, score);

			if ((resultOne > 0.0f) && (resultZero >0.0f)) {
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
	
		//Debug.Log("CIRCLE isHitting");
		//orbManager.linkManager.UpdateHitLogNotification("UNITY TRIGGERED HIT"+this.hitType);
		//result = orbManager.linkManager.IsHit (player,hitType, back, strength, this.orientation, last_orient);
		//Debug.Log("CIRCLE Result: "+result, this);
		//return result;

		//return false;
    }


	//public virtual void Update ()

	public override void Update ()

	{
		//Debug.Log("<color=cyan>BEGIN HITTING</color>");
		base.Update ();








		if (anchor != null) // if the anchor is set, then follow it.
		{
			transform.position = anchor.position;
		}


		if (inDetectionOrb) 
		{
			if (orbManager.isSessionEnding)
				return;

			if (isHitting ()>0.0f) 
			{
				//Debug.Log("Update:isHitting:true:"+gameObject.name);
				orbManager.AddScore (isHitting(),player);
				GetComponent<MeshRenderer> ().enabled = false;

				GetComponent<CircleCollider2D> ().enabled = false;

				// FFD added code nov 19 2016
				AuraControl ac = gameObject.GetComponentInChildren<AuraControl> ();
				if (ac != null)
					ac.AuraStop ();

				Transform child = transform.Find ("VisibleSphere");
				if (child != null)child.GetComponent<MeshRenderer> ().enabled = false;

				Transform hotRotationContainer = transform.Find ("HotRotationContainer");
				if (hotRotationContainer != null)
					hotRotationContainer.Find ("HitRotationPointer").GetComponent<MeshRenderer> ().enabled = false;
				//this.transform.Find ("HotRotationContainer").transform.Find ("HitRotationPointer").GetComponent<MeshRenderer> ().enabled = false;

				Transform hotRotationContainer2 = transform.Find ("HotRotationContainer2");
				if (hotRotationContainer2 != null)
					hotRotationContainer2.Find ("HitRotationPointer2").GetComponent<MeshRenderer> ().enabled = false;
				//this.transform.Find ("HotRotationContainer").transform.Find ("HitRotationPointer").GetComponent<MeshRenderer> ().enabled = false;



				inDetectionOrb = false;
				iTween.Stop (gameObject);
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
				Debug.Log("Update:isHitting:false");
				onEnterFail ();
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
			Debug.Log("OnTriggerEnter2D: FailOrb");
		}
	}

	void dummyUpdate ()
	{

	}



	//Set the orientation on collision.
	void onEnterDetection ()
	{
		//Debug.Log("<color=brown>Enter Detection FFD: "+gameObject.name+"</color>");
		inDetectionOrb = true;

		//Debug.Log("<color=brown>LAST ORB ORIENTATION: " + last_orient.ToString() + "</color>");
		//Debug.Log("<color=brown>LAST ORIENTATION(ORB MANAGER): "+orbManager.lastOrientation.ToString()+"</color>");
		//Debug.Log("<color=brown>CURRENT ORB ORIENTATION: " + orientation.ToString() + "</color>");
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
			//Debug.Log("<color=brown>" + last_orient.ToString() +"</color>");
			orbManager.lastOrientation = this.orientation;
			//Debug.Log("<color=brown>LAST ORB ORIENTATION: " + last_orient.ToString() + "</color>");
			//Debug.Log("<color=brown>CURRENT ORIENTATION(ORB MANAGER): "+orbManager.lastOrientation.ToString()+"</color>");

			/*
            Debug.Log("<color=brown>Last orientation !null</color>");
            if (orbManager.lastOrientation == this.orientation.ToString())
            {
                last_orient = orbManager.lastOrientation;
                Debug.Log("<color=brown>Last orientation same</color>");
            }
            else
            {
                Debug.Log("<color=brown>Last orientation not same</color>");
                last_orient = orbManager.lastOrientation;
                orbManager.lastOrientation = this.orientation.ToString();
            }*/

		}

		//Debug.Log("<color=brown>Last orientation outer</color>");

	}

	void onEnterFail ()
	{
		orbManager.didFail (player);
		Destroy (gameObject);
		Debug.Log ("circle hit onEnterFail");

	}

	public void SetSize(float _size)
	{
		Transform child = transform.Find ("VisibleSphere");
		if (child != null)
			child.localScale = Vector3.one * _size;
	}




}
