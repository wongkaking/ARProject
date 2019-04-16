using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using GoShared;

public class SecondLocation : MonoBehaviour {
	
	public GameObject SignPrefab;

	// Use this for initialization
	void Start () {
		Invoke ("SetSignPrefab", 2);
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	void SetSignPrefab () {
		Coordinates _cooridnates = new Coordinates (23.45389, 113.4894, 0);
		Vector3 _v3 = _cooridnates.convertCoordinateToVector (0);

		GameObject _cube = Instantiate (SignPrefab);
		Vector3 _v3s = new Vector3(0, 20, 0) + _v3;
		_cube.transform.position = _v3s;
	}
}
