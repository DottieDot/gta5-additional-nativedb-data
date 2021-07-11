// agency_heist1.ysc @ L98799
void func_404(int iParam0, int iParam1, int iParam2, int iParam3)
{
  int iVar0;
  
  iVar0 = func_403(iParam2);
  if (iVar0 != 0)
  {
    WEAPON::_SET_PED_WEAPON_LIVERY_COLOR(iParam0, iParam1, iVar0, iParam3);
  }
}