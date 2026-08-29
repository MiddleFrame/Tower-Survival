using System.Collections;
using System.Collections.Generic;
using System.Linq;
using TMPro;
using UnityEngine;

public static class DictionaryExtensions
{
    public static bool HasAtLeast(this Dictionary<CurrencyTypes, Currency> lhs, KeyValuePair<CurrencyTypes, int> rhs)
    {
        if (rhs.Value < 0 || !lhs.ContainsKey(rhs.Key))
        {
            return false;
        }


        if (lhs[rhs.Key].value < rhs.Value)
        {
            return false;
        }


        return true;
    }

    public static bool SubtractValues(this Dictionary<CurrencyTypes, Currency> lhs, KeyValuePair<CurrencyTypes, int> rhs)
    {
        if (!lhs.HasAtLeast(rhs))
            return false;

        if (DataController.currencyText.TryGetValue(rhs.Key, out TMP_Text text) && text != null)
            text.StartCoroutine(SmoothNumber(lhs[rhs.Key].value, lhs[rhs.Key].value - rhs.Value, 0.2f, text));
        lhs[rhs.Key].value -= rhs.Value;
        return true;
    }

    public static void AddValues(this Dictionary<CurrencyTypes, Currency> lhs, KeyValuePair<CurrencyTypes, int> rhs)
    {
        if (rhs.Value <= 0 || !lhs.TryGetValue(rhs.Key, out Currency currency))
            return;

        if (DataController.currencyText.TryGetValue(rhs.Key, out TMP_Text text) && text != null)
            text.StartCoroutine(SmoothNumber(currency.value, currency.value + rhs.Value, 0.2f, text));
        lhs[rhs.Key].value += rhs.Value;
    }


    private static IEnumerator SmoothNumber(float start, float end, float time, TMP_Text text)
    {
        float timeAnim = 0;
        float current = start;
        while (timeAnim<time)
        {
            current = (current + (end - start) * Time.unscaledDeltaTime);
            text.text =current.ToString("N0");
            timeAnim += Time.unscaledDeltaTime;
            yield return null;
        }

        text.text = end.ToString("N0");
    }

    public static string ToCommaString(this Dictionary<CurrencyTypes, int> dictionary)
    {
        string returnValue = "";
        var keys = dictionary.Keys.ToList();
        for (int i = 0; i < keys.Count; i++)
        {
            returnValue += $"{dictionary[keys[i]]} {keys[i]}";
            if (i + 1 < keys.Count)
            {
                returnValue += '\n';
            }
        }

        return returnValue;
    }
}

public static class EconomyRules
{
    public static bool TryBuyLinearLevel(Dictionary<CurrencyTypes, Currency> currencies,
        CurrencyTypes currencyType, int baseCost, ref int currentLevel)
    {
        if (baseCost <= 0 || currentLevel < 1)
            return false;

        long calculatedCost = (long)baseCost * currentLevel;
        if (calculatedCost > int.MaxValue)
            return false;
        int cost = (int)calculatedCost;
        if (!currencies.SubtractValues(new KeyValuePair<CurrencyTypes, int>(currencyType, cost)))
            return false;

        currentLevel++;
        return true;
    }
}
