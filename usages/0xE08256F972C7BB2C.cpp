// fm_bj_race_controler.ysc @ L262139
void func_3383(int iParam0)
{
  int iVar0;
  int iVar1;
  
  iVar0 = func_3384(iParam0);
  if (!func_847())
  {
    MONEY::_NETWORK_EARN_FROM_ARENA_SKILL_LEVEL_PROGRESSION(iVar0, iParam0);
  }
  else
  {
    func_2112(-883876414, iVar0, &iVar1, 0, 0, 0);
    Global_4263810[iVar1 /*84*/].f_65.f_15 = iParam0;
  }
}