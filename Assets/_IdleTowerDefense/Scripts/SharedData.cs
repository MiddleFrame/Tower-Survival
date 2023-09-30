using UnityEngine;

public class SharedData 
{
    public GameSettings Settings { get; private set; }

    public GameObject towerView;
    public void InitDefaultValues(GameSettings inputSettings)
    {
        Settings = inputSettings;
    }
}
