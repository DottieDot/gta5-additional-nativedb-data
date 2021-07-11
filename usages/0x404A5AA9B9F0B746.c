// minute3.c @ L37013
void func_301()
{
  int iVar0;
  
  if (func_41(iLocal_122) && func_589(Local_94))
  {
    if (func_291(Local_94, -235832601) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_133))
    {
      if (TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_133, ENTITY::GET_ENTITY_COORDS(iLocal_122, true), &iVar0))
      {
        if ((iVar0 > iLocal_134 && iLocal_313) && !iLocal_315)
        {
          if (((!TASK::GET_SCRIPT_TASK_STATUS(Local_94, -1273030092) == 1 && !TASK::GET_SCRIPT_TASK_STATUS(Local_94, -828834893) == 1) && !PED::IS_PED_FLEEING(Local_94)) && !TASK::GET_SCRIPT_TASK_STATUS(Local_94, 242628503) == 1)
          {
            TASK::SET_DRIVE_TASK_MAX_CRUISE_SPEED(Local_94, 15f);
            TASK::TASK_VEHICLE_MISSION_PED_TARGET(Local_94, iLocal_122, PLAYER::PLAYER_PED_ID(), 8, 15f, 786468, 100f, 1f, 1);
            iLocal_313 = 0;
          }
        }
      }
    }
  }
}