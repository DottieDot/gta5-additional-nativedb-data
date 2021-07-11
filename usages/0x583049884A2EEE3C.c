// fm_mission_controller.c @ L251738
void func_3219(bool bParam0)
{
  if (func_3222() != 4)
  {
    func_3212();
  }
  if (!bParam0 && func_3222() != 4)
  {
    func_362(0);
  }
  func_3221();
  if (func_3222() != 4)
  {
    HUD::DISABLE_FRONTEND_THIS_FRAME();
  }
  func_3214();
  func_3213(4, -1);
  if (func_3222() != 4)
  {
    HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
  }
  else
  {
    func_3220();
  }
  func_3211(func_3222() != 4);
  HUD::THEFEED_HIDE_THIS_FRAME();
  HUD::THEFEED_FLUSH_QUEUE();
  HUD::THEFEED_FORCE_RENDER_OFF();
}