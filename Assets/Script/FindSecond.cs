using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class FindSecond : MonoBehaviour {

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	void OnTriggerEnter(Collider other) {
		if (other.tag == "Avatar") {
			Debug.Log ("second");
			SceneManager.LoadScene ("TestScene");
			Destroy (gameObject);
		}
	}
}
