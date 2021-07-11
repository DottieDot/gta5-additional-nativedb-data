// am_ammo_drop.ysc @ L1491
void func_40(int iParam0, int iParam1)
{
  vector3 vVar0;
  vector3 vVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  var uVar6;
  float fVar7;
  float fVar8;
  
  HUD::GET_HUD_COLOUR(iParam1, &iVar3, &iVar4, &iVar5, &uVar6);
  fVar2 = 0.5f;
  MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_OBJ(iParam0)), &vVar0, &vVar1);
  fVar7 = ((vVar1.z - vVar0.z) / 2f);
  fVar8 = (vVar1.z - fVar7);
  if (fVar2 <= (fVar8 + 0.1f))
  {
    fVar2 = (fVar8 + 0.4f);
  }
  GRAPHICS::DRAW_MARKER(2, ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(iParam0), true) + Vector((((vVar1.z - vVar0.z) / 2f) + fVar2), 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, iVar3, iVar4, iVar5, 100, 1, 1, 2, 0, 0, 0, false);
}