// am_penned_in.ysc @ L18321
void func_494()
{
  if (!MISC::IS_BIT_SET(iLocal_115, 19))
  {
    func_502();
    HUD::_0xCD74233600C4EA6B(0);
    if (func_501("SCTV_HELI_HLP"))
    {
      HUD::CLEAR_HELP(1);
    }
    func_496(&(Local_112.f_184), 1, MISC::IS_BIT_SET(Local_112.f_1, 5), 0);
    if (!func_376(PLAYER::PLAYER_ID(), 0))
    {
      MISC::CLEAR_BIT(&(Local_113[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 11);
      MISC::CLEAR_BIT(&(Global_2424073[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*421*/].f_195), 2);
      MISC::CLEAR_BIT(&(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_1), 14);
      func_495(PLAYER::PLAYER_ID(), 0);
    }
    MISC::SET_BIT(&iLocal_115, 19);
  }
}