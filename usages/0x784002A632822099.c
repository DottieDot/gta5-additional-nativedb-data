// am_mp_yacht.c @ L87816
bool func_610(int iParam0, int iParam1, int iParam2)
{
  int iVar0;
  
  if (((iParam1 >= 0 && iParam1 < 21) && Global_2097152[func_383() /*10828*/].f_6168.f_2298[iParam1]) && iParam2 == iParam1 == 20)
  {
    iVar0 = 0;
    while (iVar0 < 12)
    {
      if (Global_2097152[func_383() /*10828*/].f_6168.f_1328[iParam1 /*13*/][iVar0] != -1)
      {
        PED::SET_PED_PRELOAD_VARIATION_DATA(iParam0, iVar0, Global_2097152[func_383() /*10828*/].f_6168.f_1328[iParam1 /*13*/][iVar0], Global_2097152[func_383() /*10828*/].f_6168.f_1602[iParam1 /*13*/][iVar0]);
      }
      iVar0++;
    }
    iVar0 = 0;
    while (iVar0 < 9)
    {
      if (Global_2097152[func_383() /*10828*/].f_6168.f_1876[iParam1 /*10*/][iVar0] != -1)
      {
        PED::SET_PED_PRELOAD_PROP_DATA(iParam0, iVar0, Global_2097152[func_383() /*10828*/].f_6168.f_1876[iParam1 /*10*/][iVar0], Global_2097152[func_383() /*10828*/].f_6168.f_2087[iParam1 /*10*/][iVar0]);
      }
      iVar0++;
    }
  }
  return (PED::HAS_PED_PRELOAD_VARIATION_DATA_FINISHED(iParam0) && PED::HAS_PED_PRELOAD_PROP_DATA_FINISHED(iParam0));
}