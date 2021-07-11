// carwash1.c @ L4037
int func_60(int iParam0)
{
  if (!VEHICLE::DOES_VEHICLE_HAVE_STUCK_VEHICLE_CHECK(iParam0))
  {
    return 0;
  }
  if (((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 0, 5000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 1, 5000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 2, 5000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 3, 5000))
  {
    return 1;
  }
  return 0;
}