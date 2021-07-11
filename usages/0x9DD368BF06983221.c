// act_cinema.c @ L3916
int func_92(int iParam0, int iParam1)
{
  int iVar0;
  int iVar1;
  
  iVar0 = 0;
  while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
  {
    if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
    {
      iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
      NETWORK::NETWORK_DISABLE_INVINCIBLE_FLASHING(iVar1, 1);
      if (iParam1 && PLAYER::GET_PLAYER_TEAM(iVar1) != PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
      {
        NETWORK::_0xA7C511FA1C5BDA38(iVar1, 1);
      }
    }
    iVar0++;
  }
  if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
  {
    NETWORK::SET_NETWORK_VEHICLE_AS_GHOST(iParam0, 1);
    return 1;
  }
  else
  {
    NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iParam0);
  }
  return 0;
}