using UnityEngine;

public class SharedData 
{
    public GameSettings Settings { get; private set; }

    public TowerView towerView;
    public GameplayViewPools ViewPools { get; private set; }

    public void InitDefaultValues(GameSettings inputSettings)
    {
        Settings = inputSettings;
    }

    public void SetViewPools(GameplayViewPools viewPools)
    {
        ViewPools = viewPools;
    }
}
