// am_armwrestling_apartment.ysc @ L61404
void func_794()
{
  int iVar0;
  int iVar1;
  
  iVar1 = 0;
  while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
  {
    if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
    {
      iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
      NETWORK::SET_PLAYER_VISIBLE_LOCALLY(iVar0, 0);
    }
    iVar1++;
  }
}