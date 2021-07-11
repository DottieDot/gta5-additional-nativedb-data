// am_challenges.c @ L21011
int func_609(int iParam0)
{
  int iVar0;
  
  if (!func_12(iParam0, 0, 1))
  {
    return -1;
  }
  if (Global_1385455 == 0)
  {
    return -1;
  }
  iVar0 = 0;
  iVar0 = 0;
  while (iVar0 < Global_1385455)
  {
    if (Global_1385294[iVar0 /*5*/].f_1 == iParam0)
    {
      if (PED::IS_PEDHEADSHOT_VALID(Global_1385294[iVar0 /*5*/].f_2) && PED::IS_PEDHEADSHOT_READY(Global_1385294[iVar0 /*5*/].f_2))
      {
        return iVar0;
      }
      func_610(iVar0);
      return -1;
    }
    iVar0++;
  }
  return -1;
}