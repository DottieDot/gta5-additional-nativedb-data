// am_mp_defunct_base.ysc @ L350910
void func_5365()
{
  if (((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_IS_SESSION_ACTIVE()) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT()) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
  {
    func_5366(&(Local_263.f_500), &Global_3932160);
  }
  func_4(&(Local_499[PLAYER::PLAYER_ID() /*17*/].f_13), &(Local_1791.f_3412));
}