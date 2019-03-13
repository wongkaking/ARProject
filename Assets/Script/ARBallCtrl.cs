using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ARBallCtrl : MonoBehaviour {

	private GameObject[] Balls;

	public Transform PosInsBall;

	public static ARBallCtrl Instance;

	void Awake () {
		Instance = this;
	}

	// Use this for initialization
	void Start () {
		Balls = Resources.LoadAll<GameObject> ("Ball");
//		更新精灵球数
		ARUIManager.Instance.UpdateUIBallNum ();
		InsNewBall ();
	}
	
	// Update is called once per frame
	void Update () {
		
	}

//	产生新的精灵球
	public void InsNewBall() {
		if (StaticData.BallNum > 0) {
			GameObject _ball = Instantiate(Balls[0], PosInsBall.position, PosInsBall.rotation);
			_ball.transform.SetParent(PosInsBall);
			_ball.gameObject.AddComponent<SphereCollider> ();

			_ball.gameObject.AddComponent<ARShootBall> ();
//			更改精灵球大小
			_ball.transform.localScale = new Vector3(20f, 20f, 20f);
//			更改碰撞器大小
			_ball.GetComponent<SphereCollider>().radius = 0.011f;
		}
	}
}
