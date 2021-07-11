// fm_mission_controller.ysc @ L634201
void func_10138()
{
  int iVar0;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar0 = 0;
  while (iVar0 <= 31)
  {
    iVar1 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
    if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar1))
    {
      iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar1);
      iVar3 = PLAYER::GET_PLAYER_PED(iVar2);
      if (PED::IS_PED_IN_ANY_VEHICLE(iVar3, 0))
      {
        iVar4 = PED::GET_VEHICLE_PED_IS_IN(iVar3, 0);
        if ((MISC::IS_BIT_SET(Local_6942[iVar0 /*287*/].f_193, 2) || MISC::IS_BIT_SET(Local_6942[iVar0 /*287*/].f_192, 2)) || NETWORK::_0x7EF7649B64D7FF10(iVar4))
        {
          CAM::_0x2AED6301F67007D5(iVar4);
        }
      }
    }
    iVar0++;
  }
}