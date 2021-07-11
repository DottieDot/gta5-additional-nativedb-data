// armenian1.ysc @ L1693
void func_15(int iParam0, bool bParam1)
{
  if (iParam0 == 10)
  {
    return;
  }
  if (bParam1)
  {
    MISC::SET_BIT(&(Global_111560.f_7224[iParam0]), 0);
  }
  else
  {
    MISC::CLEAR_BIT(&(Global_111560.f_7224[iParam0]), 0);
  }
  MISC::SET_SAVE_HOUSE(Global_93737[iParam0 /*10*/].f_8, bParam1, 1);
  func_21(iParam0);
  func_19(iParam0, 0);
  func_17(iParam0);
  func_16(iParam0);
}