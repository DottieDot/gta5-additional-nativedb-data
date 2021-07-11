// exile_city_denial.c @ L541
void func_5(int iParam0, bool bParam1)
{
  if (iParam0 == 7)
  {
    return;
  }
  if (bParam1)
  {
    MISC::SET_BIT(&(Global_111560.f_7224.f_17[iParam0]), 0);
  }
  else
  {
    MISC::CLEAR_BIT(&(Global_111560.f_7224.f_17[iParam0]), 0);
  }
  MISC::DISABLE_POLICE_RESTART(Global_93838[iParam0 /*9*/].f_8, !bParam1);
  func_6(Global_93838[iParam0 /*9*/].f_7, 0, 0);
}