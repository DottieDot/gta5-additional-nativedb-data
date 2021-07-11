// agency_heist2.ysc @ L6818
void func_141()
{
  if (!PED::IS_PED_INJURED(iLocal_77))
  {
    if (!PED::IS_PED_FACING_PED(iLocal_77, PLAYER::PLAYER_PED_ID(), 60f))
    {
      if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_77, 242628503) != 1)
      {
        TASK::TASK_LOOK_AT_ENTITY(iLocal_77, PLAYER::PLAYER_PED_ID(), -1, 16, 2);
        TASK::OPEN_SEQUENCE_TASK(&iLocal_89);
        TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
        TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 16, 2);
        TASK::CLOSE_SEQUENCE_TASK(iLocal_89);
        TASK::TASK_PERFORM_SEQUENCE(iLocal_77, iLocal_89);
        TASK::CLEAR_SEQUENCE_TASK(&iLocal_89);
      }
    }
    else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_77, 242628503) != 1)
    {
      if (!PED::IS_PED_INJURED(iLocal_77))
      {
        TASK::TASK_LOOK_AT_ENTITY(iLocal_77, PLAYER::PLAYER_PED_ID(), -1, 16, 2);
      }
    }
  }
}