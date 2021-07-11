// act_cinema.c @ L91507
int func_504(int iParam0)
{
  if (func_507(PLAYER::PLAYER_ID(), iParam0))
  {
    return 1;
  }
  Global_2507671 = { func_377(iParam0) };
  if (NETWORK::NETWORK_IS_FRIEND(&Global_2507671))
  {
    return 1;
  }
  if (func_505(PLAYER::PLAYER_ID(), iParam0))
  {
    return 1;
  }
  return 0;
}