// freemode.c @ L166252
void func_2192()
{
  if (!func_2194(PLAYER::PLAYER_ID(), 8))
  {
    return;
  }
  PLAYER::SET_PLAYER_WEAPON_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 1f);
  PLAYER::SET_PLAYER_HEALTH_RECHARGE_MULTIPLIER(PLAYER::PLAYER_ID(), 1f);
  PLAYER::_SET_PLAYER_HEALTH_RECHARGE_LIMIT(PLAYER::PLAYER_ID(), 0.5f);
  PLAYER::SET_PLAYER_MELEE_WEAPON_DAMAGE_MODIFIER(PLAYER::PLAYER_ID(), 1f, 1);
  PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 410, false);
  PED::SET_PED_SUFFERS_CRITICAL_HITS(PLAYER::PLAYER_PED_ID(), 1);
  PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 416, false);
  HUD::_SET_ABILITY_BAR_VISIBILITY_IN_MULTIPLAYER(0);
  PLAYER::_SPECIAL_ABILITY_DEPLETE(PLAYER::PLAYER_ID());
  if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
  {
    PLAYER::_SET_SPECIAL_ABILITY(PLAYER::PLAYER_ID(), -1);
  }
  func_2193(8);
}