// am_kill_list.ysc @ L8840
void func_163()
{
  if (func_15(PLAYER::PLAYER_ID(), 0))
  {
    return;
  }
  if (Local_115[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 == 1)
  {
    if (!MISC::IS_BIT_SET(iLocal_117, 13))
    {
      MISC::SET_BIT(&iLocal_117, 13);
      NETWORK::USE_PLAYER_COLOUR_INSTEAD_OF_TEAM_COLOUR(1, 0);
    }
  }
  else if (MISC::IS_BIT_SET(iLocal_117, 13))
  {
    if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
    {
      if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
      {
        NETWORK::USE_PLAYER_COLOUR_INSTEAD_OF_TEAM_COLOUR(0, 0);
        MISC::CLEAR_BIT(&iLocal_117, 13);
      }
    }
  }
}