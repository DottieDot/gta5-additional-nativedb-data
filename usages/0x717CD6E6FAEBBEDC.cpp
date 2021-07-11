// celebrations.ysc @ L314403
void func_4251()
{
  MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
  Global_2448961.f_730 = 1;
  MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
  if (func_4254())
  {
    Global_2449755.f_3471.f_34 = 1;
  }
  func_4253(&Local_338);
  if (Global_2449755.f_3471.f_52 != 22 && Global_2449755.f_3471.f_52 != 23)
  {
    Global_2449755.f_3471.f_328 = 1;
  }
  if (Global_2449755.f_3471.f_52 == 23)
  {
    Global_2449755.f_3471.f_22 = 1;
  }
  if (!func_59(PLAYER::PLAYER_ID(), 0) && !Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_751)
  {
    func_4046(0, 0);
  }
  if (func_4240() && !func_4239())
  {
    func_4252();
  }
  if (Global_2449755.f_3471.f_32)
  {
    STREAMING::SET_GAME_PAUSES_FOR_STREAMING(0);
  }
  func_2(1);
  func_4242(0);
}