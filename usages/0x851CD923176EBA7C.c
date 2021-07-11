// pausemenu_multiplayer.c @ L3137
void func_56()
{
  if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
  {
    if (!iLocal_984)
    {
      func_89();
      iLocal_984 = 1;
    }
    if (!CAM::IS_SCREEN_FADED_OUT())
    {
      CAM::DO_SCREEN_FADE_OUT(0);
    }
    HUD::SET_FRONTEND_ACTIVE(0);
    Global_1312433 = 0;
    func_1096(19);
    func_88();
    func_73(PLAYER::PLAYER_ID(), 0, 49152, 0);
    Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_98 = 8;
    func_72();
    func_1304();
    func_61(2, 1);
  }
  GRAPHICS::_0x851CD923176EBA7C();
  func_57(0);
}