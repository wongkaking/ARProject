using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FindPets : MonoBehaviour {

	public int PetIndex;

	// Use this for initialization
	void Start () {
		transform.LookAt(GameObject.FindGameObjectWithTag("Avatar").transform);
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	void OnTriggerEnter(Collider other){
		if (other.tag == "Avatar") {
			UIManager_02.Instance.SetIm_Catch (true);

			StaticData.CatchPetIndex = PetIndex;

//			销毁
			Destroy (gameObject);
		}
		if (other.tag == "Ball") {
			petCatchAni ();
			StartCoroutine (ShowCatchPancl());
		}
	}

//	延迟2s出现面板
	IEnumerator ShowCatchPancl() {
		yield return new WaitForSeconds (2);
		ARUIManager.Instance.ShowCatchPancl ();
		Destroy (transform.gameObject);
	}

//	精灵被捕捉动画
	private void petCatchAni() {
		transform.GetComponent<Animator> ().SetTrigger ("Catched");
	}
}
