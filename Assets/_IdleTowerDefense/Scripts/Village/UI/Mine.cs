using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class Mine : VillageUIElement
{
    [SerializeField]
    private GameObject _openMine;

    [SerializeField]
    private GameObject _closeMine;

    [SerializeField]
    private TMP_Text _capacity;

    [SerializeField]
    private TMP_Text _limit;

    [SerializeField]
    private TMP_Text _earned;

    [SerializeField]
    private TMP_Text _costLimitUpgrade;

    [SerializeField]
    private TMP_Text _costCapacityUpgrade;

    [Serializable]
    private class MineGrades
    {
        public int limit;
        public int capacity;

        public MineGrades()
        {
            limit = capacity = 1;
        }
    }

    private MineGrades _grades;
    private int _costMine = 2000;
    private int _costGradeLimit = 100;
    private int _costGrade = 300;
    private Coroutine _coroutineGold;
    private Coroutine _coroutineOre;

    private int _ore;
    private int _gold;

    private DateTime _lastView;
    public override void Open()
    {
        gameObject.SetActive(true);
        if (!ES3.Load(SaveKeys.Mine, false))
        {
            _openMine.SetActive(false);
            _closeMine.SetActive(true);
        }
        else
        {
            _openMine.SetActive(true);
            _closeMine.SetActive(false);
            _grades = ES3.Load(SaveKeys.MineGrades, new MineGrades());
            _gold = ES3.Load(SaveKeys.GoldMine, 0);
            _ore = ES3.Load(SaveKeys.OreMine, 0);
            _lastView = ES3.Load(SaveKeys.LastView, DateTime.Now);
            _gold = (_gold + Calculate(5 * _grades.capacity) > 20 * _grades.limit)
                ? 20 * _grades.limit
                : (_gold + Calculate(5 * _grades.capacity));
            _ore = (_ore + Calculate(100 * _grades.capacity) > 1000 * _grades.limit)
                ? (1000 * _grades.limit)
                : (_ore + Calculate(100 * _grades.capacity));
            OpenMine();

            _coroutineGold = StartCoroutine(AddGold());
            _coroutineOre = StartCoroutine(AddOre());
        }
    }
 
    private void OnDisable()
    {
        _lastView = DateTime.Now;
        ES3.Save(SaveKeys.GoldMine, _gold);
        ES3.Save(SaveKeys.LastView, _lastView);
        ES3.Save(SaveKeys.OreMine, _ore);
    }


    private int Calculate(int collectInHour)
    {
        return (int)((DateTime.Now - _lastView).TotalHours * collectInHour);
    }

    public void BuyMine()
    {
        if (!DataController.Currency.SubtractValues(
                new KeyValuePair<CurrencyTypes, int>(CurrencyTypes.Ore, _costMine))) return;
        ES3.Save(SaveKeys.Mine, true);
        ES3.Save(SaveKeys.Ore, DataController.Currency[CurrencyTypes.Ore].value);
        Open();
    }

    public void GradeMine()
    {
        if (!EconomyRules.TryBuyLinearLevel(DataController.Currency, CurrencyTypes.Gold,
                _costGrade, ref _grades.capacity)) return;
        ES3.Save(SaveKeys.MineGrades, _grades);
        UpdateGradeText();
        ES3.Save(SaveKeys.Gold, DataController.Currency[CurrencyTypes.Gold].value);
 
        StopCoroutine(_coroutineGold);
        StopCoroutine(_coroutineOre);
        _coroutineGold = StartCoroutine(AddGold());
        _coroutineOre = StartCoroutine(AddOre());
    }

    public void GradeLimit()
    {
        if (!EconomyRules.TryBuyLinearLevel(DataController.Currency, CurrencyTypes.Gold,
                _costGradeLimit, ref _grades.limit)) return;
        ES3.Save(SaveKeys.MineGrades, _grades);
        UpdateLimitText();
        ES3.Save(SaveKeys.Gold, DataController.Currency[CurrencyTypes.Gold].value);
    }

    public void CollectMine()
    {
        DataController.Currency.AddValues(new KeyValuePair<CurrencyTypes,int>(CurrencyTypes.Gold,_gold));
        DataController.Currency.AddValues(new KeyValuePair<CurrencyTypes,int>(CurrencyTypes.Ore,_ore));
        _ore = 0;
        _gold = 0;
        UpdateEarnedText();
        ES3.Save(SaveKeys.Ore, DataController.Currency[CurrencyTypes.Ore].value);
        ES3.Save(SaveKeys.Gold, DataController.Currency[CurrencyTypes.Gold].value);
    }


    private IEnumerator AddGold()
    {
        float timeForOneGold = 3600f / (5 * _grades.capacity);
        while (true)
        {
            yield return new WaitForSeconds(timeForOneGold);
            if (_gold < 20 * _grades.limit)
                _gold++;
        }
    }

    private IEnumerator AddOre()
    {
        float timeForOneOre= 3600f/(100 * _grades.capacity) ;
        while (true)
        {
            UpdateEarnedText();
            yield return new WaitForSeconds(timeForOneOre);
            if (_ore < 1000 * _grades.limit)
                _ore ++;
        }
    }

    private void OpenMine()
    {
        UpdateGradeText();
        UpdateLimitText();
        UpdateEarnedText();
    }

    private void UpdateGradeText()
    {
        LightweightLocalization.Bind(_costCapacityUpgrade, "mine.gold_cost", _costGrade * _grades.capacity);
        LightweightLocalization.Bind(_capacity, "mine.rate", 5 * _grades.capacity, 100 * _grades.capacity);
    }

    private void UpdateLimitText()
    {
        LightweightLocalization.Bind(_costLimitUpgrade, "mine.gold_cost", _costGradeLimit * _grades.limit);
        LightweightLocalization.Bind(_limit, "mine.limit", 20 * _grades.limit, 1000 * _grades.limit);
    }

    private void UpdateEarnedText()
    {
        LightweightLocalization.Bind(_earned, "mine.available", _gold, _ore);
    }

   
}
