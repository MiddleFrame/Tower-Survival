using System.Collections.Generic;
using Managers;
using UnityEngine;
using UnityEngine.Events;
using TMPro;

public class HorizontalSelector : MonoBehaviour
{
    [Header("Settings")]
    public int defaultIndex;

    public bool invokeAtStart;
    public bool invertAnimation;
    public bool loopSelection;

    [HideInInspector]
    public int index;

    [Header("Saving")]
    public bool saveValue;

    public string selectorTag = "Default";

    [Header("Indicators")]
    public bool enableIndicators = true;

    public Transform indicatorParent;
    public GameObject indicatorObject;

    [Header("Items")]
    public List<Item> itemList = new();

    private TextMeshProUGUI _label;
    private Animator _selectorAnimator;
    private string _newItemTitle;

    public static bool rewardedSpeed;
    
    [System.Serializable]
    public class Item
    {
        public string itemTitle = "Item Title";
        public UnityEvent onValueChanged = new();
    }

    private void Start()
    {
        CreateNewItem("0x",new [] {(UnityAction) (()=>GameManager.Instance.SetGameSpeed(0))});
        float maxSpeed=1;
        if (rewardedSpeed)
            maxSpeed += 1;
        if (InAppInitializer.isBuyGameSpeed)
            maxSpeed += 1;
        for (float speed = 0; speed < maxSpeed; speed+=0.5f)
        {
            var speed1 = speed;
            CreateNewItem($"{speed:N1}x",new [] {(UnityAction) (()=>GameManager.Instance.SetGameSpeed(speed1))});
        }

        _selectorAnimator = gameObject.GetComponent<Animator>();
        _label = transform.Find("Text").GetComponent<TextMeshProUGUI>();

        if (saveValue)
        {
            defaultIndex = PlayerPrefs.GetInt(selectorTag + "HSelectorValue", defaultIndex);
        }
        _label.text = itemList[defaultIndex].itemTitle;
        index = defaultIndex;

        if (enableIndicators)
            UpdateUI();
        else
            Destroy(indicatorParent);


        if (invokeAtStart)
            itemList[index].onValueChanged.Invoke();
    }

    public void PreviousClick()
    {
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

        if (saveValue)
            PlayerPrefs.SetInt(selectorTag + "HSelectorValue", index);


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
        foreach (Transform child in indicatorParent)
            Destroy(child.gameObject);

        for (int i = 0; i < itemList.Count; ++i)
        {
            GameObject go = Instantiate(indicatorObject, new Vector3(0, 0, 0), Quaternion.identity);
            go.transform.SetParent(indicatorParent, false);
            go.name = itemList[i].itemTitle;

            EnableIndicator(go, i == index);
        }
    }

    private void EnableIndicators()
    {
        for (int i = 0; i < itemList.Count; ++i)
        {
            GameObject go = indicatorParent.GetChild(i).gameObject;

            EnableIndicator(go, i == index);
        }
    }

    private void EnableIndicator(GameObject go, bool isActive)
    {
        Transform onObj = go.transform.Find("On");
        Transform offObj = go.transform.Find("Off");

        onObj.gameObject.SetActive(isActive);
        offObj.gameObject.SetActive(!isActive);
    }
}