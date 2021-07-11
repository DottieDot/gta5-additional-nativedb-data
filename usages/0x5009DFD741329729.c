// fm_bj_race_controler.c @ L274095
void func_3632(var uParam0, var uParam1, bool bParam2, bool bParam3)
{
  int iVar0;
  
  if (!bParam2 && !func_185())
  {
    if (!bParam3)
    {
      func_18(&iVar0, 0, 0);
      iVar0 = NETWORK::GET_NETWORK_TIME();
      if (!func_3183(&iVar0, &uParam0, 10000))
      {
        STATS::PLAYSTATS_BACKGROUND_SCRIPT_ACTION("JOB_IN_10S", 0);
      }
    }
  }
}