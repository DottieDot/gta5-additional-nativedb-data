// agency_heist3a.c @ L135789
void func_954()
{
  if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_348[0 /*32*/]))
  {
    fLocal_2142 = TASK::GET_PED_WAYPOINT_DISTANCE(Local_348[0 /*32*/]);
    fLocal_2144 = (fLocal_2140 - fLocal_2142);
    if (fLocal_2144 > 12f)
    {
    }
    if (iLocal_1921)
    {
      if (TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(Local_348[0 /*32*/]))
      {
        TASK::WAYPOINT_PLAYBACK_RESUME(Local_348[0 /*32*/], 0, -1, 0);
      }
      iLocal_1921 = 0;
    }
    if (fLocal_2144 <= -20f)
    {
      if (!TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(Local_348[0 /*32*/]))
      {
        TASK::WAYPOINT_PLAYBACK_PAUSE(Local_348[0 /*32*/], 1, 0);
      }
    }
    TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_348[0 /*32*/], 2f, 0);
  }
}