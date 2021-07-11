// director_mode.c @ L128964
void func_812(vector3 vParam0, float fParam1, int iParam2, bool bParam3, int iParam4)
{
  int iVar0;
  
  PLAYER::START_PLAYER_TELEPORT(PLAYER::PLAYER_ID(), vParam0, fParam1, true, bParam3, iParam2);
  iVar0 = (MISC::GET_GAME_TIMER() + iParam4);
  while (!(PLAYER::_HAS_PLAYER_TELEPORT_FINISHED(PLAYER::PLAYER_ID()) || iVar0 < MISC::GET_GAME_TIMER()))
  {
    SYSTEM::WAIT(0);
  }
}