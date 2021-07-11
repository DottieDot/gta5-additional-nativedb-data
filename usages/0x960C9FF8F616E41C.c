// fm_mission_controller.c @ L591197
void func_9433(var uParam0, bool bParam1, bool bParam2)
{
  if (!HUD::IS_PAUSE_MENU_ACTIVE())
  {
    func_9434(uParam0, bParam2);
    func_9416(uParam0, bParam1, 1, bParam2);
    func_9415();
    if ((MISC::GET_GAME_TIMER() - uParam0->f_282) > 500)
    {
      uParam0->f_282 = 0;
      if (PAD::_IS_INPUT_DISABLED(2))
      {
        HUD::DISPLAY_HELP_TEXT_THIS_FRAME("CIRC_HACK_1_KM", 0);
      }
      else
      {
        HUD::DISPLAY_HELP_TEXT_THIS_FRAME("CIRC_HACK_1", 0);
      }
    }
    if (MISC::IS_BIT_SET(uParam0->f_280, 0) || MISC::IS_BIT_SET(*uParam0, 25))
    {
      uParam0->f_24 = 8;
    }
  }
}