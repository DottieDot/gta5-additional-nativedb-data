// epsilon6.ysc @ L42471
void func_378()
{
  if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("ep_plane", 0))
  {
    func_521("Doing plane exit state");
    if (func_239())
    {
      ENTITY::SET_ENTITY_COORDS(vLocal_54.x, 1684.78f, 3255.58f, 41.78f, 1, false, 0, 1);
      ENTITY::SET_ENTITY_HEADING(vLocal_54.x, 284.26f);
      VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(vLocal_54.x, 1084227584);
    }
    else
    {
      func_5(&vLocal_54);
      vLocal_54.x = VEHICLE::CREATE_VEHICLE(vLocal_54.y, 1684.78f, 3255.58f, 41.78f, 284.26f, true, true, false);
      func_480(vLocal_54.x, 0);
      VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(vLocal_54.x, 1084227584);
    }
    if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(vLocal_54.x))
    {
      if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(501, "Eps6_Takeoff"))
      {
        VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(vLocal_54.x, 501, "Eps6_Takeoff", 1);
        VEHICLE::_0x1F2E4E06DEA8992B(vLocal_54.x, 1);
        VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(vLocal_54.x);
        func_521("Started/paused vehicle recording on plane");
      }
    }
  }
}