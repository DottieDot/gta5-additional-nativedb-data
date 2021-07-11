// ingamehud.c @ L120940
int func_1070()
{
  int iVar0;
  
  iVar0 = 0;
  if (func_1044())
  {
    return 0;
  }
  if (STATS::_0x7F2C4CDF2E82DF4C(iVar0))
  {
    return 0;
  }
  if (STATS::STAT_LOAD_PENDING(iVar0) == 0 && STATS::STAT_SLOT_IS_LOADED(iVar0))
  {
    return 1;
  }
  if ((!STATS::STAT_SAVE_PENDING() && !STATS::STAT_LOAD_PENDING(iVar0)) && !STATS::STAT_SAVE_PENDING_OR_REQUESTED())
  {
    STATS::_0x6F361B8889A792A3();
    Global_2460423 = 1;
    if (STATS::STAT_LOAD(iVar0))
    {
    }
    else if (func_475())
    {
      func_889(5);
      func_908(24);
    }
  }
  return 0;
}