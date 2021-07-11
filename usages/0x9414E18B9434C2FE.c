// maintransition.c @ L136671
void func_1290(var uParam0, int iParam1)
{
  float fVar0;
  float fVar1;
  int iVar2;
  int iVar3;
  
  fVar0 = func_1301(uParam0, iParam1);
  fVar1 = func_1299(uParam0, iParam1);
  iVar2 = func_1295(uParam0, 3);
  iVar3 = func_1295(uParam0, 4);
  if (func_1259(&(uParam0->f_42[iParam1])))
  {
    PED::SET_PED_HEAD_BLEND_DATA(uParam0->f_42[iParam1], iVar2, iVar3, 0, iVar2, iVar3, 0, fVar0, fVar1, 0f, true);
  }
  func_1294(uParam0);
  func_1291(uParam0);
}