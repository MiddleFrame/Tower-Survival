using TMPro;
using Managers;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class PlayMenu : MonoBehaviour
{
   [SerializeField]
   private TextMeshProUGUI _tier;
   [SerializeField]
   private TextMeshProUGUI _oreMultiplier;
   [SerializeField]
   private TextMeshProUGUI _enemyKilled;
   [SerializeField]
   private TextMeshProUGUI _damageMultiplier;
   [SerializeField]
   private TextMeshProUGUI _healthMultiplier;
   [SerializeField]
   private TextMeshProUGUI _spawnMultiplier;

   [SerializeField]
   private TMP_Text _enemyList;

   [SerializeField]
   private Button _toBattle;

   [SerializeField]
   private Button _rewardButton;
   
   [SerializeField]
   private InitData _data;
   [SerializeField]
   private GameObject _loadingAnim;   

   [SerializeField]
   private GameObject _playRewardPrompt;
   
   [SerializeField]
   private GameObject _lockedTierObject;

   private static PlayMenu instance;

   private int[] _records;

   private static int _currentTier;
   private void Awake()
   {
      instance = this;
      HorizontalSelector.rewardedSpeed = false;
      _records = new int[9];
      for (int i = 0; i < 9; i++)
      {
         _records[i] = ES3.Load(SaveKeys.EnemiesKilled + "_" + i,0);
      }
      RefreshRewardedButton(AddManager.IsRewardedAvailable);
   }

   void OnEnable()
   {
      LightweightLocalization.LanguageChanged += RefreshLanguage;
      AddManager.RewardedAvailabilityChanged += RefreshRewardedButton;
      InAppInitializer.RemoveAdsActivated += OnRemoveAdsActivated;
      RefreshRewardedButton(AddManager.IsRewardedAvailable);
      ChangeTier(0);
   }

   private void OnDisable()
   {
      LightweightLocalization.LanguageChanged -= RefreshLanguage;
      AddManager.RewardedAvailabilityChanged -= RefreshRewardedButton;
      InAppInitializer.RemoveAdsActivated -= OnRemoveAdsActivated;
   }

   private void RefreshLanguage()
   {
      ChangeTier(_currentTier);
   }

   public static void Play()
   {
      DataController.tier = _currentTier;
      instance.gameObject.SetActive(false);
      instance.LoadScene();
      
   }

   private void LoadScene()
   {
      if (SceneTransitionController.Instance != null)
      {
         SceneTransitionController.Instance.LoadScene("Game");
         return;
      }

      SceneManager.LoadScene("Game");
      
   }
   
   private void ChangeTier(int tier)
   {
      _currentTier = tier;
      LightweightLocalization.Bind(_tier, "game.tier", tier + 1);
      //_toBattle.interactable = _records[_currentTier]>=_data.gameSettings.EnemySpawnSettings[tier].RecordToOpen;
      _lockedTierObject.SetActive(!(_records[_currentTier]>=_data.gameSettings.EnemySpawnSettings[tier].RecordToOpen));
      LightweightLocalization.Bind(_oreMultiplier, "game.ore_multiplier", _data.gameSettings.EnemySpawnSettings[tier].OreMultiplier);
      LightweightLocalization.Bind(_enemyKilled, "game.high_score", _records[tier]);
      LightweightLocalization.Bind(_damageMultiplier, "game.enemy_damage", _data.gameSettings.EnemySpawnSettings[tier].EnemyDamageMultiplier);
      LightweightLocalization.Bind(_healthMultiplier, "game.enemy_health", _data.gameSettings.EnemySpawnSettings[tier].EnemyHealthMultiplier);
      LightweightLocalization.Bind(_spawnMultiplier, "game.spawn_delay", _data.gameSettings.EnemySpawnSettings[tier].stages[0].enemySpawnRate);
      _enemyList.text = "";
      foreach (var enemy in _data.gameSettings.EnemySpawnSettings[tier]._enemyList.EnemySpawns)
      {
         _enemyList.text += LightweightLocalization.FromSource(enemy.name) + '\n';
      }
      LightweightLocalization.SetDisplayText(_enemyList, _enemyList.text);
   }

   public void ShowAd()
   {
      AddManager.ShowRewarded(0);
   }

   public void RequestPlay()
   {
      if (InAppInitializer.isRemoveAds)
      {
         HorizontalSelector.rewardedSpeed = true;
         Play();
         return;
      }

      if (_playRewardPrompt != null)
         _playRewardPrompt.SetActive(true);
   }

   private void OnRemoveAdsActivated()
   {
      RefreshRewardedButton(true);

      if (_playRewardPrompt == null || !_playRewardPrompt.activeSelf)
         return;

      _playRewardPrompt.SetActive(false);
      HorizontalSelector.rewardedSpeed = true;
      Play();
   }

   private void RefreshRewardedButton(bool isAvailable)
   {
      if (_rewardButton != null)
         _rewardButton.interactable = isAvailable;

      if (_loadingAnim != null)
         _loadingAnim.SetActive(!isAvailable);
   }

   public void NextTier()
   {
      if(_records[_currentTier]>=_data.gameSettings.EnemySpawnSettings[_currentTier].RecordToOpen)
         ChangeTier(_currentTier+1);
   }

   public void PrevTier()
   {
      if(_currentTier>0)
         ChangeTier(_currentTier-1);
   }
   
}
