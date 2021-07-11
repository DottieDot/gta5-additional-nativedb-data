// am_casino_peds.ysc @ L106091
void func_1045(bool bParam0)
{
  GRAPHICS::_SET_HIDOF_ENV_BLUR_PARAMS(0, 0, 0f, 0f, 0f, 0f);
  if (!func_1048())
  {
    bParam0 = false;
  }
  if (bParam0)
  {
    CAM::RENDER_SCRIPT_CAMS(false, false, 3000, 1, 1, 0);
  }
  if (func_1048())
  {
    STREAMING::CLEAR_FOCUS();
  }
  NETWORK::NETWORK_SET_IN_FREE_CAM_MODE(0);
  if (GRAPHICS::IS_SCREENBLUR_FADE_RUNNING())
  {
    GRAPHICS::TRIGGER_SCREENBLUR_FADE_OUT(200f);
  }
  HUD::BUSYSPINNER_OFF();
  if (Global_4456448 == 1 || Global_4456448 == 0)
  {
    func_1047();
  }
  Global_1662696 = 0;
  func_1046();
  func_1037();
}