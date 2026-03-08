using System;
using UnityEngine;

public class AnimationEventHandler : MonoBehaviour
{
    public Action OnEnded;

    public void OnAnimationEnded()
    {
        OnEnded?.Invoke();
    }
}
