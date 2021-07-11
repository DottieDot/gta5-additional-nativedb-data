// epsilon4.ysc @ L35592
void func_252()
{
  if (func_231(Local_298[1 /*8*/]))
  {
    if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Jimmy_Boston", 0))
    {
      if (iLocal_283 >= 2)
      {
        if (func_231(Local_81.f_28[1]) && func_288(iLocal_292))
        {
          TASK::OPEN_SEQUENCE_TASK(&iLocal_435);
          TASK::TASK_WARP_PED_INTO_VEHICLE(0, iLocal_292, 0);
          TASK::CLOSE_SEQUENCE_TASK(iLocal_435);
          TASK::TASK_PERFORM_SEQUENCE(Local_81.f_28[1], iLocal_435);
          TASK::CLEAR_SEQUENCE_TASK(&iLocal_435);
          func_402("Did Jimmy pass exit");
        }
      }
      else
      {
        TASK::TASK_GO_STRAIGHT_TO_COORD(Local_81.f_28[1], 1764.089f, 4665.879f, 42.3031f, 1f, 20000, 1193033728, 1056964608);
        func_402("Did Jimmy regular exit");
      }
      PED::FORCE_PED_MOTION_STATE(Local_298[1 /*8*/], -668482597, false, 1, 0);
    }
  }
}