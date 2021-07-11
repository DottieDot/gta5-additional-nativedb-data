// fmmc_launcher.c @ L529369
void func_7967(int iParam0)
{
  if (HUD::IS_PAUSE_MENU_ACTIVE())
  {
    if (HUD::GET_CURRENT_FRONTEND_MENU_VERSION() != iParam0)
    {
      HUD::RESTART_FRONTEND_MENU(iParam0, -1);
    }
    else
    {
      func_3941(8);
    }
  }
  else
  {
    HUD::ACTIVATE_FRONTEND_MENU(iParam0, 0, -1);
  }
}