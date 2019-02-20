using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GetGPS : MonoBehaviour {
	string GetGps= "";
	public Text ShowGPS;

	// Use this for initialization
	void Start () {
		StartCoroutine (StartGPS ());
		GetGps = "N:" + Input.location.lastData.latitude + "\r\nE:" + Input.location.lastData.longitude;
		GetGps = GetGps + "\r\nTime" + Input.location.lastData.timestamp;
		ShowGPS.text = GetGps;
		Debug.Log (GetGps);
	}

	public void UpdateGPS () {
		StartCoroutine (StartGPS ());
		GetGps = "N:" + Input.location.lastData.latitude + "\r\nE:" + Input.location.lastData.longitude;
		GetGps = GetGps + "\r\nTime" + Input.location.lastData.timestamp;
		ShowGPS.text = GetGps;
		Debug.Log (GetGps);
	}

	void Stop () {
		Input.location.Stop ();
	}

	IEnumerator StartGPS () {
		if (!Input.location.isEnabledByUser) {
			GetGps = "isEnableByUser value is " + Input.location.isEnabledByUser.ToString() + "Please turn on the GPS";
			yield return false;
		}
		Input.location.Start (10.0f, 10.0f);

		int maxWait = 20;
		while (Input.location.status == LocationServiceStatus.Initializing && maxWait> 0) {
			yield return new WaitForSeconds(1);
			maxWait--;
		}
		if ( maxWait < 1) {
			GetGps = "Init GPS service time out";
			yield return false;
		}
		if ( Input.location.status == LocationServiceStatus.Failed) {
			GetGps = "Unable to determin device location";
			yield return false;
		} else {
			GetGps = "N:" + Input.location.lastData.latitude + "\r\nE:" + Input.location.lastData.longitude;
			GetGps = GetGps + "\r\nTime:" + Input.location.lastData.timestamp;
			yield return new WaitForSeconds(100);
		}
	}
}
