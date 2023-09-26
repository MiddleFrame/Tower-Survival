using TMPro;
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
   private InitData _data;
   [SerializeField]
   private GameObject _loadingAnim;

   private int[] _records;

   private static int _currentTier;
   private void Awake()
   {
      HorizontalSelector.rewardedSpeed = false;
      _records = new int[9];
      for (int i = 0; i < 9; i++)
      {
         _records[i] = ES3.Load(SaveKeys.EnemiesKilled + "_" + i,0);
      }
      if (Yodo1.MAS.Yodo1U3dRewardAd.GetInstance().IsLoaded()) _loadingAnim.SetActive(false);
         
   }

   void OnEnable()
   {
      ChangeTier(0);
   }

   public static void Play()
   {
      DataController.tier = _currentTier;
      SceneManager.LoadScene("Game");
   }
   
   private void ChangeTier(int tier)
   {
      _currentTier = tier;
      _tier.text = $"Tier {tier+1}";
      _toBattle.interactable = _records[_currentTier]>=_data.gameSettings.EnemySpawnSettings[tier].RecordToOpen;
      _oreMultiplier.text = "ore - x"+_data.gameSettings.EnemySpawnSettings[tier].OreMultiplier;
      _enemyKilled.text = "High score - "+_records[tier];
      _damageMultiplier.text = "Enemy damage - "+_data.gameSettings.EnemySpawnSettings[tier].EnemyDamageMultiplier;
      _healthMultiplier.text = "Enemy health - "+_data.gameSettings.EnemySpawnSettings[tier].EnemyHealthMultiplier;
      _spawnMultiplier.text = "Enemy start spawn delay - "+_data.gameSettings.EnemySpawnSettings[tier].stages[0].enemySpawnRate;
      _enemyList.text = "";
      foreach (var enemy in _data.gameSettings.EnemySpawnSettings[tier]._enemyList.EnemySpawns)
      {
         _enemyList.text += enemy.name + '\n';
      }
   }

   public void ShowAd()
   {
      AddManager.ShowRewarded(0);
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
