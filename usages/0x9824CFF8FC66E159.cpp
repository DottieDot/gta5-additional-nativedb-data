// assassin_hooker.ysc @ L10737
int func_223()
{
  int iVar0;
  
  if (iLocal_1340 >= 3)
  {
    if (iLocal_1340 < 6 || (((iLocal_1340 == 6 && !ENTITY::IS_ENTITY_DEAD(Local_978.f_1, 0)) && TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_978.f_1)) && TASK::GET_VEHICLE_WAYPOINT_PROGRESS(Local_978.f_1) <= 30))
    {
      iVar0 = VEHICLE::GET_CLOSEST_VEHICLE(vLocal_1433, fLocal_1443, 0, 4);
      if (iVar0 != 0)
      {
        return 1;
      }
    }
  }
  return 0;
  return 0;
}