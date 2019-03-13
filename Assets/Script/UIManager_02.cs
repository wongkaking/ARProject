using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;
using UnityEngine.SceneManagement;

public class UIManager_02 : MonoBehaviour {

	public Text Tx_Ball;
	public Text Tx_Food;

	public GameObject Im_Catch;

	private Int32 ballNumber;
	private Int32 foodNumber;

//	申请静态共有脚本类变量
	public static UIManager_02 Instance;

	void Awake() {
		Instance = this;
	} 

	// Use this for initialization
	void Start () {
		Tx_Ball.text = StaticData.BallNum.ToString ();
	}

	// Update is called once per frame
	void Update () {
		ballNumber = Int32.Parse (Tx_Ball.text);
		foodNumber = Int32.Parse (Tx_Food.text);
	}

//	增加精灵球
	public void AddBallNum() {
//		int _num = Int32.Parse (Tx_Food.text);
//		_num += 1;
//		ballNumber++;
		StaticData.BallNum++;
		Tx_Ball.text = StaticData.BallNum.ToString ();
		Debug.Log (Tx_Ball.text);
	}

//	增加食物
	public void AddFoodNum() {
//		int _num = Int32.Parse (Tx_Food.text);
//		_num += 1;
		foodNumber++;
		Tx_Food.text = foodNumber.ToString ();
	}

	public void SetIm_Catch(bool isActive) {
		Im_Catch.SetActive (isActive);
	}

	public void GoARCatch() {
		SceneManager.LoadScene ("ARCatch");
	}
}
