using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class StoreUIManager : MonoBehaviour {

	public Text[] TextPetName;
	public Text[] TextPetType;

	public static StoreUIManager Instance;

	void Awake() {
		Instance = this;
	}

	void Start() {
		
	}

	public void UpdatePetName(int index, string str) {
		TextPetName [index].text = str;
	}

	public void GoBackMap() {
		StoreAudio.Instance.ButtonAudio ();
		SaveAndLoad.Save ();
		SceneManager.LoadScene ("MapScene");
	}

	public void UpdatePetType(int index, string strType) {
		TextPetType [index].text = strType;
	}
}

