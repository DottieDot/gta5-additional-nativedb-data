// bailbond1.ysc @ L41815
void func_436(bool bParam0)
{
  if (bParam0)
  {
    PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, 1862763509, 296331235);
    PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, 1862763509, 1166638144);
    PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, 1862763509, 2037579709);
    PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, 1862763509, 2017343592);
    PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, 1862763509, -1821475077);
    PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, 1862763509, 1782292358);
    PLAYER::SET_PLAYER_CAN_BE_HASSLED_BY_GANGS(PLAYER::PLAYER_ID(), 0);
  }
  else
  {
    PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, 1862763509, 296331235);
    PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, 1862763509, 1166638144);
    PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, 1862763509, 2037579709);
    PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, 1862763509, 2017343592);
    PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, 1862763509, -1821475077);
    PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, 1862763509, 1782292358);
    PLAYER::SET_PLAYER_CAN_BE_HASSLED_BY_GANGS(PLAYER::PLAYER_ID(), 1);
  }
}