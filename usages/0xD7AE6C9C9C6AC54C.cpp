// act_cinema.ysc @ L11069
float func_180(int iParam0, int iParam1)
{
  int iVar0;
  var uVar1;
  
  iVar0 = Global_2575525[iParam0 /*3*/][func_129(iParam1)];
  if (STATS::STAT_GET_FLOAT(iVar0, &uVar1, -1))
  {
    return uVar1;
  }
  return 0f;
}