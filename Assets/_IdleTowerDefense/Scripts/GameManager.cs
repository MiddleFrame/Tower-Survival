using System;
using System.Collections.Generic;
using System.Linq;
using Leopotam.EcsLite;
using UnityEngine;
using UnityEngine.SceneManagement;

public enum CurrencyTypes
{
    Exp,
    Ore,
    Gold
}

public class GameManager : Singleton<GameManager>
{
    public EcsWorld World;
    public static Dictionary<CurrencyTypes, int> Currency = new Dictionary<CurrencyTypes, int>();
    public static Dictionary<CurrencyTypes, Action> currencyActions = new Dictionary<CurrencyTypes, Action>();
    public int EnemiesKilled = 0;
    public int EarnedOre = 0;
    public bool Paused = false;

    public LoseMenu _menu;

    public static int tier = 0;
    private void Awake()
    {
        Paused = false;
        QualitySettings.vSyncCount = 0;
        Application.targetFrameRate = 60;
        // Init Currency dictionary
   

        LoadData();
    }

    public void SetGameSpeed(float newSpeed)
    {
        Time.timeScale = newSpeed;
    }

    public void OnTowerKilled()
    {
        Paused = true;

        // Cleanup all views
        var views = new List<Component>();
        views.AddRange(FindObjectsOfType<ProjectileView>());
        views.AddRange(FindObjectsOfType<EnemyView>());
        views.Add(FindObjectOfType<TowerView>());

        foreach (Component view in views)
        {
            Destroy(view.gameObject);
        }

        // Check for new high score and save if necessary
        bool isNewHighScore = false;
        int highScore = ES3.Load(SaveKeys.EnemiesKilled+"_"+tier,0);
        if (highScore < EnemiesKilled)
        {
            isNewHighScore = true;
            ES3.Save(SaveKeys.EnemiesKilled+"_"+tier, EnemiesKilled);
        }

        _menu.OpenLoseMenu(isNewHighScore, EnemiesKilled, EarnedOre, 0);
    }

    public void ReloadGame()
    {
        SaveGame();

        Currency[CurrencyTypes.Exp] = 0;
        EnemiesKilled = 0;
        EarnedOre = 0;
        _menu.Close();
        SceneManager.LoadScene("Game");
        Paused = false;
    }

    public void ExitToMainMenu()
    {
        Time.timeScale = 1;
        SceneManager.LoadScene("Menu");
        SaveGame();
    }


    public override void OnApplicationQuit()
    {
        base.OnApplicationQuit();
        SaveGame();
    }

    private void SaveGame()
    {
        ES3.Save(SaveKeys.Ore, Currency[CurrencyTypes.Ore]);
        ES3.Save(SaveKeys.Gold, Currency[CurrencyTypes.Gold]);
    }

    public static void LoadData()
    {     
        List<CurrencyTypes> currencies = ((CurrencyTypes[]) Enum.GetValues(typeof(CurrencyTypes))).ToList();
        foreach (CurrencyTypes currency in currencies)
        {
            Currency.Add(currency, 0);
            currencyActions.Add(currency, null);
        }
        Currency[CurrencyTypes.Gold] = ES3.Load(SaveKeys.Gold, 0);
        Currency[CurrencyTypes.Ore] = ES3.Load(SaveKeys.Ore, 0);
    }
}