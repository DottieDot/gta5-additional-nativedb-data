// rural_bank_heist.c @ L103466
void func_463(int iParam0, bool bParam1, float fParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12)
{
  PED::SET_CREATE_RANDOM_COPS(bParam1);
  if (bParam1)
  {
    PLAYER::SET_MAX_WANTED_LEVEL(iParam0);
    PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
    PED::SET_CREATE_RANDOM_COPS(true);
    PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), iParam0, 0);
    PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
    MISC::SET_DISPATCH_IDEAL_SPAWN_DISTANCE(fParam2);
    MISC::SET_DISPATCH_TIME_BETWEEN_SPAWN_ATTEMPTS(1, fParam3);
    func_464(1, bParam4);
    func_464(2, bParam5);
    func_464(7, bParam6);
    func_464(8, bParam7);
    func_464(9, bParam8);
    func_464(10, bParam9);
    func_464(4, bParam10);
    func_464(12, bParam11);
    func_464(6, bParam12);
  }
  else
  {
    PED::SET_CREATE_RANDOM_COPS(false);
    PLAYER::SET_MAX_WANTED_LEVEL(0);
    PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), iParam0, 0);
    PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
  }
}