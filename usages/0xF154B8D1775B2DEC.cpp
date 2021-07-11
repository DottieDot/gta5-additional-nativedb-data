// main.ysc @ L107423
void func_568(int iParam0)
{
  if (iParam0 == 1)
  {
    if (!MISC::IS_BIT_SET(Global_98669.f_20, 11))
    {
      AUDIO::BLOCK_DEATH_JINGLE(1);
      MISC::SET_BIT(&(Global_98669.f_20), 11);
    }
  }
  else if (MISC::IS_BIT_SET(Global_98669.f_20, 11))
  {
    AUDIO::BLOCK_DEATH_JINGLE(0);
    MISC::CLEAR_BIT(&(Global_98669.f_20), 11);
  }
}