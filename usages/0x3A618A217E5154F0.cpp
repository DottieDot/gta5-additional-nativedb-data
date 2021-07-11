// agency_heist3b.ysc @ L11069
void func_117(bool bParam0)
{
  if (bParam0)
  {
    GRAPHICS::DRAW_RECT(0.5f, 0.5f, 1f, 1f, 0, 0, 0, 255, 0);
  }
  else
  {
    HUD::SET_TEXT_RENDER_ID(iLocal_1382);
    GRAPHICS::DRAW_RECT(0.426f, 0.366f, 0.925f, 0.723f, 0, 0, 0, 255, 0);
    HUD::SET_TEXT_RENDER_ID(iLocal_1381);
  }
}