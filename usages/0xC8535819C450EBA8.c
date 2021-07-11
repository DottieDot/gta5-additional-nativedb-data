// exile_city_denial.c @ L608
void func_7(int iParam0, bool bParam1)
{
  if (iParam0 == 5)
  {
    return;
  }
  if (bParam1)
  {
    MISC::SET_BIT(&(Global_111560.f_7224.f_11[iParam0]), 0);
  }
  else
  {
    MISC::CLEAR_BIT(&(Global_111560.f_7224.f_11[iParam0]), 0);
  }
  MISC::DISABLE_HOSPITAL_RESTART(Global_93902[iParam0 /*9*/].f_8, !bParam1);
  func_6(Global_93902[iParam0 /*9*/].f_7, 0, 0);
}