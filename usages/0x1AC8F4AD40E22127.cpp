// fm_bj_race_controler.ysc @ L217288
void func_2774()
{
  func_2783();
  func_1350();
  PAD::STOP_PAD_SHAKE(0);
  HUD::CLEAR_PRINTS();
  func_2776();
  func_2775(1);
  HUD::DISPLAY_RADAR(false);
  NETWORK::NETWORK_SET_LOCAL_PLAYER_INVINCIBLE_TIME(0);
  Global_1574177 = -1;
  if (func_8026(PLAYER::PLAYER_ID(), 1, 1))
  {
    PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), 1);
  }
  if (func_1341())
  {
    func_4196(PLAYER::PLAYER_ID(), 0, 0, 0);
  }
  if (MISC::IS_PC_VERSION())
  {
    HUD::_CLOSE_MULTIPLAYER_CHAT();
  }
  HUD::SET_FRONTEND_ACTIVE(0);
}