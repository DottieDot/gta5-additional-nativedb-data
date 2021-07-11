// golf.c @ L115500
void func_852(int iParam0, var uParam1, int iParam2, bool bParam3)
{
  int iVar0;
  vector3 vVar1;
  vector3 vVar2;
  var uVar3;
  
  iVar0 = 4;
  vVar2 = { iParam2->f_562 };
  if (func_714(vVar2))
  {
    vVar2 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
  }
  if (MISC::GET_GROUND_Z_AND_NORMAL_FOR_3D_COORD(vVar2 + Vector(1f, 0f, 0f), &uVar3, &vVar1))
  {
    vVar2.z = uVar3;
    ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam0, vVar2 + Vector(0.05f, 0f, 0f), 0, 0, 1);
    func_1158(uParam1, -vVar1);
  }
  else
  {
    func_1158(uParam1, 0f, 0f, -1f);
  }
  func_800(vVar2, &iVar0, func_550(uParam1), iParam0);
  if (iVar0 == 8 && !bParam3)
  {
    iVar0 = 3;
  }
  func_1159(uParam1, vVar2, iVar0);
}