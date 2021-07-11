// agency_prep2amb.ysc @ L565
int func_12(int iParam0, int iParam1, int iParam2)
{
  if (PAD::IS_CONTROL_JUST_PRESSED(iParam0, iParam1) || (iParam2 == 1 && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(iParam0, iParam1)))
  {
    if (MISC::IS_PC_VERSION())
    {
      if (MISC::UPDATE_ONSCREEN_KEYBOARD() == 0 || (NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE() && PAD::_IS_INPUT_DISABLED(2)))
      {
        return 0;
      }
    }
    if (HUD::IS_PAUSE_MENU_ACTIVE() || HUD::IS_WARNING_MESSAGE_ACTIVE())
    {
      return 0;
    }
    else
    {
      return 1;
    }
  }
  return 0;
}