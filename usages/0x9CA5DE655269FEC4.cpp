// am_casino_limo.ysc @ L16617
void func_348(bool bParam0, int iParam1)
{
  func_350();
  func_342(1);
  HUD::CLEAR_HELP(1);
  HUD::CLEAR_PRINTS();
  func_330(1, 1, 1, 0, 0, 0);
  func_349();
  func_328(12, 1, -1);
  func_327(0);
  CAM::SET_WIDESCREEN_BORDERS(true, -1);
  HUD::DISPLAY_RADAR(false);
  HUD::DISPLAY_HUD(false);
  func_342(1);
  func_325(1);
  Global_2437549.f_3732 = 1;
  if (bParam0)
  {
    if (!NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
    {
      NETWORK::NETWORK_SET_IN_MP_CUTSCENE(1, iParam1);
    }
  }
}