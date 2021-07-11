// agency_heist2.ysc @ L18345
int func_293(vector3 vParam0, float fParam1)
{
  if (!ENTITY::DOES_ENTITY_EXIST(iLocal_79))
  {
    STREAMING::REQUEST_MODEL(joaat("ZION2"));
    if (STREAMING::HAS_MODEL_LOADED(joaat("ZION2")))
    {
      iLocal_79 = VEHICLE::CREATE_VEHICLE(joaat("ZION2"), vParam0, fParam1, true, true, false);
      VEHICLE::SET_VEHICLE_COLOURS(iLocal_79, 33, 0);
      VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iLocal_79, 69, 0);
      VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(iLocal_79, 0);
    }
  }
  if (ENTITY::DOES_ENTITY_EXIST(iLocal_79) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_79, 0))
  {
    ENTITY::SET_ENTITY_COORDS(iLocal_79, vParam0, 1, false, 0, 1);
    ENTITY::SET_ENTITY_HEADING(iLocal_79, fParam1);
    VEHICLE::SET_VEHICLE_ALARM(iLocal_79, 1);
    return 1;
  }
  return 0;
}