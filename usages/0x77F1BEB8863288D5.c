// abigail1.c @ L38728
int func_296(int iParam0, int iParam1)
{
  if (func_213(iParam0))
  {
    if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 0)
    {
      return 1;
    }
  }
  return 0;
}