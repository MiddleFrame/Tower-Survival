using System.Collections;
using System.Collections.Generic;
using System.Linq;
using TMPro;
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
        GameManager.currencyText[rhs.Key].StartCoroutine(SmoothNumber( lhs[rhs.Key], lhs[rhs.Key] - rhs.Value, 0.2f, GameManager.currencyText[rhs.Key]));
        lhs[rhs.Key] -= rhs.Value;
    }

    public static void AddValues(this Dictionary<CurrencyTypes, int> lhs, KeyValuePair<CurrencyTypes, int> rhs)
    {
        GameManager.currencyText[rhs.Key].StartCoroutine(SmoothNumber( lhs[rhs.Key], lhs[rhs.Key] + rhs.Value, 0.2f, GameManager.currencyText[rhs.Key]));
        lhs[rhs.Key] += rhs.Value;
    }


    private static IEnumerator SmoothNumber(float start, float end, float time, TMP_Text text)
    {
        float timeAnim = 0;
        float current = start;
        while (timeAnim<time)
        {
            current = (current + (end - start) * Time.deltaTime);
            text.text =current.ToString("N0");
            timeAnim += Time.deltaTime;
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