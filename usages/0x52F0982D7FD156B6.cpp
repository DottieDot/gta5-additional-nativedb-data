// am_mp_arcade.ysc @ L319950
void func_4704(var uParam0)
{
  if (uParam0->f_8 == -1)
  {
    if ((MISC::GET_FRAME_COUNT() % 180) == 0)
    {
    }
    return;
  }
  HUD::SET_TEXT_RENDER_ID(uParam0->f_8);
  GRAPHICS::SET_SCRIPT_GFX_ALIGN(73, 73);
  GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
  GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
  func_4746();
  if (func_4743(uParam0))
  {
    if (uParam0->f_9 < 255)
    {
      func_4740(uParam0);
      func_4705(0, 0);
    }
  }
  if (uParam0->f_9 > 0)
  {
    GRAPHICS::DRAW_RECT(0f, 0f, 2f, 2f, 0, 0, 0, uParam0->f_9, 0);
  }
  GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
  HUD::SET_TEXT_RENDER_ID(HUD::GET_DEFAULT_SCRIPT_RENDERTARGET_RENDER_ID());
}