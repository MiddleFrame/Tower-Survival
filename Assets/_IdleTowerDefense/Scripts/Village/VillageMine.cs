using UnityEngine;
using UnityEngine.EventSystems;

public class VillageMine : VillageElement
{
    public override void Initialize()
    {
        
    }

    public override void OnPointerClick(PointerEventData eventData)
    {
        villageUIElement.Open();
    }
}