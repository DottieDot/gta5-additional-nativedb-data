// am_mp_armory_truck.ysc @ L278893
void func_4059(int iParam0, int iParam1)
{
  if (iParam0 == -1)
  {
    return;
  }
  HUD::SET_TEXT_RENDER_ID(iParam0);
  GRAPHICS::SET_SCRIPT_GFX_ALIGN(73, 73);
  GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
  GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
  GRAPHICS::_DRAW_INTERACTIVE_SPRITE(func_4066(iParam1), func_4060(iParam1), 0.5f, 0.5f, 1f, 1f, 0f, 255, 255, 255, 255);
  GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
  HUD::SET_TEXT_RENDER_ID(HUD::GET_DEFAULT_SCRIPT_RENDERTARGET_RENDER_ID());
}