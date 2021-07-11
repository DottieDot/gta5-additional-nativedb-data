// epscars.ysc @ L1977
bool func_47(int iParam0)
{
  if (!func_81(iParam0))
  {
    return 1;
  }
  if (ENTITY::GET_ENTITY_HEALTH(iParam0) < 750)
  {
    return 1;
  }
  if (VEHICLE::IS_VEHICLE_BUMPER_BROKEN_OFF(iParam0, 1) || VEHICLE::IS_VEHICLE_BUMPER_BROKEN_OFF(iParam0, 0))
  {
    return 1;
  }
  return VEHICLE::_GET_VEHICLE_NUMBER_OF_BROKEN_OFF_BONES(iParam0) > 0;
}