// freemode.c @ L930668
void func_14259()
{
  if (Global_2405071.f_2454 == 1)
  {
    if (Global_2405071.f_2463 == SCRIPT::GET_ID_OF_THIS_THREAD())
    {
      if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405071.f_2460) > func_1543(0) + 2000)
      {
        NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
        PED::_0xFEE4A5459472A9F8();
        func_1387();
        Global_2405071.f_2454 = 0;
      }
    }
  }
}