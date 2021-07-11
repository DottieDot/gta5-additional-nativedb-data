// fmmc_launcher.c @ L384667
void func_5946(int iParam0, char* sParam1, int iParam2, int iParam3)
{
  int iVar0;
  
  if (func_175())
  {
    iVar0 = Global_2577450[iParam0 /*3*/][func_40(iParam2)];
    if (iVar0 != 0)
    {
      STATS::STAT_SET_STRING(iVar0, sParam1, iParam3);
    }
  }
}