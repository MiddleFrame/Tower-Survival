using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class Mine : MonoBehaviour
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

    private void OnEnable()
    {
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
        int ore = GameManager.Currency[CurrencyTypes.Ore].value;
        if (ore < _costMine) return;
        GameManager.Currency.SubtractValues(new KeyValuePair<CurrencyTypes, int>(CurrencyTypes.Ore, _costMine));
        ES3.Save(SaveKeys.Mine, true);
        ES3.Save(SaveKeys.Ore, GameManager.Currency[CurrencyTypes.Ore].value);
        OnEnable();
    }

    public void GradeMine()
    {
        int gold = ES3.Load(SaveKeys.Gold, 0);
        if (gold < _costGrade * _grades.capacity) return;
        _grades.capacity++;
        ES3.Save(SaveKeys.MineGrades, _grades);
        UpdateGradeText();
        GameManager.Currency.SubtractValues(new KeyValuePair<CurrencyTypes, int>(CurrencyTypes.Gold, _costGrade * _grades.capacity));
        ES3.Save(SaveKeys.Gold, GameManager.Currency[CurrencyTypes.Gold].value);
 
        StopCoroutine(_coroutineGold);
        StopCoroutine(_coroutineOre);
        _coroutineGold = StartCoroutine(AddGold());
        _coroutineOre = StartCoroutine(AddOre());
    }

    public void GradeLimit()
    {
        int gold = ES3.Load(SaveKeys.Gold, 0);
        if (gold < _costGradeLimit * _grades.limit) return;
        _grades.limit++;
        ES3.Save(SaveKeys.MineGrades, _grades);
        UpdateLimitText();
        GameManager.Currency.SubtractValues(new KeyValuePair<CurrencyTypes, int>(CurrencyTypes.Gold, _costGradeLimit * _grades.limit));
        ES3.Save(SaveKeys.Gold, GameManager.Currency[CurrencyTypes.Gold].value);
    }

    public void CollectMine()
    {
        GameManager.Currency.AddValues(new KeyValuePair<CurrencyTypes,int>(CurrencyTypes.Gold,_gold));
        GameManager.Currency.AddValues(new KeyValuePair<CurrencyTypes,int>(CurrencyTypes.Ore,_ore));
        _ore = 0;
        _gold = 0;
        _earned.text = $"Now available <color=yellow>{_gold} gold</color> and <color=#727272>{_ore} ore</color>";
        ES3.Save(SaveKeys.Ore, GameManager.Currency[CurrencyTypes.Ore].value);
        ES3.Save(SaveKeys.Gold, GameManager.Currency[CurrencyTypes.Gold].value);
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
            _earned.text = $"Now available <color=yellow>{_gold} gold</color> and <color=#727272>{_ore} ore</color>";
            yield return new WaitForSeconds(timeForOneOre);
            if (_ore < 1000 * _grades.limit)
                _ore ++;
        }
    }

    private void OpenMine()
    {
        UpdateGradeText();
        UpdateLimitText();
        _earned.text = $"Now available <color=yellow>{_gold} gold</color> and <color=#727272>{_ore} ore</color>";
    }

    private void UpdateGradeText()
    {
        _costCapacityUpgrade.text = _costGrade * _grades.capacity + " Gold";
        _capacity.text =
            $"It's mining <color=yellow>{5 * _grades.capacity} gold</color> and <color=#727272>{100 * _grades.capacity} ore</color> in one hour";
    }

    private void UpdateLimitText()
    {
        _costLimitUpgrade.text = _costGradeLimit * _grades.limit + " Gold";
        _limit.text =
            $"The limit is <color=yellow>{20 * _grades.limit} gold</color> and <color=#727272>{1000 * _grades.limit} ore</color >";
    }
}