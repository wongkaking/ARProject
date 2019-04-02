using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class OtherButton : MonoBehaviour {
	public Button openButton;
	public Button closeButton;
	Animation animation;

	// Use this for initialization
	void Start () {
		gameObject.SetActive (false);

		Button aboutBtn = openButton.GetComponent<Button> ();
		aboutBtn.onClick.AddListener (OnClickShow);

		Button closeBtn = closeButton.GetComponent<Button> ();
		closeBtn.onClick.AddListener (OnClickClose);

		animation = gameObject.GetComponent<Animation> ();
	}

	void OnClickShow() {
		gameObject.SetActive (true);
		animation ["showAnimation"].speed = 1f;
		animation.Play ("showAnimation");
	}

	void OnClickClose() {
		animation ["showAnimation"].speed = -1f;
		animation ["showAnimation"].time = animation ["showAnimation"].length;
		animation.Play ("showAnimation");
	}
}
