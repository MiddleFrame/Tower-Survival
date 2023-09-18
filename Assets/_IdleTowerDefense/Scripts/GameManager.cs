using System;
using System.Collections.Generic;
using System.Linq;
using Leopotam.EcsLite;
using TMPro;
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
    public static Dictionary<CurrencyTypes, Currency> Currency = new Dictionary<CurrencyTypes, Currency>();
    public static Dictionary<CurrencyTypes, TMP_Text> currencyText = new Dictionary<CurrencyTypes, TMP_Text>();
    public int EnemiesKilled;
    public int EarnedOre;
    public bool Paused;

    public LoseMenu _menu;

    [SerializeField]
    private GameObject _setting;

    public static int tier = 0;
    private void Awake()
    {
        Paused = false;
        QualitySettings.vSyncCount = 0;
        Application.targetFrameRate = 60;
        // Init Currency dictionary
        
        Currency[CurrencyTypes.Exp].value = 0;
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

    public void OnRewardx2()
    {
        _menu.OpenLoseMenu(false, EnemiesKilled, EarnedOre*2, 0); 
        Currency.AddValues(
            new KeyValuePair<CurrencyTypes, int>(CurrencyTypes.Ore, GameManager.Instance.EarnedOre));
    }

    public void ReloadGame()
    {
        SaveGame();

        Currency[CurrencyTypes.Exp].value = 0;
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
        ES3.Save(SaveKeys.Ore, Currency[CurrencyTypes.Ore].value);
        ES3.Save(SaveKeys.Gold, Currency[CurrencyTypes.Gold].value);
    }

    public void OpenSetting()
    {
        _setting.SetActive(true);
        Time.timeScale = 0;
    }
    public void CloseSetting()
    {
        _setting.SetActive(false);
        Time.timeScale = 1;
    }
    
    public static void LoadData(List<Currency> currencies)
    {     
        if(Currency.Count>0) return;
        foreach (Currency currency in currencies)
        {
            Currency.Add(currency.type, currency);
        }
        Currency[CurrencyTypes.Gold].value = ES3.Load(SaveKeys.Gold, 0);
        Currency[CurrencyTypes.Ore].value = ES3.Load(SaveKeys.Ore, 0);
    }
}