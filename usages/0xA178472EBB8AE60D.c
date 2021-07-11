// agency_heist2.c @ L3867
void func_88()
{
  if (!ENTITY::DOES_ENTITY_EXIST(iLocal_80) && !iLocal_108)
  {
    STREAMING::REQUEST_MODEL(joaat("FROGGER"));
    VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_253, sLocal_252);
    if (STREAMING::HAS_MODEL_LOADED(joaat("FROGGER")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_253, sLocal_252))
    {
      iLocal_80 = VEHICLE::CREATE_VEHICLE(joaat("FROGGER"), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) + Vector(800f, 0f, 0f), 0f, true, true, false);
      VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_80, iLocal_253, sLocal_252, 1);
      VEHICLE::SET_PLAYBACK_SPEED(iLocal_80, 0.75f);
    }
  }
  else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_80, 0))
  {
    if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_80))
    {
      VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_80);
      VEHICLE::DELETE_VEHICLE(&iLocal_80);
      STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("FROGGER"));
      VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_253, sLocal_252);
      iLocal_108 = 1;
    }
    else
    {
      VEHICLE::SET_HELI_BLADES_FULL_SPEED(iLocal_80);
    }
  }
}