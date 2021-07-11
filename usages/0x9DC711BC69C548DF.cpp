// ambient_mrsphilips.ysc @ L778
void func_20()
{
  if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("mission_stat_watcher")) > 0)
  {
    if (func_21())
    {
      if (Global_61466 && !Global_61465)
      {
        Global_61466 = 0;
        MISC::TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("mission_stat_watcher");
      }
    }
    else
    {
      MISC::TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("mission_stat_watcher");
    }
  }
}