using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public static class DictionaryExtensions
{
    public static bool HasAtLeast(this Dictionary<CurrencyTypes, int> lhs, KeyValuePair<CurrencyTypes, int> rhs)
    {
        if (!lhs.ContainsKey(rhs.Key))
        {
            return false;
        }


        if (lhs[rhs.Key] < rhs.Value)
        {
            return false;
        }


        return true;
    }

    public static void SubtractValues(this Dictionary<CurrencyTypes, int> lhs, KeyValuePair<CurrencyTypes, int> rhs)
    {
        lhs[rhs.Key] -= rhs.Value;
        GameManager.currencyActions[rhs.Key]?.Invoke();
    }

    public static void AddValues(this Dictionary<CurrencyTypes, int> lhs, KeyValuePair<CurrencyTypes, int> rhs)
    {
        lhs[rhs.Key] += rhs.Value;
        GameManager.currencyActions[rhs.Key]?.Invoke();
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