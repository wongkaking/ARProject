﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class ARUIManager : MonoBehaviour {

	public static ARUIManager Instance;

	public Text Tx_BallNum;
	public Text Tx_FoodNum;

	public GameObject PanclCatched;
	public GameObject NoBall;

	public Text InputPetName;

 	public bool isCatched = false;

	void Awake() {
		Instance = this;
	}

	// Use this for initialization
	void Start () {
		Tx_FoodNum.text = StaticData.FoodNum.ToString ();
	}
	
	// Update is called once per frame
	void Update () {
		if (isCatched == false) {
			if (StaticData.BallNum == 0) {
				ShowNoBall ();
			} 
		}
	}

	public void GoMapScene() {
		ARCatchAudio.Instance.ButtonAudio ();
		SceneManager.LoadScene ("MapScene");
	}

	public void UpdateUIBallNum() {
		Tx_BallNum.text = StaticData.BallNum.ToString ();
	}

	public void UpdateUIFoodNum() {
		Tx_FoodNum.text = StaticData.FoodNum.ToString ();
	}

	public void ShowCatchPancl() {
		PanclCatched.SetActive (true);
		isCatched = true;
	}

	IEnumerable ShowNoBall() {
		yield return new WaitForSeconds (3f);
		NoBall.SetActive (true);
//		UIManager_02.Instance.ShowNoBallOrFood (false);
	}

//	提交名字
	public void Submit() {
		Debug.Log ("submit");
		string _name = InputPetName.text;
		int _index = StaticData.CatchPetIndex;
		StaticData.AddPet (new PetSave(_name, _index));
		ARCatchAudio.Instance.ButtonAudio ();
		SceneManager.LoadScene ("StoreScene");
	} 
		
	public void Cancel() {
		ARCatchAudio.Instance.ButtonAudio ();
		SceneManager.LoadScene ("MapScene");
	}

	public void OnClickOk() {
		ARCatchAudio.Instance.ButtonAudio ();
		SceneManager.LoadScene ("MapScene");
	}

	public void GoStore() {
		ARCatchAudio.Instance.ButtonAudio ();
		SceneManager.LoadScene ("StoreScene");
	}
		
}
