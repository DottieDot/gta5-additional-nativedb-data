// am_casino_peds.ysc @ L159221
void func_1559(int iParam0)
{
  int iVar0;
  int iVar1;
  
  iVar1 = 0;
  while (iVar1 < 32)
  {
    iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
    if (func_410(iVar0, 0, 1) && iVar0 != PLAYER::PLAYER_ID())
    {
      if (PED::IS_PED_IN_VEHICLE(PLAYER::GET_PLAYER_PED(iVar0), iParam0, 0) && !func_1562(iVar0))
      {
        func_1560(func_1561(iVar0), 0, 0f, 0, 0, 0, -1);
        VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(iParam0, iVar0, 1);
      }
    }
    iVar1++;
  }
}