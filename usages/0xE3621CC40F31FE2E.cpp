// agency_heist3b.ysc @ L144485
void func_1063()
{
  vector3 vVar0;
  float fVar1;
  float fVar2;
  int iVar3;
  vector3 vVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  var uVar9;
  
  vVar0 = { 135.8793f, -749.3595f, 261.8527f };
  fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(func_116(), true), vVar0, true);
  fVar2 = 50f;
  iVar3 = 75;
  if (fVar1 <= 500f)
  {
    fVar2 = func_681((fVar2 * SYSTEM::POW((fVar1 / 500f), 2f)), 1.5f, 50f);
  }
  vVar4 = { ENTITY::GET_ENTITY_COORDS(func_116(), true) };
  fVar5 = MISC::ABSF((vVar4.z - vVar0.z));
  if (fVar5 <= 25f)
  {
    iVar3 = func_682(SYSTEM::ROUND((IntToFloat(iVar3) * SYSTEM::POW((fVar5 / 25f), 2f))), 0, 75);
  }
  HUD::GET_HUD_COLOUR(12, &iVar6, &iVar7, &iVar8, &uVar9);
  if (iVar3 != 0)
  {
    GRAPHICS::DRAW_MARKER(1, vVar0, 0f, 0f, 0f, 0f, 0f, 0f, 25f, 25f, fVar2, iVar6, iVar7, iVar8, iVar3, 0, 0, 2, 0, 0, 0, false);
  }
}