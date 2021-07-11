// am_armwrestling.ysc @ L118747
void func_776(int iParam0, int iParam1, var uParam2, var uParam3)
{
  int iVar0;
  
  iVar0 = 0;
  while (iVar0 < 8)
  {
    if (NETWORK::IS_TIME_MORE_THAN(iParam0->f_24[iVar0], iParam1) || iVar0 == 7)
    {
      *uParam2 = iParam0->f_24[iVar0];
      *uParam3 = iParam0->f_5[iVar0];
      return;
    }
    iVar0++;
  }
}