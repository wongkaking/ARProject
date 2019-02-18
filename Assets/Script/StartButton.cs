using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class StartButton : MonoBehaviour {

	public Button startBtn;
	// Use this for initialization
	void Start () {
		Button btn = startBtn.GetComponent<Button> ();
		btn.onClick.AddListener (OnClickStart);
	}

	void OnClickStart() {
		SceneManager.LoadScene ("ARScene");
	}
}