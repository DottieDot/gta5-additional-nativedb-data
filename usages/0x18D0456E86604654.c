// act_cinema.c @ L116587
void func_1022()
{
  int iVar0;
  int iVar1;
  
  if (!MISC::IS_BIT_SET(iLocal_280, iLocal_281))
  {
    if (Local_289[iLocal_281 /*2*/])
    {
      if (iLocal_281 != NETWORK::PARTICIPANT_ID_TO_INT())
      {
        iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_281));
        func_1023("MP_CIN_TICKIN", iVar0, 0, 0, 0, 1, 1, 0);
      }
      MISC::SET_BIT(&iLocal_280, iLocal_281);
    }
  }
  else if (!Local_289[iLocal_281 /*2*/])
  {
    if (iLocal_281 != NETWORK::PARTICIPANT_ID_TO_INT())
    {
      iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_281));
      func_1023("MP_CIN_TICKOUT", iVar1, 0, 0, 0, 1, 1, 0);
    }
    MISC::CLEAR_BIT(&iLocal_280, iLocal_281);
  }
  iLocal_281++;
  if (iLocal_281 >= NETWORK::NETWORK_GET_NUM_PARTICIPANTS())
  {
    iLocal_281 = 0;
  }
}