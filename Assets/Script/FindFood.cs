using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FindFood : MonoBehaviour {

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

//	碰撞检测
	void OnTriggerEnter(Collider other) {
		if (other.tag == "Avatar") {
			//调用UI管理其中的函数增加小球显示的数量
			UIManager_02.Instance.AddFoodNum();
			Debug.Log ("Food OnTriggerEnter");
//			销毁
			Destroy (gameObject);
		}	
	}
}
