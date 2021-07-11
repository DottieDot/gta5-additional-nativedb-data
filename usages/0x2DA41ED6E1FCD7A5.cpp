// am_hot_target.ysc @ L2495
int func_25(int iParam0)
{
  var uVar0;
  int iVar1;
  
  if (Local_112.f_4 != func_7())
  {
    if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_112.f_4))
    {
      iVar1 = NETWORK::_0x2DA41ED6E1FCD7A5(Local_112.f_4, &uVar0);
      if (iVar1 != func_7())
      {
        if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iParam0)))
        {
          if (PLAYER::INT_TO_PLAYERINDEX(iParam0) == iVar1)
          {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}