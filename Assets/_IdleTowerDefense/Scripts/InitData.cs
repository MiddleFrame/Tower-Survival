using UnityEngine;

public class InitData : MonoBehaviour
{
    public GameSettings gameSettings;
    public static SharedData sharedData;
    void Awake()
    {
        GameManager.LoadData();
         sharedData = new SharedData();
        sharedData.InitDefaultValues(gameSettings);
    }

}
