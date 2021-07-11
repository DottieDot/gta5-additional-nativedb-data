// act_cinema.c @ L121221
int func_1115()
{
  if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
  {
    if (func_1117(1) >= Global_262145.f_3949 || MONEY::NETWORK_CAN_SPEND_MONEY(Global_262145.f_3949, false, true, 0, -1, 0))
    {
      return 1;
    }
  }
  else if (func_1116(func_484()) >= (20 * iLocal_276))
  {
    return 1;
  }
  return 0;
}