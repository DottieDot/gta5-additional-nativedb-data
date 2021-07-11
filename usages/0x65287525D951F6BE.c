// golf.c @ L114120
int func_800(vector3 vParam0, int iParam1, int iParam2, int iParam3)
{
  int iVar0;
  var uVar1;
  var uVar2;
  int iVar3;
  var uVar4;
  int iVar5;
  
  iVar5 = SHAPETEST::START_SHAPE_TEST_CAPSULE(vParam0 + Vector(0.25f, 0f, 0f), vParam0 - Vector(0.25f, 0f, 0f), 0.05f, 1, iParam3, 4);
  if (SHAPETEST::GET_SHAPE_TEST_RESULT_INCLUDING_MATERIAL(iVar5, &iVar0, &uVar1, &uVar2, &iVar3, &uVar4) != 2)
  {
  }
  if (iVar0 != 0)
  {
    *iParam1 = func_799(iVar3);
    if (*iParam1 == 3)
    {
      if (func_712(vParam0))
      {
        *iParam1 = 2;
      }
    }
    if (func_710(vParam0))
    {
      *iParam1 = 9;
    }
    return 1;
  }
  *iParam1 = iParam2;
  return 0;
}