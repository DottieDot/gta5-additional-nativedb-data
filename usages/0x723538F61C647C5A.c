// maintransition.c @ L144531
void func_1443(var uParam0)
{
  var uVar0;
  var uVar1;
  int iVar2;
  
  iVar2 = uParam0->f_467;
  uVar0 = func_1301(uParam0, iVar2);
  uVar1 = func_1299(uParam0, iVar2);
  if (func_1259(&(uParam0->f_42[iVar2])))
  {
    PED::UPDATE_PED_HEAD_BLEND_DATA(uParam0->f_42[iVar2], uVar0, uVar1, 0f);
  }
  if (iVar2 == 0)
  {
    iVar2 = 1;
  }
  else
  {
    iVar2 = 0;
  }
  uVar0 = func_1301(uParam0, iVar2);
  uVar1 = func_1299(uParam0, iVar2);
  if (func_1259(&(uParam0->f_42[iVar2])))
  {
    PED::UPDATE_PED_HEAD_BLEND_DATA(uParam0->f_42[iVar2], uVar0, uVar1, 0f);
  }
}