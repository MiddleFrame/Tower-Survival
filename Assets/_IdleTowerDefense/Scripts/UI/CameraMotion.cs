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
        yield return GoToPoint(_villagePoint.position, 11.5f);
    }

    public IEnumerator GoToMain()
    {
        if(Vector3.Distance(_camera.transform.position,_playPoint.position)<0.1f)
            yield break;
        yield return GoToPoint(_playPoint.position, 13);
    }

    IEnumerator GoToPoint(Vector3 point, float size)
    {
        Vector3 startPosition = _camera.transform.position;
        float startSize = _camera.orthographicSize;
        float elapsedTime = 0f;

        while (elapsedTime < DURATION)
        {
            float t = elapsedTime / DURATION;

            _camera.transform.position = Vector3.Lerp(startPosition, point, t);
            _camera.orthographicSize = Mathf.Lerp(startSize, size, t);

            elapsedTime += Time.deltaTime;
            yield return null;
        }

        _camera.transform.position = point;
        _camera.orthographicSize = size;
    }
}
