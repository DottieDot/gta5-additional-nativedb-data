// assassin_construction.ysc @ L19662
void func_408()
{
  if (iLocal_934 > 8 && iLocal_934 < 16)
  {
    if (PLAYER::GET_MAX_WANTED_LEVEL() != 0)
    {
      PLAYER::SET_MAX_WANTED_LEVEL(0);
      MISC::ENABLE_DISPATCH_SERVICE(3, false);
      MISC::ENABLE_DISPATCH_SERVICE(5, false);
      PED::SET_CREATE_RANDOM_COPS(false);
    }
  }
}