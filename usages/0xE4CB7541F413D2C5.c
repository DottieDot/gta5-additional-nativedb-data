// gb_contraband_buy.c @ L69320
int func_1612(int iParam0)
{
  if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
  {
    return 1;
  }
  if (VEHICLE::IS_HELI_PART_BROKEN(iParam0, 1, 1, 1))
  {
    return 1;
  }
  if (VEHICLE::GET_HELI_TAIL_ROTOR_HEALTH(iParam0) <= 30f)
  {
    return 1;
  }
  if (VEHICLE::GET_HELI_MAIN_ROTOR_HEALTH(iParam0) <= 30f)
  {
    return 1;
  }
  if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iParam0) <= 30f)
  {
    return 1;
  }
  if (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iParam0) <= 30f)
  {
    return 1;
  }
  return 0;
}