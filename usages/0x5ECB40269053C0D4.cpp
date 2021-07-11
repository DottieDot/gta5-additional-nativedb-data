// arena_carmod.ysc @ L163222
int func_1491(int iParam0)
{
  if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
  {
    if (VEHICLE::_GET_VEHICLE_ROOF_LIVERY_COUNT(iParam0) > 1)
    {
      return 1;
    }
  }
  return 0;
}