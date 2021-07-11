// business_battles.ysc @ L207255
void func_3000(var uParam0, int iParam1)
{
  VEHICLE::_SET_HYDRAULIC_WHEEL_STATE_TRANSITION(PED::GET_VEHICLE_PED_IS_IN(*uParam0, 0), 4, 0, 1f, 1f);
  VEHICLE::_SET_HYDRAULIC_WHEEL_STATE_TRANSITION(PED::GET_VEHICLE_PED_IS_IN(*uParam0, 0), 5, 0, 1f, 1f);
  if (iParam1 >= 0 && iParam1 < 32)
  {
    MISC::SET_BIT(&iLocal_1986, iParam1);
  }
}