// paparazzo1.c @ L4665
void func_87()
{
  if (!PED::IS_PED_GROUP_MEMBER(Local_531, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID())))
  {
    PED::SET_PED_AS_GROUP_MEMBER(Local_531, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID()));
  }
  if (PED::IS_PED_IN_GROUP(Local_531))
  {
    PED::SET_PED_CONFIG_FLAG(Local_531, 167, true);
    PED::SET_GROUP_FORMATION(PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID()), 0);
    PED::SET_GROUP_FORMATION_SPACING(PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID()), 1.5f, -1f, -1082130432);
    PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(Local_531, 0);
  }
}