// am_armwrestling.c @ L129725
void func_1221(int iParam0, int iParam1)
{
  NETWORK::NETWORK_BLOCK_INVITES(iParam0);
  NETWORK::_0x4A9FDE3A5A6D0437(iParam0);
  if (NETWORK::NETWORK_IS_HOST())
  {
    NETWORK::NETWORK_SESSION_BLOCK_JOIN_REQUESTS(iParam1);
  }
}