// dont_cross_the_line.ysc @ L2763
int func_82(int iParam0)
{
  int iVar0;
  int iVar1;
  
  iVar0 = 0;
  while (iVar0 < 4)
  {
    if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)) && Local_225[iVar0 /*2*/] == iParam0)
    {
      iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
      if (!NETWORK::NETWORK_PLAYER_HAS_HEADSET(iVar1))
      {
        return 0;
      }
      if (NETWORK::NETWORK_IS_PLAYER_MUTED_BY_ME(iVar1))
      {
        return 1;
      }
      if (NETWORK::NETWORK_IS_PLAYER_TALKING(iVar1))
      {
        return 3;
      }
      return 2;
    }
    iVar0++;
  }
  return 0;
}