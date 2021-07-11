// abigail2.ysc @ L36275
int func_287(int iParam0)
{
  if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
  {
    return 1;
  }
  return 0;
}