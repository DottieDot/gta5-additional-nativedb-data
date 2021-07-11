// vehicle_stealth_mode.ysc @ L104
void func_1()
{
  func_13();
  if (func_10())
  {
    HUD::CLEAR_HELP(1);
  }
  if (func_8(&iLocal_46))
  {
    func_4(&iLocal_46);
  }
  PLAYER::SET_MAX_WANTED_LEVEL(5);
  func_3();
  PLAYER::_SET_PLAYER_HOMING_ROCKET_DISABLED(PLAYER::PLAYER_ID(), 0);
  func_2();
}