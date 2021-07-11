// abigail2.c @ L37375
int func_308(int iParam0, int iParam1, int iParam2)
{
  int iVar0;
  int iVar1;
  var uVar2;
  
  iVar0 = 0;
  if (iParam1 == -1)
  {
    iParam1 = func_19();
  }
  iVar1 = func_310(iParam0, iParam1);
  uVar2 = func_309(iParam0);
  if (0 != iVar1)
  {
    iVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, uVar2, iParam2);
  }
  return iVar0;
}