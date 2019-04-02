using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class FindPets : MonoBehaviour {

	public int PetIndex;

	// Use this for initialization
	void Start () {
		Scene _scene = SceneManager.GetActiveScene ();
		string _sceneName = _scene.ToString ();
//		print (_sceneName);
		if (_sceneName != "StoreScene") {
			transform.LookAt (GameObject.FindGameObjectWithTag ("Avatar").transform);
		}
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	void OnTriggerEnter(Collider other) {
		if (other.tag == "Avatar") {
			if (StaticData.BallNum > 0 && StaticData.FoodNum > 0) {
				UIManager_02.Instance.SetIm_Catch (true);

				StaticData.CatchPetIndex = PetIndex;
				Destroy (gameObject);
			} else if (StaticData.BallNum == 0 || StaticData.FoodNum == 0) {
				UIManager_02.Instance.SetNoBall (true);
				Destroy (gameObject);
			}
				
//			销毁
//			Destroy (gameObject);
//			UIManager_02.Instance.SetNoBall (false);
		}
		if (other.tag == "Ball") {
			petCatchAni ();
			StartCoroutine (ShowCatchPancl());
		}
	}
		
//	延迟2.5s出现面板
	IEnumerator ShowCatchPancl() {
		yield return new WaitForSeconds (2.5f);
		ARUIManager.Instance.ShowCatchPancl ();
		Destroy (transform.gameObject);
	}

//	精灵被捕捉动画
	private void petCatchAni() {
		transform.GetComponent<Animator> ().SetTrigger ("Catched");
	}
}
