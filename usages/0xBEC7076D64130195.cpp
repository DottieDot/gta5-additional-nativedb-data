// achievement_controller.ysc @ L13927
int func_109(int iParam0)
{
  if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0))
  {
    return 0;
  }
  if (func_160(14) && !func_110(iParam0))
  {
    return 0;
  }
  if (!PLAYER::GIVE_ACHIEVEMENT_TO_PLAYER(iParam0))
  {
    return 0;
  }
  if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0))
  {
    return 1;
  }
  return 0;
}