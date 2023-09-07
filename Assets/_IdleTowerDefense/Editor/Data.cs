using UnityEditor;
using UnityEngine;

namespace _IdleTowerDefense.Editor
{
    public static class Data
    {
        [MenuItem("MyMenu/Clear data")]
        public static void ClearSaveData()
        {
            ES3.DeleteFile();
        }

        [MenuItem("MyMenu/Add 1000 Ore")]
        public static void AddOre()
        {
            ES3.Save(SaveKeys.Ore, ES3.Load(SaveKeys.Ore, 0) + 1000);
        }
        [MenuItem("MyMenu/Add 1000 Gold")]
        public static void AddGold()
        {
            ES3.Save(SaveKeys.Gold, ES3.Load(SaveKeys.Gold, 0) + 1000);
        }
    }
}