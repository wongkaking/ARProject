using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GetLocation : MonoBehaviour {

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	void OnTriggerEnter(Collider other) {
		if (other.tag == "location1") {
			Debug.Log ("location1");
			SceneManager.LoadScene ("TestScene");
			Destroy (gameObject);
		} else if (other.tag == "location2") {
			Debug.Log ("location1");
			SceneManager.LoadScene ("TestScene");
			Destroy (gameObject);
		}
	}
}
