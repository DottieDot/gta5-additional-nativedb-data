// am_heli_taxi.ysc @ L13277
int func_356()
{
  if (VEHICLE::_DOES_VEHICLE_ALLOW_RAPPEL(iLocal_1123) && !func_332())
  {
    return 1;
  }
  return 0;
}