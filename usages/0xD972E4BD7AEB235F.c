// am_imp_exp.c @ L18539
void func_509(var uParam0, int iParam1)
{
  int iVar0;
  int iVar1;
  
  iVar1 = CLOCK::GET_CLOCK_DAY_OF_WEEK();
  iVar0 = 0;
  while (iVar0 < 5)
  {
    (*uParam0)[iVar0] = -1;
    uParam0->f_6[iVar0] = 0;
    iVar0++;
  }
  iVar0 = 0;
  while (iVar0 < 5)
  {
    if (iVar0 < iParam1)
    {
      (*uParam0)[iVar0] = func_496(iVar1, iVar0);
      uParam0->f_6[iVar0] = 0;
    }
    else
    {
      (*uParam0)[iVar0] = -1;
      uParam0->f_6[iVar0] = 1;
    }
    iVar0++;
  }
  Global_2097152[func_504() /*10828*/].f_6168.f_37 = iVar1;
}