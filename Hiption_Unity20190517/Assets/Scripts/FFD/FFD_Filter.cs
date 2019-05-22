using UnityEngine;
using System.Collections;
using System.Collections.Generic;

// FilterFiles(dataList,new string[2]{".wav",".mp3"});

public class FFD_Filter : MonoBehaviour {

    //Filters files according to the provided types.
	public static List<string> FilterFiles(List<string> _filenames, string[] _types )
	{
		for(int fileloop = _filenames.Count-1 ; fileloop >= 0 ; fileloop--)
		{
			if (!IsType (_filenames [fileloop], _types)) {
				_filenames.RemoveAt (fileloop);
			}
		}
		return _filenames;
	}

	// new string[2]{".wav",".mp3"};
	public static bool IsType(string _filename, string[] _types)
	{
		for(int typeloop = 0 ; typeloop < _types.Length ; typeloop++)
		{
			string filetype = _types[typeloop];

			if (_filename.Substring (_filename.Length - filetype.Length, filetype.Length).ToLower() == filetype.ToLower()) {
				return true;
			}
		}
		return false;
	}
}
