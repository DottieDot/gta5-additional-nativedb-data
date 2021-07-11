// fmmc_launcher.c @ L385053
void func_5954(int iParam0, char* sParam1, int iParam2)
{
  int iVar0;
  
  if (func_175())
  {
    iVar0 = Global_1383981[iParam0 /*3*/][func_40(iParam2)];
    if (iVar0 != 0)
    {
      STATS::STAT_SET_USER_ID(iVar0, sParam1, 1);
    }
  }
}