// am_gang_call.ysc @ L17197
int func_485(int iParam0)
{
  if (func_50())
  {
    if (func_488(iParam0))
    {
      if (func_487(iLocal_286) == 2)
      {
        NETSHOPPING::NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED(func_486(iLocal_286));
        MONEY::NETWORK_SPENT_ROBBED_BY_MUGGER(iParam0, 0, 0);
        func_321(iLocal_286);
        return 1;
      }
      else
      {
        func_321(iLocal_286);
        return 0;
      }
    }
  }
  else
  {
    return 1;
  }
  return -1;
}