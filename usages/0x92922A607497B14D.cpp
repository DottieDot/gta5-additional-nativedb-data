// freemode.ysc @ L882519
int func_13311(int iParam0)
{
  int iVar0;
  int iVar1;
  
  iVar0 = VEHICLE::_GET_NUMBER_OF_VEHICLE_DOORS(iParam0);
  if (iVar0 > 0 && !PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
  {
    iVar1 = 0;
    while (iVar1 < iVar0)
    {
      if (VEHICLE::GET_PED_USING_VEHICLE_DOOR(iParam0, iVar1) != 0)
      {
        return 1;
      }
      iVar1++;
    }
  }
  return 0;
}