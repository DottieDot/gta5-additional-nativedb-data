// am_armwrestling.ysc @ L129652
void func_1213(int iParam0)
{
  if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
  {
    NETWORK::NETWORK_SET_TALKER_PROXIMITY(iParam0);
    NETWORK::NETWORK_SET_TEAM_ONLY_CHAT(0);
  }
}