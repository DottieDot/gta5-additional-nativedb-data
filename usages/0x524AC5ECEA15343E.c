// abigail2.c @ L35643
int func_263(int iParam0)
{
  if (ENTITY::DOES_ENTITY_EXIST(iParam0))
  {
    if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
    {
      if (VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0), 0))
      {
        return 1;
      }
    }
    else if (ENTITY::IS_ENTITY_A_PED(iParam0))
    {
      if (!PED::IS_PED_INJURED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
      {
        return 1;
      }
    }
    else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
    {
      return 1;
    }
  }
  return 0;
}