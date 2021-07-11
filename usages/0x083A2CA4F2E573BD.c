// golf.c @ L121391
int func_1033(vector3 vParam0, float fParam1, vector3 vParam2)
{
  vector3 vVar0;
  vector3 vVar1;
  int iVar2;
  int iVar3;
  var uVar4;
  var uVar5;
  var uVar6;
  var uVar7;
  
  vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, fParam1, vParam2) };
  vVar1 = { 0.5f, 0.5f, 1f };
  GRAPHICS::DRAW_DEBUG_BOX(vVar0 - vVar1 * Vector(0.5f, 0.5f, 0.5f), vVar0 + vVar1 * Vector(0.5f, 0.5f, 0.5f), 0, 255, 10, 255);
  iVar2 = SHAPETEST::START_SHAPE_TEST_BOX(vVar0, vVar1, 0f, 0f, 0f, 2, 21, PLAYER::PLAYER_PED_ID(), 4);
  if (SHAPETEST::GET_SHAPE_TEST_RESULT_INCLUDING_MATERIAL(iVar2, &iVar3, &uVar4, &uVar5, &uVar7, &uVar6) != 2)
  {
  }
  if (iVar3 != 0)
  {
    return 1;
  }
  return 0;
}