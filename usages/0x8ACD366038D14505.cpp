// jewelry_prep1a.ysc @ L9582
int func_179(int iParam0)
{
  if (iParam0 != 0 && ENTITY::DOES_ENTITY_EXIST(iParam0))
  {
    switch (ENTITY::GET_ENTITY_TYPE(iParam0))
    {
      case 1:
        if (!PED::IS_PED_INJURED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
        {
          return 1;
        }
        break;
      
      case 2:
        if (VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0), 0))
        {
          return 1;
        }
        break;
      
      default:
        if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
        {
          return 1;
        }
        break;
      }
  }
  return 0;
}