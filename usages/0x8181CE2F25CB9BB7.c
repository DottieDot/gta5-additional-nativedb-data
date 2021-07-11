// freemode.c @ L769973
void func_11186(int iParam0, int iParam1, int iParam2)
{
  int iVar0;
  int iVar1;
  int iVar2;
  
  iVar0 = func_2149(func_11185(iParam0, iParam2), -1, 0);
  iVar1 = func_11188(iParam2, iParam1);
  if (iVar1 == -1)
  {
    return;
  }
  if (VEHICLE::_GET_VEHICLE_WEAPON_CAPACITY(iParam0, iVar1) != iVar0)
  {
    VEHICLE::_SET_VEHICLE_WEAPON_CAPACITY(iParam0, iVar1, iVar0);
  }
  iVar2 = func_11187(iParam2, iParam1);
  if (iVar2 == -1)
  {
    return;
  }
  if (VEHICLE::_GET_VEHICLE_WEAPON_CAPACITY(iParam0, iVar2) != iVar0)
  {
    VEHICLE::_SET_VEHICLE_WEAPON_CAPACITY(iParam0, iVar2, iVar0);
  }
}