// armenian2.c @ L8640
void func_136(int iParam0, bool bParam1)
{
  if (bParam1)
  {
    TASK::SET_SEQUENCE_TO_REPEAT(iLocal_298, 1);
  }
  TASK::CLOSE_SEQUENCE_TASK(iLocal_298);
  if (!PED::IS_PED_INJURED(iParam0))
  {
    TASK::TASK_PERFORM_SEQUENCE(iParam0, iLocal_298);
  }
  TASK::CLEAR_SEQUENCE_TASK(&iLocal_298);
}