// act_cinema.ysc @ L82506
void func_438(int iParam0, var uParam1, int iParam2)
{
  int iVar0;
  
  iVar0 = Global_2542527[iParam0 /*3*/][func_129(iParam2)];
  if (iVar0 != 0)
  {
    STATS::STAT_SET_LICENSE_PLATE(iVar0, uParam1);
  }
}