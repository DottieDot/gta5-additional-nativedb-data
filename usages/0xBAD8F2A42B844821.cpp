// pausemenu_multiplayer.ysc @ L10377
int func_243()
{
  int iVar0;
  int iVar1;
  
  iVar0 = NETWORK::NETWORK_GET_FRIEND_COUNT();
  if (iVar0 > 0)
  {
    iVar1 = 0;
    while (iVar1 < iVar0)
    {
      if (NETWORK::NETWORK_IS_FRIEND_INDEX_ONLINE(iVar1))
      {
        if (NETWORK::NETWORK_IS_FRIEND_IN_SAME_TITLE(NETWORK::NETWORK_GET_FRIEND_NAME(iVar1)))
        {
          return 1;
        }
      }
      iVar1++;
    }
  }
  return 0;
}