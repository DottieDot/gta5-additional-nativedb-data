// family3.ysc @ L32464
void func_488(struct<10> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, char* sParam13, float fParam14, int iParam15, float fParam16, int iParam17, int iParam18, int iParam19)
{
  if (VEHICLE::IS_VEHICLE_DRIVEABLE(Param0, 0))
  {
    if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Param0))
    {
      if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Param0.f_9, sParam13))
      {
        if (iParam18 == 0)
        {
          VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Param0, Param0.f_9, sParam13, 1);
        }
        else if (iParam18 == 1)
        {
          VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(Param0, Param0.f_9, sParam13, iParam19, 0, 786603);
        }
        if (fParam16 > 0f)
        {
          VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Param0, fParam16);
        }
        else if (iParam17 == 1)
        {
          VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Param0, func_489(ENTITY::GET_ENTITY_COORDS(Param0, true), Param0.f_9, sParam13, 16));
        }
        VEHICLE::SET_PLAYBACK_SPEED(Param0, fParam14);
        if (iParam15 == 1)
        {
          VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(Param0);
        }
      }
    }
  }
}