using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class Invisiblebutton : MonoBehaviour {
	public Button InvisibleButton;
	// Use this for initialization
	void Start () {
		Button btn = InvisibleButton.GetComponent<Button> ();
		btn.onClick.AddListener (OnClickBack);
	}

	void OnClickBack() {
		SceneManager.LoadScene ("SampleScene");
	}
}
