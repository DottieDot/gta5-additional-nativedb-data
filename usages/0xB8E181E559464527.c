// carwash1.c @ L38512
int func_368(int iParam0)
{
  if (!VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iParam0)))
  {
    return 1;
  }
  if (VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 0))
  {
    return 1;
  }
  if (VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 1))
  {
    return 1;
  }
  if (VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 2))
  {
    return 1;
  }
  if (VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 3))
  {
    return 1;
  }
  if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, 1))
  {
    if (VEHICLE::GET_CONVERTIBLE_ROOF_STATE(iParam0) == 6)
    {
      return 1;
    }
  }
  return 0;
}