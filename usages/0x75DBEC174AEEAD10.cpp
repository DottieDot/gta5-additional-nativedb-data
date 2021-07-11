// ambient_diving.ysc @ L2165
void func_59()
{
  func_61();
  if (func_50(iLocal_64))
  {
    if (VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(iLocal_64)))
    {
      VEHICLE::SET_BOAT_ANCHOR(iLocal_64, false);
    }
    ENTITY::SET_ENTITY_RECORDS_COLLISIONS(iLocal_64, 0);
    if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_64))
    {
      ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_64);
    }
  }
}