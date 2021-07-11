// am_casino_peds.c @ L309604
void func_3827(int iParam0, var uParam1)
{
  float fVar0;
  
  if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
  {
    return;
  }
  if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(*uParam1))
  {
    fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(func_3829(iParam0, 2, 0), ENTITY::GET_ENTITY_COORDS(*uParam1, true), false);
    if (fVar0 >= MISC::GET_DISTANCE_BETWEEN_COORDS(func_3829(iParam0, 2, 0), func_3829(iParam0, 2, 14f), true))
    {
      TASK::VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(*uParam1, 6f);
      return;
    }
    else
    {
      TASK::VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(*uParam1, 9f);
    }
    if (fVar0 >= MISC::GET_DISTANCE_BETWEEN_COORDS(func_3829(iParam0, 2, 0), func_3829(iParam0, 2, func_3828(iParam0)), true))
    {
      if (SYSTEM::VMAG(ENTITY::GET_ENTITY_VELOCITY(*uParam1)) < 1f)
      {
        VEHICLE::_0x6501129C9E0FFA05(*uParam1, 1f);
      }
    }
  }
}