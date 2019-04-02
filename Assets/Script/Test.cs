using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using GoShared;

public class Test : MonoBehaviour {

	public GameObject InsCube;

	// Use this for initialization
	void Start () {
		Invoke ("SetCube", 2);
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void CheckPostition() {
		GameObject _avatar = GameObject.FindGameObjectWithTag ("Avatar");

		Vector3 _avatarV3 = _avatar.transform.position;

//		Vector3坐标转为经纬度
		Coordinates _coordinates = Coordinates.convertVectorToCoordinates (_avatarV3);
	}

	public void SetCube() {
//		纬度，经度，0
		Coordinates _cooridnates = new Coordinates (23.457538, 113.500849, 0);
//		经纬度转为游戏坐标
		Vector3 _v3 = _cooridnates.convertCoordinateToVector (0);

		GameObject _cube = Instantiate (InsCube);
//		GameObject _ball=Instantiate( Balls[_ballIndex], transform.position + new Vector3(0, 5f, 0), transform.rotation );
		Vector3 _v3s = new Vector3(0, 20, 0) + _v3;
		_cube.transform.position = _v3s;
	}
}
