using System.Collections.Generic;
using System.Linq;
using Leopotam.EcsLite;

public class TowerUpgradeLoadingSystem : IEcsPreInitSystem, IEcsInitSystem
{
    private EcsWorld world;
    private SharedData sharedData;
    private Dictionary<string, int> persistentUpgradeCounts = new Dictionary<string, int>();

    public void PreInit(IEcsSystems systems)
    {
        sharedData = systems.GetShared<SharedData>();
        world = systems.GetWorld();

        var defaultValues = sharedData.Settings.UpgradeSettings.PersistentUpgrades.ToDictionary(upgrade => upgrade.Title, _ => 0);

        // Load saved upgrade counts and Scrap count
        persistentUpgradeCounts = ES3.Load(SaveKeys.PersistentUpgradeCounts, defaultValues); 
        foreach (var upgrade in sharedData.Settings.UpgradeSettings.PersistentUpgrades.Where(upgrade => !persistentUpgradeCounts.ContainsKey(upgrade.Title)))
        {
            persistentUpgradeCounts.Add(upgrade.Title,0);
        }
    }

    public void Init(IEcsSystems systems)
    {
        foreach (PersistentUpgradeBase upgrade in sharedData.Settings.UpgradeSettings.PersistentUpgrades)
        {
            upgrade.Init();
        }
    }
}