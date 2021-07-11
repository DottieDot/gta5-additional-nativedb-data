// am_casino_peds.ysc @ L338906
void func_4350(var uParam0)
{
  int iVar0;
  int iVar1;
  var uVar2;
  
  iVar1 = 0;
  while (iVar1 < 6)
  {
    uParam0->f_72[iVar1] = iVar1;
    iVar1++;
  }
  iVar1 = 0;
  while (iVar1 < 6)
  {
    iVar0 = MISC::_GET_RANDOM_INT_IN_RANGE_2(0, 6);
    uVar2 = uParam0->f_72[iVar1];
    uParam0->f_72[iVar1] = uParam0->f_72[iVar0];
    uParam0->f_72[iVar0] = uVar2;
    iVar1++;
  }
}