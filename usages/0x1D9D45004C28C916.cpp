// chop.ysc @ L7181
void func_100()
{
  if (!PED::IS_PED_IN_GROUP(iLocal_69))
  {
    PED::SET_PED_AS_GROUP_MEMBER(iLocal_69, PED::GET_PED_GROUP_INDEX(PLAYER::PLAYER_PED_ID()));
  }
  if (PED::IS_PED_IN_GROUP(iLocal_69))
  {
    PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_69, 1);
    PED::SET_GROUP_FORMATION_SPACING(func_101(), 1f, 0.9f, 3f);
    PED::SET_PED_CAN_TELEPORT_TO_GROUP_LEADER(iLocal_69, PED::GET_PED_GROUP_INDEX(PLAYER::PLAYER_PED_ID()), 1);
  }
}