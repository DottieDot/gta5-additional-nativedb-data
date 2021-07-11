// am_mp_yacht.c @ L122819
void func_879(int iParam0)
{
  if (VEHICLE::_CAN_ANCHOR_BOAT_HERE_2(iParam0))
  {
    if (!func_910(ENTITY::GET_ENTITY_COORDS(iParam0, true), iLocal_629, 0))
    {
      VEHICLE::_SET_BOAT_FROZEN_WHEN_ANCHORED(iParam0, 1);
      VEHICLE::SET_BOAT_ANCHOR(iParam0, true);
    }
  }
}