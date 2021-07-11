// freemode.ysc @ L146260
void func_1667(int iParam0, bool bParam1)
{
  struct<14> Var0;
  struct<13> Var1;
  
  if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
  {
    if (!func_1669())
    {
      if (iParam0 != -1)
      {
        if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
        {
          NETWORK::_0xA7C511FA1C5BDA38(iParam0, 1);
          func_101(&(Global_1676406[iParam0 /*5*/].f_2), 0, 0);
          if (bParam1)
          {
            func_1619("GRIEF_TICK_VIC", iParam0, 0, 0, 0, 1, 1, 0);
          }
          Var0.f_10 = PLAYER::PLAYER_ID();
          Var0.f_2 = -1256884122;
          func_1668(Var0, func_17850(iParam0));
          if (MISC::IS_BIT_SET(Global_1573899, 3))
          {
            MISC::SET_BIT(&Global_1573899, 7);
          }
          Var1 = { func_38(iParam0) };
          STATS::_0x7033EEFD9B28088E(&Var1);
        }
      }
    }
  }
}