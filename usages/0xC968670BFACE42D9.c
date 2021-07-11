// act_cinema.c @ L123105
void func_1206()
{
  int iVar0;
  
  if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
  {
    NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, 0, -1);
    func_1208(0, -1, 0);
    NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_288, 35);
    NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_289, 65);
    iVar0 = 0;
    while (iVar0 < 32)
    {
      Local_288[iVar0] = -1;
      iVar0++;
    }
    MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
    if (!func_1207())
    {
      func_1192();
    }
    bLocal_277 = true;
  }
  else if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(131))
  {
    func_1192();
  }
}