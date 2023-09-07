using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class CurrencyDisplay : MonoBehaviour
{
    [SerializeField]
    private bool _isUpdateForInterval;
    [SerializeField] private float updateInterval = 0.5f;
    [SerializeField] private CurrencyDisplayElement currencyDisplayElementPrefab;
    [SerializeField] private Transform currencyContainer;

    private float timeSinceLastUpdate = 0;
    private Dictionary<CurrencyTypes, CurrencyDisplayElement> CurrencyDisplayElements = new();

    private void Start()
    {
        foreach (var currencyType in GameManager.Currency.Keys.ToList())
        {
            if(!_isUpdateForInterval&&currencyType == CurrencyTypes.Exp) continue;
            CurrencyDisplayElement currencyDisplayElement = Instantiate(currencyDisplayElementPrefab, currencyContainer);
            CurrencyDisplayElements.Add(currencyType, currencyDisplayElement);
            currencyDisplayElement.TextObject.text = $"<b>{currencyType.ToString()}</b>: {GameManager.Currency[currencyType].ToString()}";
            if (!_isUpdateForInterval)
                GameManager.currencyActions[currencyType] += () => 
                    CurrencyDisplayElements[currencyType].TextObject.text =currencyType+": "+ GameManager.Currency[currencyType].ToString();
        }
    }

    private void Update()
    {
        if (!_isUpdateForInterval) return;
        timeSinceLastUpdate += Time.deltaTime;
        if (!(timeSinceLastUpdate > updateInterval)) return;

        foreach (KeyValuePair<CurrencyTypes, CurrencyDisplayElement> entry in CurrencyDisplayElements)
        {
            entry.Value.TextObject.text = $"<b>{entry.Key.ToString()}</b>: {GameManager.Currency[entry.Key]:N0}";
        }
    }
}