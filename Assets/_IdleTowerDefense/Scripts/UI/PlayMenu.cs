using System;
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

   private int[] _records;

   private int _currentTier;
   private void Awake()
   {
      _records = new int[9];
      for (int i = 0; i < 9; i++)
      {
         _records[i] = ES3.Load(SaveKeys.EnemiesKilled + "_" + i,0);
      }
   }

   void OnEnable()
   {
      ChangeTier(0);
   }

   public void Play()
   {
      GameManager.tier = _currentTier;
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
      _spawnMultiplier.text = "Enemy spawn delay - "+_data.gameSettings.EnemySpawnSettings[tier].EnemySpawnDelayMultiplier;
      _enemyList.text = "";
      foreach (var enemy in _data.gameSettings.EnemySpawnSettings[tier]._enemyList.EnemySpawns)
      {
         _enemyList.text += enemy.name + '\n';
      }
   }
   
   
}
