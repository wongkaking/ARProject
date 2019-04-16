using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FindBall : MonoBehaviour {

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

//	碰撞检测
	void OnTriggerEnter(Collider other) {
		if (other.tag == "Avatar") {
			Debug.Log ("Ball");
			//调用UI管理其中的函数增加小球显示的数量
			UIManager_02.Instance.AddBallNum();
//			Debug.Log ("Ball OnTriggerEnter");
//			销毁
			Destroy (gameObject);
		}
	}
}
