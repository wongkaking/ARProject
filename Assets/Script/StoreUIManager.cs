using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class StoreUIManager : MonoBehaviour {

	public Text[] TextPetName;
	public Text[] TextPetType;

	public static StoreUIManager Instance;

	void Awake() {
		Instance = this;
	}

	public void UpdatePetName(int index, string str) {
		TextPetName [index].text = str;
	}
}
