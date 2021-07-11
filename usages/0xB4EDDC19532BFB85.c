// flow_controller.c @ L122467
void func_711(int iParam0, int iParam1, bool bParam2)
{
  if (bParam2)
  {
    if (func_677(0))
    {
      func_731(Global_89451[iParam1 /*5*/].f_2);
    }
    else
    {
      func_727(Global_89451[iParam1 /*5*/].f_2);
    }
  }
  else
  {
    func_726(&(Global_89451[iParam1 /*5*/].f_3));
  }
  func_714();
  SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(Global_89487[Global_76846.f_109[iParam0 /*4*/] /*34*/].f_6);
  SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(joaat("mission_stat_watcher"));
  func_712(iParam0);
  GRAPHICS::ANIMPOSTFX_STOP_ALL();
}