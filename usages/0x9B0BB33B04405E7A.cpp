// assassin_bus.ysc @ L12893
void func_227(int iParam0, float fParam1, float fParam2)
{
  PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), iParam0, 0);
  PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
  PLAYER::SET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID(), fParam1);
  PLAYER::SET_WANTED_LEVEL_MULTIPLIER(fParam2);
}