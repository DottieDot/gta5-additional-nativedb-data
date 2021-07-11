// fm_mission_controller.ysc @ L652371
void func_10522()
{
  if (Local_6942[iLocal_1074 /*287*/].f_1 == 0)
  {
    iLocal_7048 = PLAYER::GET_PLAYER_PED(PLAYER::INT_TO_PLAYERINDEX(ENTITY::GET_NEAREST_PLAYER_TO_ENTITY_ON_TEAM(PLAYER::GET_PLAYER_PED(iLocal_1070), 1)));
    MISC::SET_BIT(&iLocal_7054, 2);
    if (MISC::IS_BIT_SET(iLocal_7054, 3))
    {
    }
    if (!ENTITY::DOES_ENTITY_EXIST(iLocal_7048))
    {
      return;
    }
  }
  else if (Local_6942[iLocal_1074 /*287*/].f_1 == 1)
  {
    iLocal_7048 = PLAYER::GET_PLAYER_PED(PLAYER::INT_TO_PLAYERINDEX(ENTITY::GET_NEAREST_PLAYER_TO_ENTITY_ON_TEAM(PLAYER::GET_PLAYER_PED(iLocal_1070), 0)));
    MISC::SET_BIT(&iLocal_7054, 2);
    if (MISC::IS_BIT_SET(iLocal_7054, 3))
    {
    }
    if (!ENTITY::DOES_ENTITY_EXIST(iLocal_7048))
    {
      return;
    }
  }
}