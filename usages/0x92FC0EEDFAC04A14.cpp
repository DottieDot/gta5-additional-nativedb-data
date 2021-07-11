// am_mp_arc_cab_manager.ysc @ L97322
void func_782(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
  int iVar0;
  var uVar1;
  
  func_783(iParam0, &(uParam1->f_725), uParam1->f_715);
  uVar1 = iParam0->f_1;
  if (MISC::IS_BIT_SET(*iParam0, 0))
  {
    iVar0 = 0;
  }
  else
  {
    iVar0 = iParam5;
  }
  STATS::_0x92FC0EEDFAC04A14(uParam2, uParam3, iParam4, MISC::IS_BIT_SET(*iParam0, 0), iVar0, uVar1);
}