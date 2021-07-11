// maintransition.ysc @ L103911
void func_488()
{
  if (func_389(1) && !STATS::STAT_SAVE_PENDING_OR_REQUESTED())
  {
    if (func_29(201))
    {
      Global_2460179 = 0;
      STATS::PLAYSTATS_BACKGROUND_SCRIPT_ACTION("BG_SCRIPT_KICK", 5);
      NETWORK::_SHUTDOWN_AND_LOAD_MOST_RECENT_SAVE();
    }
  }
}