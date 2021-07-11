// act_cinema.c @ L115239
int func_999(int iParam0, var uParam1, int iParam2, bool bParam3)
{
  if (iParam2 == -1)
  {
    return 1;
  }
  if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam3)
  {
    if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iParam0)) >= iParam2)
    {
      return 1;
    }
  }
  else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), iParam0)) >= iParam2)
  {
    return 1;
  }
  return 0;
}