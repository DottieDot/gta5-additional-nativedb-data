// am_mp_arcade.ysc @ L327098
void func_4992()
{
  CAM::INVALIDATE_IDLE_CAM();
  HUD::HUD_FORCE_WEAPON_WHEEL(0);
  HUD::DISPLAY_AMMO_THIS_FRAME(0);
  HUD::HIDE_HUD_COMPONENT_THIS_FRAME(19);
  HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
  func_3834(1);
  func_4993();
  func_265();
  HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
  HUD::THEFEED_HIDE_THIS_FRAME();
  func_541(1);
}