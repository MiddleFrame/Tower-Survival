using System;
using System.Collections.Generic;
using UnityEngine;

public class TemporaryUpgradeBase : ScriptableObject
{
    [Header("Base Values")]
    public string Title = "Default Title";

    public int maxUpgradeCount;

    public int costUpgradeMultiplier;

    public int window;
    protected float value
    {
        set => onUpgrade?.Invoke(value);
    }


    public Action<float> onUpgrade;
    
    public virtual void Init()
    {
    }

    public KeyValuePair<CurrencyTypes, int> GetCost()
    {
        return new KeyValuePair<CurrencyTypes, int>(
            CurrencyTypes.Exp, (TemporaryUpgradeManager.Instance.TemporaryUpgradeCounts[Title] + 1)*costUpgradeMultiplier
        );
    }

    public StatusItem CanUpgrade()
    {
        return TemporaryUpgradeManager.Instance.TemporaryUpgradeCounts[Title] == maxUpgradeCount? StatusItem.Completed 
            : GameManager.Currency.HasAtLeast(GetCost())?StatusItem.None:StatusItem.Locked;
    }

    public virtual void Upgrade()
    {
    }

    public virtual void UpdateStartValue()
    {
    }
}