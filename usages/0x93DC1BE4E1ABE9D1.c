// act_cinema.c @ L75789
int func_360(int iParam0, int iParam1, bool bParam2, int iParam3)
{
  int iVar0;
  int iVar1;
  
  if (bParam2)
  {
    iVar1 = 0;
    while (iVar1 < 32)
    {
      iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
      if (func_35(iVar0, 0, 1) || (iParam1 && NETWORK::NETWORK_IS_PLAYER_CONNECTED(iVar0)))
      {
        if (iParam0 == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(iVar0))
        {
          return iVar0;
        }
      }
      iVar1++;
    }
  }
  else if (func_35(iParam3, 0, 1) || (iParam1 && NETWORK::NETWORK_IS_PLAYER_CONNECTED(iParam3)))
  {
    if (iParam0 == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(iParam3))
    {
      return iParam3;
    }
  }
  return func_202();
}