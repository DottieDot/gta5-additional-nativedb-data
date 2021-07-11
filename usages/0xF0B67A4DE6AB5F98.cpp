// assassin_bus.ysc @ L12218
var func_208(int iParam0)
{
  if (PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID()))
  {
    *iParam0++;
    PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
  }
  return *iParam0;
}