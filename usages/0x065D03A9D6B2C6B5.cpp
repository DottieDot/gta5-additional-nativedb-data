// am_heli_taxi.ysc @ L18308
void func_439()
{
  int iVar0;
  
  iVar0 = iLocal_1123;
  if (ENTITY::IS_ENTITY_DEAD(iVar0, 0))
  {
    return;
  }
  if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
  {
    VEHICLE::_0x065D03A9D6B2C6B5(iVar0, 0);
    VEHICLE::_0x2311DD7159F00582(iVar0, 1);
    VEHICLE::SET_VEHICLE_DOORS_LOCKED(iVar0, 4);
    if (VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(iVar0) != 0 && VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(iVar0) != 1)
    {
      MISC::CLEAR_BIT(&iLocal_219, 15);
    }
  }
}