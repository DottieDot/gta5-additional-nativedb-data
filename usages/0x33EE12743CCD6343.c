// casino_lucky_wheel.c @ L35455
void func_557(int iParam0, bool bParam1, bool bParam2)
{
  if (bParam1)
  {
    if (!func_549(iParam0))
    {
      func_570(iParam0, 1);
    }
    if (bParam2)
    {
      if (func_568(iParam0) == 0)
      {
        HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(func_567(iParam0));
        HUD::END_TEXT_COMMAND_THEFEED_POST_UNLOCK(func_566(iParam0), 2, func_567(iParam0));
        if (AUDIO::HAS_SOUND_FINISHED(-1))
        {
          AUDIO::PLAY_SOUND_FRONTEND(-1, "CHALLENGE_UNLOCKED", "HUD_AWARDS", true);
        }
        func_559(29, func_567(iParam0), func_565(iParam0), func_563(iParam0), func_561(iParam0), -1, 0, 0, 0, -1, 0);
        func_558(iParam0, 1);
      }
    }
  }
  else if (func_549(iParam0))
  {
    func_570(iParam0, 0);
  }
}