// fm_mission_controller.c @ L645231
void func_10363(int iParam0)
{
  int iVar0;
  int iVar1;
  int iVar2;
  
  iVar0 = 0;
  while (iVar0 <= 31)
  {
    iVar1 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
    if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar1))
    {
      iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar1);
      NETWORK::NETWORK_OVERRIDE_RECEIVE_RESTRICTIONS(iVar2, iParam0);
      NETWORK::NETWORK_OVERRIDE_SEND_RESTRICTIONS(iVar2, iParam0);
    }
    iVar0++;
  }
}