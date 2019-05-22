using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class SphereControl : MonoBehaviour {

	SkinnedMeshRenderer[] skinnedMeshRenderer;

	bool ready = false;

	public List<Morphs> morphs;
	[System.Serializable]
	public class Morphs
	{
		public string name;
		public float power = 0;
		public float targetPower = 0;
		public float change = 0;
		public List<SkinSet> skins = new List<SkinSet>();
		public AutoTime autoTime = new AutoTime();

		[System.Serializable]
		public class SkinSet
		{
			public int skinIndex = -1;
			public List<int> shapeIndex = new List<int>();
		}

		[System.Serializable]
		public class AutoTime
		{
			public bool active = false;
			public bool loop = false;
			public float low_target_percent = 0;
			public float low_target_time = 0;
			public float low_target_speed = 0;
			public Vector2 low_timerange = Vector2.zero;

			public float high_target_percent = 0;
			public float high_target_time = 0;
			public float high_target_speed = 0;
			public Vector2 high_timerange = Vector2.zero;

			public void Init(float _high_target_percent, float _high_target_speed, Vector2 _high_timerange, float _low_target_percent, float _low_target_speed, Vector2 _low_timerange)
			{
				Init (_high_target_percent, _high_target_speed, _high_timerange, _low_target_percent, _low_target_speed, _low_timerange, false);
			}
			public void Init(float _high_target_percent, float _high_target_speed, Vector2 _high_timerange, float _low_target_percent, float _low_target_speed, Vector2 _low_timerange, bool _loop)
			{
				active = true;
				loop = _loop;

				low_target_percent = _low_target_percent;
				low_target_time = 0;
				low_target_speed = _low_target_speed;
				low_timerange = _low_timerange;

				high_target_percent = _high_target_percent;
				high_target_time = -1;
				high_target_speed = _high_target_speed;
				high_timerange = _high_timerange;
			}

			public bool Update()
			{
				if (!active)
					return false;
				if (high_target_time >= 0) {
					if (Time.time > high_target_time) {
						if (loop) {
							high_target_time = -1;
						} else {
							high_target_time = -2;
						}
						low_target_time = Random.Range (low_timerange.x, low_timerange.y) + Time.time;
						return true;
					}
				}
				if (low_target_time >= 0) {
					if (Time.time > low_target_time) {
						low_target_time = -1;
						if (high_target_time > -2) {
							high_target_time = Random.Range (high_timerange.x, high_timerange.y) + Time.time;
						} else {
							high_target_time = -1;
							active = false;
						}
						return true;
					}
				}
				return false;
			}
		}
	}

	void Start()
	{
		SetCircles (new int[]{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 }, 100);

		//PulseCircles ( new int[]{1,2,3,4,5,6,7,8}, 0.2f, 0.5f);
	}

	public void PulseCircles(int[] circles, float _in, float _out)
	{
		for(int loop = 0 ; loop < circles.Length ; loop++)
		{
			float pulseIn = _in;
			float pulseOut = _out;
			MorphCycle (circles [loop], 0, 100*.7f, new Vector2 (pulseIn, pulseIn), (100)*.7f, 100/pulseOut, new Vector2 (pulseOut, pulseOut), false);
		}
	}

	public void PulseCircles(int[] circles, float _in, float _out, float _power)
	{
		_power = Mathf.Clamp (_power, 0, 100);

		for(int loop = 0 ; loop < circles.Length ; loop++)
		{
			float pulseIn = _in;
			float pulseOut = _out;
			MorphCycle (circles [loop], (100-_power)*.7f, 100/pulseIn, new Vector2 (pulseIn, pulseIn), (100)*.7f, 100/pulseOut, new Vector2 (pulseOut, pulseOut), false);
		}
	}

	public void SetCircles(int[] circles, float _power)
	{
		for(int loop = 0 ; loop < circles.Length ; loop++)
		{
			Morph(circles [loop], _power*.7f,0);
		}
	}

	// Use this for initialization
	void Awake () {
		if (ready == false) {
			skinnedMeshRenderer = GetComponentsInChildren<SkinnedMeshRenderer> ();
			ready = true;
		}
	}

	void Update()
	{
		transform.Rotate (0,0,60*Time.deltaTime);

		for (int loop = 0; loop < morphs.Count; loop++) {

			if (morphs [loop].autoTime.Update ()) {
				if (morphs [loop].autoTime.low_target_time >= 0) {
					morphs [loop].change = morphs [loop].autoTime.low_target_speed;
					morphs [loop].targetPower = morphs [loop].autoTime.low_target_percent;
				}
				else if (morphs [loop].autoTime.high_target_time >= 0) {
					morphs [loop].change = morphs [loop].autoTime.high_target_speed;
					morphs [loop].targetPower = morphs [loop].autoTime.high_target_percent;
				}
			}

			if (morphs[loop].power != morphs[loop].targetPower) {
				if (morphs [loop].change == 0)
					morphs [loop].power = morphs [loop].targetPower;
				else {
					if (morphs[loop].power < morphs[loop].targetPower)
						morphs[loop].power = Mathf.Clamp(morphs[loop].power + (morphs [loop].change*Time.deltaTime),morphs[loop].power,morphs[loop].targetPower);
					else
						morphs[loop].power = Mathf.Clamp(morphs[loop].power - (morphs [loop].change*Time.deltaTime),morphs[loop].targetPower,morphs[loop].power);
				}
			}

			MorphMesh (loop, morphs [loop].power);
		}
	}

	void MorphMesh(int _index, float _power)
	{
		if (_index < 0 || _index >= morphs.Count) {
			Debug.LogWarning ("Illegal morph index.  Ignoring.");
			return;
		}

		Morphs m = morphs [_index];

		for (int skinLoop = 0; skinLoop < m.skins.Count; skinLoop++) {
			for (int shapeLoop = 0; shapeLoop < m.skins[skinLoop].shapeIndex.Count; shapeLoop++) {
				skinnedMeshRenderer [m.skins [skinLoop].skinIndex].SetBlendShapeWeight (m.skins [skinLoop].shapeIndex [shapeLoop], _power);
			}
		}
	}

	public void MorphCycle(string _name, float _high_target_percent, float _high_target_speed, Vector2 _high_timerange, float _low_target_percent, float _low_target_speed, Vector2 _low_timerange, bool _loop)
	{
		int index = GetMorphIndex (_name);
		if (index != -1)
			MorphCycle(index, _low_target_percent, _low_target_speed, _low_timerange, _high_target_percent, _high_target_speed, _high_timerange, _loop);
		else {
			Debug.LogWarning ("Illegal morph cycle name.  Ignoring: "+ _name);
		}
	}

	public void MorphCycle(int _index, float _high_target_percent, float _high_target_speed, Vector2 _high_timerange, float _low_target_percent, float _low_target_speed, Vector2 _low_timerange, bool _loop)
	{
		morphs [_index].autoTime.Init (_high_target_percent, _high_target_speed, _high_timerange, _low_target_percent, _low_target_speed, _low_timerange, _loop);
	}

	/// <summary>
	/// Set morph by name.
	/// </summary>
	/// <param name="_name">Name of .</param>
	/// <param name="_power">Power.</param>
	public void Morph(string _name, float _targetPower, float _speed)
	{
		int index = GetMorphIndex (_name);
		if (index != -1)
			Morph (index, _targetPower, _speed);
		else {
			Debug.LogWarning ("Illegal morph name: '"+_name+"'.  Ignoring.");
		}
	}

	/// <summary>
	/// Morph the specified _index, _targetPower and _speed.
	/// </summary>
	/// <param name="_index">Index.</param>
	/// <param name="_targetPower">Target power.</param>
	/// <param name="_speed">Speed.</param>
	public void Morph(int _index, float _targetPower, float _speed)
	{
		if (_index < 0 || _index >= morphs.Count) {
			Debug.LogWarning ("Illegal morph index: "+_index+".  Ignoring.");
			return;
		}

		//MorphCycle(_index, morphs [_index].power, 0, new Vector2(0,0),  morphs [_index].power, 0, new Vector2(0,0), false);

		morphs [_index].autoTime.active = false;
		morphs [_index].targetPower = _targetPower;
		morphs [_index].change = _speed;

	}

	public void ClearMorphs()
	{
		Awake ();
		for (int loop = 0; loop < morphs.Count; loop++) {
			morphs [loop].power = 0;
			morphs [loop].change = 0;
			morphs [loop].targetPower = 0;
			morphs [loop].autoTime = new Morphs.AutoTime();
			MorphMesh (loop, morphs [loop].power);
		}
	}

	public void LoadMorphs()
	{
		SkinnedMeshRenderer[] skinnedMeshRenderer = GetComponentsInChildren<SkinnedMeshRenderer> ();

		morphs = new List<Morphs>();

		for (int skinLoop = 0; skinLoop < skinnedMeshRenderer.Length; skinLoop++) {
			Mesh skinnedMesh = skinnedMeshRenderer[skinLoop].sharedMesh;

			Debug.Log("Loading Skin: "+skinLoop); 

			for (int morphLoop = 0; morphLoop < skinnedMesh.blendShapeCount; morphLoop++) {
				//Debug.Log("Loading Morph: "+morphLoop); 
				string morphName = skinnedMesh.GetBlendShapeName (morphLoop);
				int morphIndex = FindMorph (morphName);
				if (morphIndex == -1) { // not found
					Morphs morphdata = new Morphs ();
					morphdata.name = skinnedMesh.GetBlendShapeName (morphLoop);
					morphdata.change = 0;
					morphdata.power = 0;
					morphdata.targetPower = 0;
					morphdata.autoTime = new Morphs.AutoTime();
					morphdata.skins = new List<Morphs.SkinSet> ();
					Morphs.SkinSet newskin = new Morphs.SkinSet (); 
					newskin.skinIndex = skinLoop;
					newskin.shapeIndex.Add (morphLoop);
					morphdata.skins.Add (newskin);
					morphs.Add (morphdata);
				} else { // already exists... 
					int testSkinIndex = FindSkin (skinLoop,morphIndex);
					if (testSkinIndex == -1) {
						Morphs.SkinSet newskin = new Morphs.SkinSet (); 
						newskin.skinIndex = skinLoop;
						newskin.shapeIndex.Add (morphLoop);
						morphs [morphIndex].skins.Add (newskin);
					} else {
						int testShapeIndex = FindShapeLink (morphIndex,skinLoop,morphIndex);
						if (testShapeIndex == -1) {
							morphs [morphIndex].skins [skinLoop].shapeIndex.Add (morphIndex);
						} else {
							//Debug.Log("Morph already loaded..."); 
						}
					}
				}
			}
		}
	}

	// utility code...
	int FindMorph(string _name)
	{
		for (int loop = 0; loop < morphs.Count; loop++) {
			if (_name == morphs [loop].name) {
				return loop;
			}
		}
		return -1;
	}

	int FindSkin(int _skinIndex, int _morphIndex)
	{
		for (int loop = 0; loop < morphs[_morphIndex].skins.Count; loop++) {
			if (_skinIndex == morphs[_morphIndex].skins[loop].skinIndex) {
				return loop;
			}
		}
		return -1;
	}

	int FindShapeLink(int _shapeLink, int _skinIndex, int _morphIndex)
	{
		for (int loop = 0; loop < morphs[_morphIndex].skins[_skinIndex].shapeIndex.Count; loop++) {
			if (_shapeLink == morphs[_morphIndex].skins[_skinIndex].shapeIndex[loop]) {
				return loop;
			}
		}
		return -1;
	}

	public int GetMorphIndex (string _name) {

		for (int loop = 0; loop < morphs.Count; loop++) {
			if (morphs[loop].name == _name) {
				return loop;
			}
		}
		Debug.Log (morphs.Count);
		for (int loop = 0; loop < morphs.Count; loop++) {
			Debug.Log (morphs[loop].name);
		}
		return -1;
	}

	public float GetMorphPower (string _name) {

		return GetMorphPower (GetMorphIndex (_name));
	}

	public float GetMorphPower (int _index) {

		if (_index < 0 || _index >= morphs.Count)
			return 0;
		return morphs [_index].power;
	}
}
