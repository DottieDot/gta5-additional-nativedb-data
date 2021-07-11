// am_heli_taxi.c @ L11190
void func_298(int iParam0, int iParam1)
{
  if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(iParam1) > 0)
  {
    VEHICLE::SET_VEHICLE_LIVERY(iParam1, 0);
    if (iParam0 == 0)
    {
    }
  }
}