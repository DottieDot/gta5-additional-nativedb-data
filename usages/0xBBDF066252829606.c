// fm_mission_controller.c @ L315986
void func_4292(bool bParam0, bool bParam1, int iParam2)
{
  int iVar0;
  int iVar1;
  int iVar2;
  
  iVar0 = 0;
  while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
  {
    iVar1 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
    if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar1))
    {
      iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar1);
      if (func_197(iVar2, 1, 1))
      {
        if (iVar2 != iLocal_1071)
        {
          NETWORK::NETWORK_CONCEAL_PLAYER(iVar2, bParam0, 0);
        }
      }
    }
    iVar0++;
  }
  if (bParam1)
  {
    NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(iLocal_1073, !bParam0, iParam2);
  }
}