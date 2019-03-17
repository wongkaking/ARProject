using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InsPoint : MonoBehaviour {

	public GameObject Ava;
	public GameObject PrePoint;
	public float MinDis = 3f;
	public float MaxDis = 50;

	private Vector3 v3Ava;

	// Use this for initialization
	void Start () {
		InvokeRepeating ("InsPointFunction", 3f, 10f);
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void InsPointFunction() {
//		获取用户当前位置
		v3Ava = Ava.transform.position;
		float _dis = Random.Range (MinDis, MaxDis);
		Vector2 _pOri = Random.insideUnitCircle;
//		向量归一
		Vector2 _pNor = _pOri.normalized;
//		算出随机点的位置
//		_pNor.x*_dis随机向量的x值
//		_pNor.y*_dis随机向量的y值
		Vector3 _v3Point = new Vector3(v3Ava.x + _pNor.x * _dis, 0, v3Ava.z + _pNor.y * _dis );
//		生成预制体
		GameObject _poiMark = Instantiate (PrePoint, _v3Point, transform.rotation);
	}
}
