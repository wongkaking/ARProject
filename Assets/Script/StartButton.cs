using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class StartButton : MonoBehaviour {

	public Button startButton;
	public string LoadSceneName;
	public string targetSceneName;
	// Use this for initialization
	void Start () {
		Button btn = startButton.GetComponent<Button> ();
		btn.onClick.AddListener (OnClickStart);
	}

	void OnClickStart() {
		StartAudio.Instance.ButtonAudio ();
		SaveAndLoad.Load ();
		Globe.nextSceneName = targetSceneName;
		SceneManager.LoadScene (LoadSceneName);
//		SceneManager.LoadScene ("ARScene");
	}
}