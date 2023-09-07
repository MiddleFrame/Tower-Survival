using UnityEngine;

static class Extensions
{
    #region LookAt2D
    public static void LookAt2D(this Transform me, Vector3 target, Vector3 eye)
    {
        Vector3 look = target - me.position;

        float sAngle = Vector2.SignedAngle(eye, look);

        if (sAngle != 0.0f)
        {
            var eulerAngles = me.eulerAngles;

            eulerAngles.z += sAngle;

            me.eulerAngles = eulerAngles;
        }
    }

    public static void LookAt2D(this Transform me, Transform target, Vector3 eye)
    {
        me.LookAt2D(target.position, eye);
    }

    public static void LookAt2D(this Transform me, GameObject target, Vector3 eye)
    {
        me.LookAt2D(target.transform.position, eye);
    }

    public static void LookAt2D(this Transform me, Vector3 target, LookType lookType = LookType.Up)
    {
        Vector3 look = target - me.position;

        look.z = 0.0f;

        switch (lookType)
        {
            case LookType.Up:    me.up =     look; break;
            case LookType.Down:  me.up =    -look; break;
            case LookType.Left:  me.right = -look; break;
            case LookType.Right: me.right =  look; break;
        }
    }

    public static void LookAt2D(this Transform me, Transform target, LookType lookType = LookType.Up)
    {
        me.LookAt2D(target.position, lookType);
    }

    public static void LookAt2D(this Transform me, GameObject target, LookType lookType = LookType.Up)
    {
        me.LookAt2D(target.transform.position, lookType);
    }
    #endregion
}