// appinternet.c @ L170518
void func_1614(int iParam0, int iParam1)
{
  if (iParam0 >= 2500000)
  {
    MONEY::NETWORK_EARN_FROM_PROPERTY(2499999, iParam1);
    iParam0 = (iParam0 - 2499999);
  }
  if (func_728())
  {
    NETSHOPPING::NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED(func_320(func_321()));
  }
  MONEY::NETWORK_EARN_FROM_PROPERTY(iParam0, iParam1);
}