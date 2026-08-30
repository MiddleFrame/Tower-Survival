using System.Collections.Generic;
using Managers;
using UnityEngine;
using UnityEngine.Events;
using TMPro;

public class HorizontalSelector : MonoBehaviour
{
    [Header("Settings")]
    public bool invertAnimation;
    public bool loopSelection;

    [HideInInspector]
    public int index;

    public string selectorTag = "Default";

    [Header("Indicators")]
    public bool enableIndicators = true;

    [SerializeField]
    private Transform indicatorParent;

    [SerializeField]
    private HorizontalSelectorIndicator indicatorPrefab;

    [Header("Items")]
    public List<Item> itemList = new();

    [SerializeField]
    private TextMeshProUGUI _label;

    [SerializeField]
    private Animator _selectorAnimator;

    private string _newItemTitle;
    private readonly List<HorizontalSelectorIndicator> _indicators = new();
    private readonly List<float> _itemSpeeds = new();
    private bool _tutorialLocked;

    public static bool rewardedSpeed;
    
    [System.Serializable]
    public class Item
    {
        public string itemTitle = "Item Title";
        public UnityEvent onValueChanged = new();
    }

    private void Start()
    {
        itemList.Clear();
        _itemSpeeds.Clear();
        CreateSpeedItem(0f);

        float maxSpeed=1;
        if (rewardedSpeed)
            maxSpeed += 1;
        if (InAppInitializer.isBuyGameSpeed)
            maxSpeed += 1;
        for (float speed = 1; speed <= maxSpeed; speed+=0.5f)
            CreateSpeedItem(speed);

        if (!ValidateReferences())
            return;

        float savedSpeed = ES3.Load(SaveKeys.GameSpeed, maxSpeed);
        index = FindClosestSpeedIndex(Mathf.Clamp(savedSpeed, 0f, maxSpeed));
        _label.text = itemList[index].itemTitle;

        if (enableIndicators)
            UpdateUI();
        else
            Destroy(indicatorParent);

        itemList[index].onValueChanged.Invoke();

        if (_tutorialLocked)
            ForceTutorialSpeed();
    }

    private void CreateSpeedItem(float speed)
    {
        float selectedSpeed = speed;
        string title = speed == 0f ? "0x" : $"{speed:N1}x";
        CreateNewItem(title, new[]
        {
            (UnityAction)(() => DataController.Instance.SetGameSpeed(selectedSpeed))
        });
        _itemSpeeds.Add(speed);
    }

    private int FindClosestSpeedIndex(float speed)
    {
        int closestIndex = 0;
        float closestDistance = float.MaxValue;

        for (int i = 0; i < _itemSpeeds.Count; i++)
        {
            float distance = Mathf.Abs(_itemSpeeds[i] - speed);
            if (distance >= closestDistance)
                continue;

            closestIndex = i;
            closestDistance = distance;
        }

        return closestIndex;
    }

    public void CloseSetting()
    {
        
        itemList[index].onValueChanged.Invoke();
    }

    public void PreviousClick()
    {
        if (_tutorialLocked)
            return;
        if (index == 0)
        {
            if (!loopSelection) return;
            index = itemList.Count - 1;
        }
        else
            index--;

        ChangeSelectorItem(false);
    }

    public void ForwardClick()
    {
        if (_tutorialLocked)
            return;
        if (index + 1 >= itemList.Count)
        {
            if (!loopSelection) return;
            index = 0;
        }
        else
            index++;

        ChangeSelectorItem(true);
    }

    private void CreateNewItem(string title, IEnumerable<UnityAction> actions)
    {
        Item item = new Item();
        _newItemTitle = title;
        item.itemTitle = _newItemTitle;
        foreach (var action in actions)
        {
            item.onValueChanged.AddListener(action);
        }

        itemList.Add(item);
    }

    private void ChangeSelectorItem(bool isNext)
    {
        _label.text = itemList[index].itemTitle;

        try
        {
            itemList[index].onValueChanged.Invoke();
        }

        catch (UnityException exception)
        {
            Debug.LogWarning((isNext ? "Forward" : "Previous") + " click call unity exception" + exception.Message);
        }
        catch
        {
            Debug.LogWarning((isNext ? "Forward" : "Previous") + " click call unknown exception");
        }

        _selectorAnimator.Play(null);
        _selectorAnimator.StopPlayback();
        
        if (isNext)
            _selectorAnimator.Play(invertAnimation ? "Previous" : "Forward");
        else
            _selectorAnimator.Play(invertAnimation ? "Forward" : "Previous");



        if (enableIndicators)
            EnableIndicators();
    }

    private void UpdateUI()
    {
        _label.text = itemList[index].itemTitle;

        if (enableIndicators)
            ResetIndicators();
    }

    private void ResetIndicators()
    {
        _indicators.Clear();

        foreach (Transform child in indicatorParent)
            Destroy(child.gameObject);

        for (int i = 0; i < itemList.Count; ++i)
        {
            HorizontalSelectorIndicator indicator = Instantiate(indicatorPrefab, indicatorParent);
            indicator.name = itemList[i].itemTitle;
            _indicators.Add(indicator);

            indicator.SetActiveState(i == index);
        }
    }

    public void SetTutorialLocked(bool locked)
    {
        _tutorialLocked = locked;
        if (locked && itemList.Count > 0)
            ForceTutorialSpeed();
    }

    private void ForceTutorialSpeed()
    {
        int tutorialIndex = FindClosestSpeedIndex(1f);
        index = tutorialIndex;
        if (_label != null && itemList.Count > tutorialIndex)
            _label.text = itemList[tutorialIndex].itemTitle;
        Time.timeScale = 1f;
    }

    private void EnableIndicators()
    {
        for (int i = 0; i < _indicators.Count; ++i)
            _indicators[i].SetActiveState(i == index);
    }

#if UNITY_EDITOR
    private void Reset()
    {
        TryGetComponent(out _selectorAnimator);
    }
#endif

    private bool ValidateReferences()
    {
        bool isValid = true;

        if (_label == null)
        {
            Debug.LogError($"{nameof(HorizontalSelector)} on {name} has no label reference.", this);
            isValid = false;
        }

        if (_selectorAnimator == null)
        {
            Debug.LogError($"{nameof(HorizontalSelector)} on {name} has no animator reference.", this);
            isValid = false;
        }

        if (enableIndicators && indicatorParent == null)
        {
            Debug.LogError($"{nameof(HorizontalSelector)} on {name} has no indicator parent reference.", this);
            isValid = false;
        }

        if (enableIndicators && indicatorPrefab == null)
        {
            Debug.LogError($"{nameof(HorizontalSelector)} on {name} has no indicator prefab reference.", this);
            isValid = false;
        }

        return isValid;
    }
}
