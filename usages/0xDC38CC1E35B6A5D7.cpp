// am_armwrestling.ysc @ L117704
int func_720(var uParam0, var uParam1)
{
  if (!func_1036(uParam0, 6))
  {
    func_718(uParam1, 0, 0, 0, 1);
    func_717(uParam1, "MO_YES", 2, 201, 1, 1, 0);
    func_1039(uParam0, 6, 1);
  }
  if (!HUD::IS_PAUSE_MENU_ACTIVE())
  {
    HUD::SET_WARNING_MESSAGE_WITH_HEADER("ARMMP_END_QT", "ARMMP_QUITUI_D", 36, 0, 0, -1, 0, 0, 1, 0);
    if (PAD::IS_CONTROL_JUST_RELEASED(2, 201))
    {
      func_1039(uParam0, 6, 0);
      return 1;
    }
    else if (PAD::IS_CONTROL_JUST_RELEASED(2, 202))
    {
      func_1039(uParam0, 6, 0);
      return 2;
    }
  }
  return 0;
}