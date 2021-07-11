// am_mp_defunct_base.ysc @ L329006
void func_4931(int iParam0, bool bParam1, int iParam2)
{
  float fVar0;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
  GRAPHICS::SET_DRAW_ORIGIN(ENTITY::GET_ENTITY_COORDS(iParam0, true), 0);
  fVar0 = 0.015f;
  HUD::GET_HUD_COLOUR(iParam2, &iVar1, &iVar2, &iVar3, &iVar4);
  if (!bParam1)
  {
    GRAPHICS::DRAW_SPRITE("helicopterhud", "hud_corner", (-fVar0 * 0.6f), -fVar0, (fVar0 * 1.5f), (fVar0 * 1.5f), 0f, iVar1, iVar2, iVar3, iVar4, 1);
  }
  GRAPHICS::DRAW_SPRITE("helicopterhud", "hud_corner", (fVar0 * 0.6f), -fVar0, (fVar0 * 1.5f), (fVar0 * 1.5f), 90f, iVar1, iVar2, iVar3, iVar4, 1);
  GRAPHICS::DRAW_SPRITE("helicopterhud", "hud_corner", (-fVar0 * 0.6f), fVar0, (fVar0 * 1.5f), (fVar0 * 1.5f), 270f, iVar1, iVar2, iVar3, iVar4, 1);
  GRAPHICS::DRAW_SPRITE("helicopterhud", "hud_corner", (fVar0 * 0.6f), fVar0, (fVar0 * 1.5f), (fVar0 * 1.5f), 180f, iVar1, iVar2, iVar3, iVar4, 1);
  GRAPHICS::CLEAR_DRAW_ORIGIN();
}