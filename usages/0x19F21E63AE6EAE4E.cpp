// am_challenges.ysc @ L24142
void func_737()
{
  if (MISC::IS_BIT_SET(Global_2531497.f_4735, 1))
  {
    MISC::CLEAR_BIT(&(Global_2531497.f_4735), 1);
  }
  if (Global_2531497.f_4735 > 0)
  {
    AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S_KILL");
    AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S_FIRA");
    AUDIO::STOP_AUDIO_SCENE("GTAO_FM_Events_30_Sec_Countdown_Scene");
    AUDIO::SET_USER_RADIO_CONTROL_ENABLED(1);
    Global_2531497.f_4735 = 0;
    AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 0);
    AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 0);
    AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", 0);
    if (!MISC::ARE_STRINGS_EQUAL(SCRIPT::GET_THIS_SCRIPT_NAME(), "am_pi_menu"))
    {
      if (Global_2531497.f_4745 > -1)
      {
        AUDIO::RELEASE_SOUND_ID(Global_2531497.f_4745);
        Global_2531497.f_4745 = -1;
      }
    }
  }
}