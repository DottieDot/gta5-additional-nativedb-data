// am_armwrestling.ysc @ L54822
void func_462()
{
  bool bVar0;
  
  HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
  func_463();
  HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
  HUD::HIDE_HUD_COMPONENT_THIS_FRAME(1);
  HUD::HIDE_HUD_COMPONENT_THIS_FRAME(3);
  HUD::HIDE_HUD_COMPONENT_THIS_FRAME(4);
  HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
  HUD::HIDE_HUD_COMPONENT_THIS_FRAME(15);
  HUD::HIDE_HUD_COMPONENT_THIS_FRAME(11);
  HUD::HIDE_HUD_COMPONENT_THIS_FRAME(12);
  HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
  bVar0 = false;
  bVar0 = func_793("HQRHELP");
  if (!bVar0)
  {
    HUD::HIDE_HELP_TEXT_THIS_FRAME();
  }
  func_260(0);
  PAD::STOP_PAD_SHAKE(0);
  func_260(0);
  PAD::DISABLE_CONTROL_ACTION(2, 199, 1);
}