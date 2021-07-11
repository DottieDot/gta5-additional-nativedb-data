// agency_heist3b.ysc @ L104744
void func_494(int iParam0)
{
  int iVar0;
  int iVar1;
  int iVar2;
  
  iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
  iVar2 = func_399(iVar1);
  iVar0 = 0;
  while (iVar0 <= 11)
  {
    if (Global_111560.f_2358.f_539[iVar2 /*65*/].f_13[iVar0] != -1 && Global_111560.f_2358.f_539[iVar2 /*65*/][iVar0] != -1)
    {
      PED::SET_PED_PRELOAD_VARIATION_DATA(iParam0, iVar0, Global_111560.f_2358.f_539[iVar2 /*65*/].f_13[iVar0], Global_111560.f_2358.f_539[iVar2 /*65*/][iVar0]);
    }
    iVar0++;
  }
}