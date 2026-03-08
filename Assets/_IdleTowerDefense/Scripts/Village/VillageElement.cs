using UnityEngine;
using UnityEngine.EventSystems;

public abstract class VillageElement
    :MonoBehaviour, IPointerClickHandler
{
    [SerializeField]
    protected VillageUIElement villageUIElement;

    public abstract void Initialize();
    public virtual void OnPointerClick(PointerEventData eventData)
    {
    }
}