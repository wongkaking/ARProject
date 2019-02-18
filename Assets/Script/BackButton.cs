using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class BackButton : MonoBehaviour {
	public Button backButton;
	public string sceneName;
	// Use this for initialization
	void Start () {
		Button backbtn = backButton.GetComponent<Button> ();
		backbtn.onClick.AddListener (OnClickBack);
	}

	void OnClickBack() {
		SceneManager.LoadScene (sceneName);
	}
}
