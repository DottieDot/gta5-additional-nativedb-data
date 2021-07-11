// am_casino_limo.ysc @ L51918
int func_536()
{
  if (func_282())
  {
    if (!func_540(PLAYER::PLAYER_PED_ID(), func_7(), 1000f, 1))
    {
      return 1;
    }
    if (func_538(PLAYER::PLAYER_ID(), 1, 1))
    {
      return 1;
    }
    if (func_537(PLAYER::PLAYER_ID()))
    {
      return 1;
    }
    if (func_234(PLAYER::PLAYER_ID()))
    {
      return 1;
    }
  }
  else if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(func_23()))
  {
    return 1;
  }
  return 0;
}