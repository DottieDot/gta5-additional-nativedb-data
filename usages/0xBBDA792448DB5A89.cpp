// achievement_controller.ysc @ L7440
int func_24()
{
  int iVar0;
  int iVar1;
  float fVar2;
  
  if (MISC::IS_PC_VERSION())
  {
    return 0;
  }
  if (func_102())
  {
    if (func_27())
    {
      iVar0 = func_26();
      iVar1 = func_25();
      fVar2 = ((SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(iVar0)) * 100f);
      if (fVar2 > IntToFloat(Global_262145.f_121) && iVar0 >= 8)
      {
        return 1;
      }
    }
  }
  return 0;
}