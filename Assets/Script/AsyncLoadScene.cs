﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class Globe {
	public static string nextSceneName;
}

public class AsyncLoadScene : MonoBehaviour {

	public Slider loadingSlider;
	public Text loadingText;
	private float loadingSpeed = 1;
	private float targetValue;
	private AsyncOperation operation;

	// Use this for initialization
	void Start () {
		loadingSlider.value = 0.0f;
		if (SceneManager.GetActiveScene().name == "LoadScene") {
			StartCoroutine (AsyncLoading());
		}
	}

	IEnumerator AsyncLoading() {
		operation = SceneManager.LoadSceneAsync (Globe.nextSceneName);
		operation.allowSceneActivation = false;
		yield return operation;
	}
	
	// Update is called once per frame
	void Update () {
		targetValue = operation.progress;
		if (operation.progress >= 0.9f) {
			targetValue = 1.0f;
		}
		if (targetValue != loadingSlider.value) {
			loadingSlider.value = Mathf.Lerp (loadingSlider.value, targetValue, Time.deltaTime * loadingSpeed);
			if (Mathf.Abs (loadingSlider.value - targetValue) < 0.01f) {
				loadingSlider.value = targetValue;
			}
		}
		loadingText.text = ((int)(loadingSlider.value * 100)).ToString() + "%";
		if ((int)(loadingSlider.value * 100) == 100) {
			operation.allowSceneActivation = true;
		}
	}
}
