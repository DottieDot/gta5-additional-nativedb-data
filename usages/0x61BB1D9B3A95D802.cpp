// act_cinema.ysc @ L2196
void func_46()
{
  HUD::SET_HUD_COMPONENT_POSITION(15, 0f, -0.0375f);
  HUD::SET_TEXT_RENDER_ID(iLocal_262);
  GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
  GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
  if (GRAPHICS::_IS_TV_PLAYLIST_ITEM_PLAYING(80996397))
  {
    GRAPHICS::DRAW_TV_CHANNEL(0.5f, 0.5f, 0.7375f, 1f, 0f, 255, 255, 255, 255);
  }
  else
  {
    GRAPHICS::DRAW_TV_CHANNEL(0.5f, 0.5f, 1f, 1f, 0f, 255, 255, 255, 255);
  }
}