using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PointEvent : MonoBehaviour {

	//	储存pet预制体
	private GameObject[] Pets;

	public GameObject[] Balls;
	public GameObject[] Foods;
//	public GameObject Pet;

	private void Awake() 
	{
//		直接从文件夹中读取预制体，放入数组
		Balls = Resources.LoadAll<GameObject> ("Ball");
		Foods = Resources.LoadAll<GameObject> ("Food");
		Pets = Resources.LoadAll<GameObject>("Pets");
	}

	// Use this for initialization
	void Start () 
	{
		int _randomEvent = Random.Range(0, 3);   
		if (_randomEvent==0)
		{
			InsPet();
		}else if (_randomEvent == 1)
		{
			InsBall();
		}else if (_randomEvent == 2)
		{
			InsFood();
		}
	}
	
	// Update is called once per frame
	void Update () {
		
	}
		
	//	生成宠物预制体
	private void InsPet() 
	{
		int _petIndex = Random.Range (0, Pets.Length);
		GameObject _pet = Instantiate(Pets[_petIndex], transform.position, transform.rotation);
//		将下标传递给脚本
		_pet.GetComponent<FindPets> ().PetIndex = _petIndex;
	}

//	精灵球
	private void InsBall()
	{
		int _ballIndex = Random.Range ( 0, Balls.Length );
		GameObject _ball=Instantiate( Balls[_ballIndex], transform.position + new Vector3(0, 5f, 0), transform.rotation );
		_ball.transform.localEulerAngles=new Vector3( -30f, 0, 0);

//		增加碰撞器
		_ball.AddComponent<SphereCollider>();
		_ball.GetComponent<SphereCollider> ().isTrigger = true;
		_ball.GetComponent<SphereCollider> ().radius = 0.011f;

//		增加刚体
		_ball.AddComponent<Rigidbody>();
		_ball.GetComponent<Rigidbody> ().constraints = RigidbodyConstraints.FreezeAll;
		_ball.AddComponent<MoveEffect> ();
		_ball.AddComponent<FindBall> ();
	}

//	食物
	private void InsFood()
	{
		int _foodIndex = Random.Range (0, Foods.Length);
		GameObject _food = Instantiate(Foods[_foodIndex], transform.position + new Vector3(0, 5f, 0), transform.rotation);

//		增加碰撞器
		_food.AddComponent<BoxCollider>();
		_food.GetComponent<BoxCollider>().isTrigger = true;
		_food.GetComponent<BoxCollider>().center = new Vector3(0,0,0);
		_food.GetComponent<BoxCollider>().size = new Vector3(0.33f,0.30f,0.33f);

//		增加刚体
		_food.AddComponent<Rigidbody>();
		_food.GetComponent<Rigidbody>().constraints = RigidbodyConstraints.FreezeAll;
		_food.AddComponent<MoveEffect>();
		_food.AddComponent<FindFood>();
	}
}
