public static class TutorialProgress
{
    public const string CompletedKey = "Tutorial.Completed";
    private const string PassiveHintPrefix = "Tutorial.PassiveHint.";

    public static bool IsTutorialRun { get; private set; }
    public static bool IsCompleted => ES3.Load(CompletedKey, false);

    public static bool BeginFirstRun()
    {
        if (IsCompleted)
            return false;

        IsTutorialRun = true;
        return true;
    }

    public static void Complete()
    {
        ES3.Save(CompletedKey, true);
    }

    public static void EndSession()
    {
        IsTutorialRun = false;
    }

    public static bool HasSeenPassiveHint(string spellId)
    {
        return !string.IsNullOrEmpty(spellId)
               && ES3.Load(PassiveHintPrefix + spellId, false);
    }

    public static void MarkPassiveHintSeen(string spellId)
    {
        if (!string.IsNullOrEmpty(spellId))
            ES3.Save(PassiveHintPrefix + spellId, true);
    }
}
