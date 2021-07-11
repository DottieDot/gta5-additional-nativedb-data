// am_pi_menu.ysc @ L419661
void func_5294()
{
  if (MISC::IS_PC_VERSION())
  {
    if (HUD::IS_PAUSE_MENU_ACTIVE() || HUD::IS_WARNING_MESSAGE_ACTIVE())
    {
      if (iLocal_20 == 1)
      {
        HUD::_SET_MOUSE_CURSOR_SPRITE(1);
        iLocal_20 = 0;
      }
    }
    else
    {
      iLocal_20 = 1;
    }
  }
}