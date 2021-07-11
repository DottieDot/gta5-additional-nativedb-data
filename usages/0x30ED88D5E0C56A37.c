// am_mp_arcade_claw_crane.c @ L82228
int func_416(int iParam0, int iParam1, int iParam2)
{
  if (func_417(iParam0, iParam2, 0) || MISC::IS_BIT_SET(*iParam0, 13))
  {
    if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(iParam1) && TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(iParam1))
    {
      return 1;
    }
  }
  return 0;
}