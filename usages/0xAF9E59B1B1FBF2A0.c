// am_mp_bunker.c @ L308700
int func_4533()
{
  if (!func_4534(iLocal_2411))
  {
    return 0;
  }
  if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -828834893) == 1 || TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -828834893) == 0)
  {
    return 0;
  }
  if (func_147(&uLocal_2418) && !func_145(&uLocal_2418, 1000, 1))
  {
    return 0;
  }
  if (PED::GET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 373))
  {
    return 0;
  }
  if (Global_1687833)
  {
    return 0;
  }
  if (func_271(0))
  {
    return 0;
  }
  return 1;
}