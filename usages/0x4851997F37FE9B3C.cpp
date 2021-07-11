// am_hunt_the_beast.ysc @ L74501
void func_263(int iParam0, float fParam1, int iParam2, int iParam3)
{
  int iVar0;
  
  if (func_262())
  {
    iVar0 = Global_2575525[iParam0 /*3*/][func_71(iParam2)];
    if (iVar0 != 0)
    {
      STATS::STAT_SET_FLOAT(iVar0, fParam1, iParam3);
    }
  }
}