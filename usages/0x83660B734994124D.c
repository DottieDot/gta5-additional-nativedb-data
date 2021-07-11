// am_kill_list.c @ L6063
int func_100(int iParam0)
{
  var uVar0;
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
  {
    if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
    {
      iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
      if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_112.f_73[iParam0]), 0))
      {
        if (NETWORK::_NETWORK_GET_DESTROYER_OF_ENTITY(iVar2, NETWORK::NET_TO_VEH(Local_112.f_73[iParam0]), &uVar0))
        {
          return 1;
        }
      }
      else if (NETWORK::_0x83660B734994124D(iVar2, NETWORK::NET_TO_VEH(Local_112.f_73[iParam0]), &uVar0))
      {
        return 1;
      }
    }
    iVar1++;
  }
  return 0;
}