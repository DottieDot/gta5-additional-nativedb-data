// maintransition.ysc @ L291481
void func_3836(int iParam0, int iParam1)
{
  int iVar0;
  int iVar1;
  
  iVar0 = func_3833(iParam0);
  iVar1 = 0;
  while (iVar1 < 281)
  {
    if (iVar0 == Global_2461344[iVar1 /*141*/].f_66)
    {
      if (!MISC::IS_BIT_SET(Global_2461344[iVar1 /*141*/].f_102, 1) || (MISC::IS_BIT_SET(Global_2461344[iVar1 /*141*/].f_102, 1) && MISC::IS_BIT_SET(Global_2461344[iVar1 /*141*/].f_102, 2)))
      {
        STATS::STAT_SET_CURRENT_POSIX_TIME(func_3837(iParam1), 1);
        func_2778(iVar1, iParam1);
        STATS::PLAYSTATS_QUICKFIX_TOOL(4, func_3827(iParam0));
        func_3796(4, "QFE_VEHICLE_RM", VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iVar0), iParam1, 0);
        func_1019(1);
        iVar1 = 281;
      }
      else if (iParam1 == func_4238())
      {
      }
    }
    iVar1++;
  }
}