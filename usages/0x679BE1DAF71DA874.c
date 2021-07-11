// agency_heist3a.c @ L146892
int func_1136(int iParam0)
{
  if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
  {
    if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0))
    {
      if (((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(*iParam0, 0, 7000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(*iParam0, 3, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(*iParam0, 2, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(*iParam0, 1, 40000))
      {
        return 1;
      }
    }
  }
  return 0;
}