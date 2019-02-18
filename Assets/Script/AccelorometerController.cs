using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AccelorometerController: MonoBehaviour {

	static bool isTouch = false;
	static bool isLeave = false;
	public float speed = 200;
	float screenWidth;
	float screenHeight;
	float dragonWidth;
	float dragonHeight;

	// Use this for initialization
	void Start () {
		isTouch = false;
		GetSize ();
	}

	// Update is called once per frame
	void Update () {
		if (Input.touchCount >= 1) {
			isTouch = true;
		}

		if (isTouch) {
			Vector3 kMovement = new Vector3 (
				Input.acceleration.x * speed * -Time.deltaTime , 
				Input.acceleration.y * speed * Time.deltaTime);
			transform.Translate (kMovement);
		}
	}
		
	// Get the size of the Screen
	void GetSize()
	{
		screenWidth = Screen.width;
		screenHeight = Screen.height;

		dragonWidth = this.transform.localScale.x;
		dragonWidth = this.transform.localScale.y;
	}
}
