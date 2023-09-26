using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class SaveOnUpHandler : MonoBehaviour, IPointerUpHandler
{

    public event EndSliderDragEventHandler EndDrag;

    private float SliderValue => gameObject.GetComponent<Slider>().value;

    public void OnPointerUp (PointerEventData data)
    {
        if (EndDrag != null) 
        {
            EndDrag(SliderValue);
        }
    } 
}

public delegate void EndSliderDragEventHandler (float val);
