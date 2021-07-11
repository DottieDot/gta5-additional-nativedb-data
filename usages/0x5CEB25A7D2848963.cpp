// epsilon8.ysc @ L38975
void func_309()
{
  if (fLocal_74 == -1f)
  {
    TASK::VEHICLE_WAYPOINT_PLAYBACK_USE_DEFAULT_SPEED(iLocal_393[0]);
  }
  else if (ENTITY::GET_ENTITY_SPEED(iLocal_393[0]) > fLocal_74)
  {
    TASK::VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_393[0], fLocal_74);
  }
  else
  {
    TASK::VEHICLE_WAYPOINT_PLAYBACK_USE_DEFAULT_SPEED(iLocal_393[0]);
  }
}