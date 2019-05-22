#if UNITY_EDITOR




using UnityEngine;
using UnityEditor;
using System.Collections;

[CustomEditor( typeof( SphereControl ) )]
[CanEditMultipleObjects]
public class CharacterMorph_Editor : Editor {

	public override void OnInspectorGUI()
	{
		DrawDefaultInspector();

		SphereControl myScript = (SphereControl)target;
		if(GUILayout.Button("Load All Morphs"))
		{
			myScript.LoadMorphs();
		}
	}
}


#endif