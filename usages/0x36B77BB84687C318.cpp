// am_pi_menu.ysc @ L212079
int func_1880()
{
  if ((MISC::GET_GAME_TIMER() - PED::_GET_TIME_OF_LAST_PED_WEAPON_DAMAGE(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_BZGAS"))) < 500 || (MISC::GET_GAME_TIMER() - PED::_GET_TIME_OF_LAST_PED_WEAPON_DAMAGE(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_SMOKEGRENADE"))) < 500)
  {
    return 1;
  }
  return 0;
}