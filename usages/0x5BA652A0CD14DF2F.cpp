// agency_heist1.ysc @ L98301
void func_397(int iParam0)
{
  int iVar0;
  
  iVar0 = func_27(iParam0);
  if (func_26(iVar0) && !PED::IS_PED_INJURED(iParam0))
  {
    PED::ADD_ARMOUR_TO_PED(iParam0, (Global_111560.f_2358.f_539.f_294[iVar0] - PED::GET_PED_ARMOUR(iParam0)));
  }
}