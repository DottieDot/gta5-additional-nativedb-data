// family5.ysc @ L103513
int func_506(vector3 vParam0, vector3 vParam1, float fParam2)
{
  int iVar0;
  var uVar1;
  var uVar2;
  var uVar3;
  int iVar4;
  
  iVar4 = SHAPETEST::START_SHAPE_TEST_CAPSULE(vParam0, vParam1, fParam2, 19, PLAYER::PLAYER_PED_ID(), 4);
  if (SHAPETEST::GET_SHAPE_TEST_RESULT(iVar4, &iVar0, &uVar1, &uVar2, &uVar3) != 2)
  {
  }
  if (iVar0 != 0)
  {
    return 0;
  }
  else
  {
    return 1;
  }
  return 0;
}