using UnityEngine;

public class SharedData 
{
    public GameSettings Settings { get; private set; }

    public TowerView towerView;
    public GameplayViewPools ViewPools { get; private set; }
    public DayNightController DayNightController { get; private set; }
    public CombatSpellController CombatSpells { get; private set; }
    public TutorialRunController Tutorial { get; private set; }
    public float EnemySpawnRadius { get; private set; }

    public void InitDefaultValues(GameSettings inputSettings)
    {
        Settings = inputSettings;
        EnemySpawnRadius = inputSettings.EnemySpawnRadius;
    }

    public void SetViewPools(GameplayViewPools viewPools)
    {
        ViewPools = viewPools;
    }

    public void SetDayNightController(DayNightController dayNightController)
    {
        DayNightController = dayNightController;
    }

    public void SetCombatSpells(CombatSpellController combatSpells)
    {
        CombatSpells = combatSpells;
    }

    public void SetTutorial(TutorialRunController tutorial)
    {
        Tutorial = tutorial;
    }

    public void SetEnemySpawnRadius(float radius)
    {
        EnemySpawnRadius = radius;
    }
}
