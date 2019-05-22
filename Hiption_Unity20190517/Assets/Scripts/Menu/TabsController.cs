using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;

public class TabsController : MonoBehaviour {

	[System.Serializable]
	public class TabInfo
	{
		public Button tabButton;
		public GameObject tabPanel;
	}

	public int defaultTabIndex = 0;
	public List<TabInfo> tabs;

	// Use this for initialization
	void Start () {
		for(int i = 0; i < tabs.Count; i++)
		{
			int index = i;
			tabs[i].tabButton.onClick.AddListener(() => ButtonClick_Tab(index));
			if(defaultTabIndex == i) {
				tabs[i].tabPanel.SetActive(true);
			}
			else {
				tabs[i].tabPanel.SetActive(false);
			}
		}
	}

	void ButtonClick_Tab(int tabIndex)
	{
		for(int i = 0; i < tabs.Count; i++)
		{
			if(tabIndex == i) {
				tabs[i].tabPanel.SetActive(true);
			}
			else {
				tabs[i].tabPanel.SetActive(false);
			}
		}
	}
}
