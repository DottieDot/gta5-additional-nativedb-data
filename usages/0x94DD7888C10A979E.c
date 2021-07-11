// maintransition.c @ L121529
void func_979(var uParam0)
{
  if (!uParam0->f_364)
  {
    func_986(uParam0);
    if (HUD::IS_PAUSE_MENU_ACTIVE())
    {
      HUD::SET_PAUSE_MENU_ACTIVE(0);
    }
    uParam0->f_1837[0] = 0;
    uParam0->f_1837[1] = 0;
    func_490(uParam0, 1);
    func_906(&(uParam0->f_1849), 0, 0);
    if (LOADINGSCREEN::_LOADINGSCREEN_GET_LOAD_FREEMODE())
    {
      LOADINGSCREEN::_LOADINGSCREEN_SET_LOAD_FREEMODE(0);
      NETWORK::SHUTDOWN_AND_LAUNCH_SINGLE_PLAYER_GAME();
      return;
    }
    if (func_4255() == 0)
    {
      PLAYER::DISPLAY_SYSTEM_SIGNIN_UI(0);
    }
    uParam0->f_364 = 1;
  }
  func_420(1, 0);
  func_983(uParam0);
  func_980(uParam0);
}