using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using UnityEngine;

    class FileUtility
    {
        public static List<string> GetClipList()
        {
            AudioClip[] clips = Resources.LoadAll<AudioClip>("Tracks");

            List<string> clipNames = new List<string>();

            foreach (AudioClip clip in clips)
            {
                clipNames.Add(clip.name + ".rmap");
            }

            return clipNames;
        }
		
    //Returns a list of all the rmaps at the persistent path.
	public static List<string> GetRmapList()
	{
		//Debug.Log (Application.persistentDataPath + "/RhythmMaps/");

		TextAsset[] rmaps = Resources.LoadAll<TextAsset>("");

		List<string> rmapNames = new List<string>();
		//string[] rmaps = Directory.GetFiles("Assets/Resources/RhythmMaps");

		foreach (TextAsset rmap in rmaps)
		{
			rmapNames.Add(rmap.name + ".rmap");
			Debug.Log (rmap.name);
		}

		return rmapNames;




	} 

}

	