// am_mp_arena_box.c @ L105736
int func_1020(bool bParam0)
{
  if ((((NETWORK::NETWORK_IS_IN_TRANSITION() || NETWORK::NETWORK_IS_TRANSITION_STARTED()) || NETWORK::NETWORK_IS_TRANSITION_BUSY()) || NETWORK::NETWORK_IS_TRANSITION_MATCHMAKING()) || NETWORK::_0xC571D0E77D8BBC29())
  {
    if (bParam0)
    {
      NETWORK::NETWORK_BAIL_TRANSITION(43, 0, 0);
      return 1;
    }
    if (NETWORK::NETWORK_IS_TRANSITION_BUSY() || NETWORK::NETWORK_IS_TRANSITION_MATCHMAKING())
    {
      return 0;
    }
    else if (NETWORK::NETWORK_IS_TRANSITION_STARTED())
    {
      if (Global_2449755.f_1.f_2802 == 0)
      {
        NETWORK::NETWORK_LEAVE_TRANSITION();
        Global_2449755.f_1.f_2802 = 1;
      }
      return 0;
    }
    else
    {
      return 0;
    }
    return 0;
  }
  return 1;
}