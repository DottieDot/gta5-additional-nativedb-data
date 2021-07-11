// main.ysc @ L158091
void func_1865(int iParam0, int iParam1)
{
  int iVar0;
  int iVar1;
  
  iVar0 = Global_61696[iParam1 /*13*/].f_4;
  if (iVar0 == 0)
  {
    return;
  }
  Global_61696[iParam1 /*13*/].f_1 = iParam0;
  iVar1 = iParam0 + 1;
  STATS::STAT_SET_INT(iVar0, iVar1, 1);
  if (func_35(0) && Global_61463)
  {
    MISC::ADD_REPLAY_STAT_VALUE(iVar0);
    MISC::ADD_REPLAY_STAT_VALUE(iParam0);
    MISC::ADD_REPLAY_STAT_VALUE(iParam1);
  }
}