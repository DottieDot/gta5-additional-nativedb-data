// agency_heist1.ysc @ L98952
void func_406(int iParam0, int iParam1, int iParam2)
{
  int iVar0;
  
  iVar0 = func_403(iParam2);
  if (iVar0 != 0)
  {
    WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(iParam0, iParam1, iVar0);
  }
}