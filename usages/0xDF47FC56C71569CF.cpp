// am_mp_arena_box.ysc @ L95891
void func_687()
{
  HUD::DISABLE_FRONTEND_THIS_FRAME();
  HUD::SUPPRESS_FRONTEND_RENDERING_THIS_FRAME();
  if (HUD::IS_PAUSE_MENU_ACTIVE())
  {
    HUD::SET_PAUSE_MENU_ACTIVE(0);
  }
}