using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ARShootBall : MonoBehaviour {

	public float FwdForce = 300f;
//	设置一个夹角的参照数值
	public Vector3 StanTra = new Vector3(0, 1f, 0);

	private bool isTouched = false;
	private bool isShooted = false;

	private Vector3 startPositon;
	private Vector3 endPosition;
	private Vector3 offset;
	private float disFick;

	private int timeFlick;
	private float speedFlick;
	private Camera camera;

	// Use this for initialization
	void Start () {
		camera = Camera.main;
	}

	// Update is called once per frame
	void Update () {
		if (isTouched)
		{
			slip();

		}
	}

//	重置参数
	private void resetVari()
	{
		startPositon = Input.mousePosition;
		endPosition = Input.mousePosition;
	}

//	鼠标（手指）按下（是否碰触到脚本挂载物体）
	void OnMouseDown()
	{
		if (isShooted==false)
		{
//			允许检测手指滑动
			isTouched = true;
		}
	}

//	计算手指的滑动
	private void slip()
	{
		timeFlick += 25;

		if (Input.GetMouseButtonDown(0))
		{
			resetVari();
		}
		if (Input.GetMouseButton(0))
		{
			endPosition = Input.mousePosition;
			offset = camera.transform.rotation * (endPosition-startPositon);
			disFick = Vector3.Distance(startPositon,endPosition);
		}
		if (Input.GetMouseButtonUp(0))
		{
			speedFlick = disFick / timeFlick;
			isTouched = false;
			timeFlick = 0;
			//如果手指移动距离大于20 且 方向向上滑动
			if (disFick > 20 && endPosition.y - startPositon.y > 0)
			{
				shootBall();
			}
		}
	}

//	发射精灵球
	private void shootBall() {
//		添加刚体
		transform.gameObject.AddComponent<Rigidbody>();
		Rigidbody _rigBall = transform.GetComponent<Rigidbody>();
		_rigBall.velocity = offset.normalized * 1.2f * speedFlick;
//		_rigBall.velocity = offset * 0.003f * speedFlick;
		_rigBall.AddForce(camera.transform.forward * FwdForce);
//		_rigBall.AddForce(transform.parent.parent.transform.forward * FwdForce);
		_rigBall.AddTorque(transform.right);
		_rigBall.drag = 0.5f;
		isShooted = true;
//		脱离父级
		transform.parent = null;

		StaticData.BallNum--;
		ARUIManager.Instance.UpdateUIBallNum ();

		StartCoroutine (LaterInsBall ());
	}
		
//	延时生成精灵球
	IEnumerator LaterInsBall() {
		yield return new WaitForSeconds (0.2f);
		ARBallCtrl.Instance.InsNewBall ();
	}
}
