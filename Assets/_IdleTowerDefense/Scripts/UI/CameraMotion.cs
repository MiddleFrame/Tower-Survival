using System.Collections;
using UnityEngine;

public class CameraMotion : MonoBehaviour
{
    [SerializeField]
    private Transform _playPoint;
    [SerializeField]
    private Transform _villagePoint;

    [SerializeField]
    private Camera _camera;
    
    private const float DURATION = 0.5f;

    public IEnumerator GoToVillage()
    {
        if(Vector3.Distance(_camera.transform.position,_villagePoint.position)<0.1f)
            yield break;
        yield return GoToPoint(_villagePoint.position);
    }

    public IEnumerator GoToMain()
    {
        if(Vector3.Distance(_camera.transform.position,_playPoint.position)<0.1f)
            yield break;
        yield return GoToPoint(_playPoint.position);
    }

    IEnumerator GoToPoint(Vector3 point)
    {
        Vector3 startPosition = _camera.transform.position;
        float elapsedTime = 0;

        while (elapsedTime < DURATION)
        {
            _camera.transform.position = Vector3.Lerp(startPosition, point, elapsedTime / DURATION);
            elapsedTime += Time.deltaTime;
            yield return null;
        }

        _camera.transform.position = point;
    }
}
