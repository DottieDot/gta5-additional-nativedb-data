// am_challenges.ysc @ L10347
void func_305(float fParam0)
{
  float fVar0;
  
  if (STATS::_0x1A8EA222F9C67DBB(&fVar0))
  {
    if (fVar0 > fParam0)
    {
      func_538(6);
      if (!MISC::IS_BIT_SET(iLocal_142, 4))
      {
        AUDIO::PLAY_SOUND_FRONTEND(iLocal_150, "Altitude_Warning", "EXILE_1", true);
        MISC::SET_BIT(&iLocal_142, 4);
      }
    }
    else
    {
      if (func_293("AMCH_FLYLOW"))
      {
        HUD::CLEAR_HELP(1);
      }
      if (MISC::IS_BIT_SET(iLocal_142, 4))
      {
        AUDIO::STOP_SOUND(iLocal_150);
        MISC::CLEAR_BIT(&iLocal_142, 4);
      }
    }
  }
}