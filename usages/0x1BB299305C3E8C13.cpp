// fm_bj_race_controler.ysc @ L491478
void func_8084(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
  int iVar0;
  int iVar1;
  int iVar2;
  
  if (func_4289(uParam1) || func_246(Global_4194305.f_5))
  {
    return;
  }
  iVar0 = uParam0->f_542;
  iVar2 = (iParam3 - 1);
  iVar2 = 0;
  if (iVar2 == 0)
  {
    iVar1 = (iParam2 - 1);
  }
  else
  {
    iVar1 = iParam2;
  }
  MISC::_0x1BB299305C3E8C13(iVar0, iVar1, iVar2, iParam4);
}