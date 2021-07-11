// fm_capture_creator.c @ L32224
void func_489()
{
  int iVar0;
  int iVar1;
  int iVar2;
  
  if (func_492() > 600)
  {
    if (func_491())
    {
      iVar0 = MISC::GET_PROFILE_SETTING(938);
      iVar0++;
      STATS::STAT_SET_PROFILE_SETTING_VALUE(938, iVar0);
    }
    else if (func_596())
    {
      iVar1 = MISC::GET_PROFILE_SETTING(936);
      iVar1++;
      STATS::STAT_SET_PROFILE_SETTING_VALUE(936, iVar1);
    }
    else if (Global_4456448 == 1)
    {
      iVar2 = MISC::GET_PROFILE_SETTING(937);
      iVar2++;
      STATS::STAT_SET_PROFILE_SETTING_VALUE(937, iVar2);
    }
    func_490();
  }
}