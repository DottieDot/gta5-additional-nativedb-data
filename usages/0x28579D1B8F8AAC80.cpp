// am_mp_smpl_interior_int.ysc @ L271328
int func_4003(vector3 vParam0, float fParam1, var uParam2)
{
  vector3 vVar0;
  int iVar1;
  
  vVar0 = { vParam0 + Vector(uParam2, 0f, 0f) };
  iVar1 = SHAPETEST::START_SHAPE_TEST_CAPSULE(vParam0, vVar0, fParam1, 7, 0, 0);
  if (iVar1 != 0)
  {
  }
  return iVar1;
}