// epsilon6.c @ L1424
void func_24()
{
  int iVar0;
  
  func_17(37, 0);
  func_26(78, 1);
  PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
  if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
  {
    WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), false);
    PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
    PLAYER::START_FIRING_AMNESTY(5000);
  }
  STATS::STAT_GET_INT(joaat("NUM_EPSILON_STEP"), &iVar0, -1);
  if (iVar0 < 17)
  {
    STATS::STAT_SET_INT(joaat("NUM_EPSILON_STEP"), 17, 1);
    func_25(23, 17);
  }
  func_521("Doing cleanup now");
  func_488();
}