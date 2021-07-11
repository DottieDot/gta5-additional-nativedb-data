// abigail2.c @ L35943
int func_274()
{
  if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
  {
    return 1;
  }
  if (func_463(iLocal_56))
  {
    if (func_275(iLocal_61, 1, 1116471296, 1126825984, 0, 0, 0, 0))
    {
      return 1;
    }
    if (PED::IS_PED_BEING_JACKED(iLocal_61))
    {
      return 1;
    }
    if (func_463(iLocal_56))
    {
      if (PED::IS_PED_IN_VEHICLE(iLocal_61, iLocal_56, 0) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_56, PLAYER::PLAYER_PED_ID(), 1))
      {
        return 1;
      }
      if (((VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_56, 0, 0) || VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_56, 1, 0)) || VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_56, 4, 0)) || VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_56, 5, 0))
      {
        return 1;
      }
    }
  }
  return 0;
}