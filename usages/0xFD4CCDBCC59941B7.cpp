// business_battles.ysc @ L206364
int func_2960(int iParam0, bool bParam1)
{
  if (!PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()))
  {
    if (PED::_0x06087579E7AA85A9(iParam0, PLAYER::PLAYER_PED_ID(), func_2961(bParam1), -1082130432, -1082130432, -1082130432) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 287))
    {
      return 1;
    }
  }
  return 0;
}