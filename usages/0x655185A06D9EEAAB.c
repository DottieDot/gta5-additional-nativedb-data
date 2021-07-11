// act_cinema.c @ L10624
int func_172(int iParam0, int iParam1, int iParam2)
{
  int iVar0;
  int iVar1;
  int iVar2;
  
  if (iParam1 == -1)
  {
    iParam1 = func_130();
  }
  iVar0 = 0;
  iVar1 = func_174(iParam0, iParam1);
  iVar2 = func_173(iParam0);
  if (0 != iVar1)
  {
    if (!STATS::STAT_GET_MASKED_INT(iVar1, &iVar0, iVar2, 8, iParam2))
    {
      iVar0 = 0;
    }
  }
  return iVar0;
}