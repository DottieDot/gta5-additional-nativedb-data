// clothes_shop_mp.c @ L349805
void func_1115(int iParam0)
{
  if (Global_4264392)
  {
    if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
    {
      if (iParam0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_4264393)) > 40000)
      {
        if (!Global_98721.f_1417 && !STATS::STAT_SAVE_PENDING_OR_REQUESTED())
        {
          if (func_717() && MISC::IS_PC_VERSION())
          {
          }
          else
          {
            if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
            {
              STATS::_0x5688585E6D563CD8(10);
            }
            func_1116(-264716935, 10, 0);
          }
          Global_4264393 = NETWORK::GET_NETWORK_TIME();
          Global_4264392 = 0;
        }
      }
    }
    else
    {
      func_653();
      Global_4264392 = 0;
    }
  }
}