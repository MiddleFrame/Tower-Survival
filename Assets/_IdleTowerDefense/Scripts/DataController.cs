using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;

public enum CurrencyTypes
{
    Exp,
    Ore,
    Gold
}

public class DataController : Singleton<DataController>
{
    public static Dictionary<CurrencyTypes, Currency> Currency = new Dictionary<CurrencyTypes, Currency>();
    public static Dictionary<CurrencyTypes, TMP_Text> currencyText = new Dictionary<CurrencyTypes, TMP_Text>();
    public int EnemiesKilled;
    public int EarnedOre;
    public bool Paused;

    public LoseMenu _menu;

    [SerializeField]
    private GameObject _setting;
    
    [Header("Lose Flow")]
    [SerializeField] private float _towerDeathSlowMotionScale = 0.2f;
    [SerializeField] private float _loseMenuDelay = 0.85f;

    public static int tier = 0;
    public static bool IsGameplayEnding { get; private set; }
    private bool _towerDeathSequenceStarted;

    private void Awake()
    {
        Paused = false;
        IsGameplayEnding = false;
        _towerDeathSequenceStarted = false;
        Time.timeScale = 1f;
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
        if (_towerDeathSequenceStarted)
            return;

        StartCoroutine(TowerDeathSequence());
    }

    public void Surrender()
    {
        IsGameplayEnding = true;
        EndGame();
    }

    private IEnumerator TowerDeathSequence()
    {
        _towerDeathSequenceStarted = true;
        IsGameplayEnding = true;
        Time.timeScale = Mathf.Clamp(_towerDeathSlowMotionScale, 0.01f, 1f);
        yield return new WaitForSecondsRealtime(Mathf.Max(0f, _loseMenuDelay));

        Time.timeScale = 1f;
        EndGame();
    }

    private void EndGame()
    {
        Paused = true;
        CleanupGameplayViews();

        bool isNewHighScore = false;
        int highScore = ES3.Load(SaveKeys.EnemiesKilled+"_"+tier,0);
        if (highScore < EnemiesKilled)
        {
            isNewHighScore = true;
            ES3.Save(SaveKeys.EnemiesKilled+"_"+tier, EnemiesKilled);
        }

        _menu.OpenLoseMenu(isNewHighScore, EnemiesKilled, EarnedOre, 0);
    }

    private void CleanupGameplayViews()
    {
        GameplayViewPools pools = InitData.sharedData?.ViewPools;

        foreach (var projectile in ProjectileView.GetActiveViewsSnapshot())
        {
            if (projectile != null)
            {
                if (pools != null) pools.Release(projectile);
                else Destroy(projectile.gameObject);
            }
        }

        foreach (var enemy in EnemyView.GetActiveViewsSnapshot())
        {
            if (enemy != null)
            {
                if (pools != null) pools.Release(enemy);
                else Destroy(enemy.gameObject);
            }
        }
    }

    public void OnRewardx2()
    {
        _menu.OpenLoseMenu(false, EnemiesKilled, EarnedOre*2, 0); 
        Currency.AddValues(
            new KeyValuePair<CurrencyTypes, int>(CurrencyTypes.Ore, DataController.Instance.EarnedOre));
    }

    public void ReloadGame()
    {
        IsGameplayEnding = false;
        _towerDeathSequenceStarted = false;
        SaveGame();

        Currency[CurrencyTypes.Exp].value = 0;
        EnemiesKilled = 0;
        EarnedOre = 0;
        _menu.Close();

        if (SceneTransitionController.Instance != null)
            SceneTransitionController.Instance.LoadScene("Game");
        else
            SceneManager.LoadScene("Game");

        Paused = false;
    }

    public void ExitToMainMenu()
    {
        IsGameplayEnding = true;
        Paused = true;
        Time.timeScale = 1;

        if (SceneTransitionController.Instance != null)
            SceneTransitionController.Instance.LoadScene("Menu");
        else
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
        Paused = true;
    }
    public void CloseSetting()
    {
        _setting.SetActive(false);
        Paused = false;
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
