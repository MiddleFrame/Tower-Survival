using UnityEngine;

[DefaultExecutionOrder(-1000)]
public class InitData : MonoBehaviour
{
    public GameSettings gameSettings;
    public static SharedData sharedData;
    void Awake()
    {
        DataController.LoadData(gameSettings.currencies);
         sharedData = new SharedData();
        sharedData.InitDefaultValues(gameSettings);
    }

}
