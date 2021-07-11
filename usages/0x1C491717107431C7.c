// fmmc_launcher.c @ L534984
void func_8153()
{
  if (HUD::IS_PAUSE_MENU_ACTIVE() || HUD::IS_PAUSE_MENU_RESTARTING())
  {
    HUD::DISPLAY_RADAR(false);
    HUD::SET_FRONTEND_ACTIVE(0);
  }
}