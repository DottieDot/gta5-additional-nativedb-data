// am_imp_exp.ysc @ L1808
int func_33()
{
  int iVar0;
  int iVar1;
  int iVar2;
  
  iVar0 = 0;
  if (Global_262145.f_2335 != 0)
  {
    iVar1 = Global_262145.f_2335;
    if (STREAMING::IS_MODEL_IN_CDIMAGE(iVar1))
    {
      if (STREAMING::IS_MODEL_A_VEHICLE(iVar1))
      {
        iVar0 = iVar1;
      }
    }
  }
  if (iVar0 == 0)
  {
    iVar2 = func_35(&Local_350);
    iVar0 = func_34(iVar2);
  }
  return iVar0;
}