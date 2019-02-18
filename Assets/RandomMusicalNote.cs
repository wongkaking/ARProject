using System.Collections;
using System.Collections.Generic;
using System.Threading;
using UnityEngine;
public class RandomMusicalNote
{
    private string path;
    private int sum;
    private int j = 0;
    public float monment=0;
    public Dictionary<int, string> ItemMsg { get; private set; }
    /// <summary>
    /// 存放音符
    /// </summary>
    private Dictionary<string, int> _object = new Dictionary<string, int>();
    public Bomb bomb;
    public RandomMusicalNote()
    {
        sum = 0;
        ItemMsg = new Dictionary<int, string>();
        bomb = new Bomb();
    }
    /// <summary>
    /// 随机音符
    /// </summary>
    public virtual void RandomNumber()
    {
        //随机生成3~5个音符
        int random = Random.Range(3,6);
        switch (random)
        {
            case 3:
                //生成21
                RandomSameNumber(2);
                RandomType();
                _object.Add(path, 1);
                LoadPrefab(1, path);
                Debug.Log("生成21");
                break;
            case 4:
                int _random = Random.Range(0, 2);
                //生成31
                if (_random > 0 && _random <= 1)
                {
                    RandomSameNumber(3);
                    RandomType();
                    _object.Add(path, 1);
                    LoadPrefab(1, path);
                    Debug.Log("生成31");
                }
                //生成211
                else
                {
                    RandomSameNumber(2);
                    RandomType();
                    _object.Add(path, 1);
                    LoadPrefab(1, path);
                    RandomType();
                    _object.Add(path, 1);
                    LoadPrefab(1, path);
                    Debug.Log("生成211");
                }
                break;
            case 5:
                int _random2 = Random.Range(0, 3);
                //生成41
                if (_random2 > 0 && _random2 <= 1)
                {
                    RandomSameNumber(4);
                    RandomType();
                    _object.Add(path, 1);
                    LoadPrefab(1, path);
                    Debug.Log("生成41");
                }
                //生成311
                else if (_random2 > 1 && _random2 <= 2)
                {
                    RandomSameNumber(3);
                    RandomType();
                    _object.Add(path, 1);
                    LoadPrefab(1, path);
                    RandomType();
                    _object.Add(path, 1);
                    LoadPrefab(1, path);
                    Debug.Log("生成311");
                }
                //生成2111
                else
                {
                    RandomSameNumber(2);
                    RandomType();
                    _object.Add(path, 1);
                    LoadPrefab(1, path);
                    RandomType();
                    _object.Add(path, 1);
                    LoadPrefab(1, path);
                    RandomType();
                    _object.Add(path, 1);
                    LoadPrefab(1, path);
                    Debug.Log("生成2111");
                }
                break;
        }
        //随机炸弹
        bomb.RandomBomb();
        _object.Clear();
        Reset();
    }
    /// <summary>
    /// 随机相同的音符
    /// </summary>
    /// <param name="random"></param>
    void RandomSameNumber(int random)
    {
        //int random;
        switch (random)
        {
            case 2:
                RandomType();
                _object.Add(path, 2);
                LoadPrefab(2,path);
                Debug.Log("生成2个相同");
                break;
            case 3:
                RandomType();
                _object.Add(path, 3);
                LoadPrefab(3, path);
                Debug.Log("生成3个相同");
                break;
            case 4:
                RandomType();
                _object.Add(path, 4);
                LoadPrefab(4, path);
                Debug.Log("生成4个相同");
                break;
        }
    }
    /// <summary>
    /// 音符的种类，如果重复再随机一遍
    /// </summary>
    void RandomType()
    {
        int random = Random.Range(0, 5);
        switch (random)

        {
            case 0:
                //加载第一个
                //TypeLoad("第1种音符");
                TypeLoad("Prefab3D/Type_1");
                break;
            case 1:
                //加载第二个
                //TypeLoad("第2种音符");
                TypeLoad("Prefab3D/Type_2");
                break;
            case 2:
                //加载第三个
                //TypeLoad("第3种音符");
                TypeLoad("Prefab3D/Type_3");
                break;
            case 3:
                //加载第四个
                //TypeLoad("第4种音符");
                TypeLoad("Prefab3D/Type_4");
                break;
            case 4:
                //加载第五个
                //TypeLoad("第5种音符");
                TypeLoad("Prefab3D/Type_5");
                break;
        }
        
    }
    /// <summary>
    /// 读取音符
    /// </summary>
    /// <param name="_path"></param>
    void TypeLoad(string _path)
    {
        if (_object.ContainsKey(_path))
        {
            RandomType();
        }
        else
        {
            path = _path;
        }
    }
    /// <summary>
    /// Debug消息
    /// </summary>
    public virtual void LogMessage()
    {
        foreach(var i in _object)
        {
            Debug.Log(i.Key+"有:"+i.Value+"个");
        }
        foreach (var item in ItemMsg)
        {
            Debug.Log(item.Key + "----" + item.Value);  
        }
    }
    /// <summary>
    /// 加载预制体
    /// </summary>
    /// <param name="i"></param>
    /// <param name="path"></param>
    private void LoadPrefab(int i,string path)
    {
        for (int j = 0; j < i; j++)
        {
            //Thread.Sleep(200);
            Debug.Log(path);
            GameObject game = Object.Instantiate(Resources.Load<GameObject>(path));

            //mono.StartCoroutine(LaterLoad());
            game.name = "item_" + sum;
            sum++;
            ItemMsg.Add(sum, path);
            //Thread.Sleep(1000);
        }

    }
    /// <summary>
    /// 重置位置
    /// </summary>
    void Reset()
    {
        //ItemMsg.Clear();
        //sum = 0;
        //RandomNumber();
    }
    /// <summary>
    /// 析构函数
    /// </summary>
    ~RandomMusicalNote()
    {
        path = null;
        _object.Clear();
        _object = null;
    }
    IEnumerator LaterLoad()
    {
        GameObject game = Object.Instantiate(Resources.Load<GameObject>(path));
        game.name = "item_" + sum;
        sum++;
        ItemMsg.Add(sum, game.name);
        yield return new WaitForSeconds(0.8f);
        
    }
}