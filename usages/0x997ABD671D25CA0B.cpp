// abigail1.ysc @ L38903
void func_305()
{
  if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
  {
    if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
    {
      if (func_297(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 10.5f, 1, 1056964608, 0, 1, 0))
      {
        if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -828834893) != 1)
        {
          TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
        }
      }
    }
  }
}