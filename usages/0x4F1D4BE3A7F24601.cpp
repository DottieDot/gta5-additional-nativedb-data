// agency_heist1.ysc @ L117433
int func_692(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
  if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1) || !ENTITY::DOES_ENTITY_EXIST(*uParam0))
  {
    STREAMING::REQUEST_MODEL(iParam1);
    STREAMING::REQUEST_MODEL(iParam2);
    VEHICLE::REQUEST_VEHICLE_RECORDING(iParam3, "FBIs1");
    if ((STREAMING::HAS_MODEL_LOADED(iParam1) && STREAMING::HAS_MODEL_LOADED(iParam2)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam3, "FBIs1"))
    {
      if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
      {
        uParam0->f_1 = VEHICLE::CREATE_VEHICLE(iParam1, 99.8736f, -721.168f, 32.1399f, 342.0303f, true, true, false);
        if (iParam4 != -1 && iParam5 != -1)
        {
          VEHICLE::SET_VEHICLE_COLOURS(uParam0->f_1, iParam4, iParam5);
        }
      }
      if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_1, 0))
      {
        *uParam0 = PED::CREATE_PED_INSIDE_VEHICLE(uParam0->f_1, 26, iParam2, -1, 1, true);
      }
      if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_1, 0) && !PED::IS_PED_INJURED(*uParam0))
      {
        VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(uParam0->f_1, iParam3, "FBIs1", 10f, 786477);
      }
    }
    return 0;
  }
  return 1;
}