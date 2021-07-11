// am_mp_armory_truck.c @ L297265
void func_4219()
{
  Global_73789 = 0;
  if (func_4053())
  {
    func_84();
  }
  if (Local_235.f_461 != -1)
  {
    func_46(&(Local_235.f_461));
  }
  if ((func_83() || func_82()) || func_81())
  {
    HUD::CLEAR_HELP(1);
  }
  PAD::ENABLE_CONTROL_ACTION(0, 0, 1);
  func_78(&Local_235);
  MISC::CLEAR_BIT(&(Local_235.f_462), 1);
  Local_235.f_7 = "";
  PLAYER::_SET_PLAYER_HEALTH_RECHARGE_LIMIT(PLAYER::GET_PLAYER_INDEX(), 0.5f);
  func_93(-1);
  Global_73789 = 0;
}