using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;

public enum CurrencyTypes
{
    Exp,
    Ore,
    Gold,
    Crystals
}

public class DataController : Singleton<DataController>
{
    public static Dictionary<CurrencyTypes, Currency> Currency = new Dictionary<CurrencyTypes, Currency>();
    public static Dictionary<CurrencyTypes, TMP_Text> currencyText = new Dictionary<CurrencyTypes, TMP_Text>();
    public int EnemiesKilled;
    public int EarnedCrystals;
    public bool Paused;

    public LoseMenu _menu;

    [SerializeField]
    private Animator _setting;
    
    [Header("Lose Flow")]
    [SerializeField] private float _towerDeathSlowMotionScale = 0.2f;
    [SerializeField] private float _loseMenuDelay = 0.85f;

    public static int tier = 0;
    public static bool IsGameplayEnding { get; private set; }
    private bool _towerDeathSequenceStarted;
    private bool _doubleRewardApplied;

    private void Awake()
    {
        Paused = false;
        IsGameplayEnding = false;
        _towerDeathSequenceStarted = false;
        _doubleRewardApplied = false;
        Time.timeScale = 1f;
        QualitySettings.vSyncCount = 0;
        // Init Currency dictionary
        
        Currency[CurrencyTypes.Exp].value = 0;
    }

    public void SetGameSpeed(float newSpeed)
    {
        if (TutorialRunController.Instance != null && TutorialRunController.Instance.LocksGameSpeed)
            return;

        Time.timeScale = newSpeed;
        ES3.Save(SaveKeys.GameSpeed, newSpeed);
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

        _menu.OpenLoseMenu(isNewHighScore, EnemiesKilled, EarnedCrystals, 0);
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
        if (_doubleRewardApplied)
            return;

        _doubleRewardApplied = true;
        Currency.AddValues(
            new KeyValuePair<CurrencyTypes, int>(CurrencyTypes.Crystals, DataController.Instance.EarnedCrystals));
        ES3.Save(SaveKeys.Crystals, Currency[CurrencyTypes.Crystals].value);
        _menu.ApplyDoubleReward(EnemiesKilled, EarnedCrystals * 2, 0);
    }

    public void ReloadGame()
    {
        IsGameplayEnding = false;
        _towerDeathSequenceStarted = false;
        _doubleRewardApplied = false;
        SaveGame();

        Currency[CurrencyTypes.Exp].value = 0;
        EnemiesKilled = 0;
        EarnedCrystals = 0;
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
        TutorialProgress.EndSession();
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
        ES3.Save(SaveKeys.Crystals, Currency[CurrencyTypes.Crystals].value);
    }

    public void OpenSetting()
    {
        _setting.gameObject.SetActive(true);
        _setting.Play("Fade In");
        Time.timeScale = 0;
        Paused = true;
    }
    public void CloseSetting()
    {
        _setting.gameObject.SetActive(false);
        Paused = false;
        Time.timeScale = TutorialRunController.Instance != null
                         && TutorialRunController.Instance.LocksGameSpeed
            ? 1f
            : ES3.Load(SaveKeys.GameSpeed, 1f);
    }
    
    public static void LoadData(List<Currency> currencies)
    {     
        if (Currency.Count == 0)
        {
            foreach (Currency currency in currencies)
            {
                Currency.Add(currency.type, new Currency
                {
                    type = currency.type,
                    value = currency.value,
                    sprite = currency.sprite
                });
            }
        }

        EnsureCurrency(CurrencyTypes.Exp, currencies);
        EnsureCurrency(CurrencyTypes.Ore, currencies);
        EnsureCurrency(CurrencyTypes.Gold, currencies);
        EnsureCurrency(CurrencyTypes.Crystals, currencies);

        Currency[CurrencyTypes.Gold].value = ES3.Load(SaveKeys.Gold, 0);
        Currency[CurrencyTypes.Ore].value = ES3.Load(SaveKeys.Ore, 0);
        Currency[CurrencyTypes.Crystals].value = ES3.Load(SaveKeys.Crystals, 0);
    }

    private static void EnsureCurrency(CurrencyTypes type, List<Currency> authoredCurrencies)
    {
        if (Currency.ContainsKey(type))
            return;

        Currency authored = authoredCurrencies.Find(currency => currency.type == type);
        Currency[type] = new Currency
        {
            type = type,
            value = authored != null ? authored.value : 0,
            sprite = authored != null ? authored.sprite : null
        };
    }
}
