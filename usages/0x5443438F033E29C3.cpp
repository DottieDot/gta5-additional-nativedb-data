// barry1.ysc @ L46887
int func_508(int iParam0, int iParam1)
{
  int iVar0;
  
  iVar0 = MISC::GET_GAME_TIMER() + 7500;
  WEAPON::REQUEST_WEAPON_ASSET(iParam0, 31, 0);
  if (WEAPON::HAS_WEAPON_ASSET_LOADED(iParam0))
  {
    return 1;
  }
  if (iParam1 == 0)
  {
    return 1;
  }
  while (!WEAPON::HAS_WEAPON_ASSET_LOADED(iParam0))
  {
    SYSTEM::WAIT(0);
    if (MISC::GET_GAME_TIMER() > iVar0 && !WEAPON::HAS_WEAPON_ASSET_LOADED(iParam0))
    {
      return 0;
    }
  }
  return 1;
}