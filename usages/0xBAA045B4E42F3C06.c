// gb_casino_heist.c @ L432051
void func_7281(int iParam0, int iParam1)
{
  if (!func_7285(iParam0))
  {
    return;
  }
  if (((func_128(iParam1) && func_7284(PLAYER::PLAYER_PED_ID(), iParam1, 0)) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, -1, 0) == PLAYER::PLAYER_PED_ID()) && func_7283(iParam0, iParam1))
  {
    if (func_1022(Local_1883.f_947[iParam0 /*8*/]))
    {
      VEHICLE::_SET_VEHICLE_MAX_SPEED(iParam1, func_7282(iParam1));
    }
  }
  else if (func_1022(Local_1883.f_947[iParam0 /*8*/]))
  {
    VEHICLE::_SET_VEHICLE_MAX_SPEED(iParam1, -1f);
  }
}