// freemode.ysc @ L605695
void func_8007(var uParam0, var uParam1)
{
  if (NETWORK::_0x14922ED3E38761F0())
  {
    if (!func_470())
    {
      if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
      {
        if (!HUD::IS_WARNING_MESSAGE_ACTIVE())
        {
          if (*uParam1 == 0 || func_514(uParam0, 300000, 0))
          {
            func_2012("TICKER_QUEUE", 1);
            *uParam1 = 1;
          }
        }
      }
    }
  }
  else
  {
    *uParam1 = 0;
  }
}