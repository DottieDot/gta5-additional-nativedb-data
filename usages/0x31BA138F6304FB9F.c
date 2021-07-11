// appinternet.c @ L77445
void func_1024(int iParam0, int iParam1)
{
  if (iParam0 >= 2500000)
  {
    MONEY::_0x31BA138F6304FB9F(2499999, iParam1);
    iParam0 = (iParam0 - 2499999);
  }
  if (func_728())
  {
    NETSHOPPING::NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED(func_320(func_321()));
  }
  MONEY::_0x31BA138F6304FB9F(iParam0, iParam1);
}