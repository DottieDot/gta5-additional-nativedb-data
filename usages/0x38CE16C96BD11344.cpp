// act_cinema.ysc @ L81415
int func_420()
{
  if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == func_421())
  {
    if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Global_2424073[PLAYER::PLAYER_ID() /*421*/].f_38) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Global_2424073[PLAYER::PLAYER_ID() /*421*/].f_38))
    {
      return NETWORK::NET_TO_VEH(Global_2424073[PLAYER::PLAYER_ID() /*421*/].f_38);
    }
  }
  return Global_2531497.f_296;
}