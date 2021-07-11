// abigail1.c @ L34191
int func_220(int iParam0, int iParam1, var uParam2, int iParam3)
{
  int iVar0;
  
  iVar0 = 0;
  if (MISC::IS_PC_VERSION())
  {
    if (CUTSCENE::_0xA0FE76168A189DDB() != iParam0 && uParam2)
    {
      CUTSCENE::_0x20746F7B1032A3C7(iParam0, iParam1, 1, iParam3);
      iVar0 = 1;
    }
  }
  return iVar0;
}