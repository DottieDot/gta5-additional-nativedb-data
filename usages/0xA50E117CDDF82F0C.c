// fm_bj_race_controler.c @ L75547
void func_557()
{
  if (func_560() && Global_1574392 == 3)
  {
    return;
  }
  PLAYER::SET_PLAYER_WEAPON_DAMAGE_MODIFIER(PLAYER::PLAYER_ID(), func_559());
  PLAYER::SET_PLAYER_VEHICLE_DAMAGE_MODIFIER(PLAYER::PLAYER_ID(), func_558());
}