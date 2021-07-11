// am_mp_casino.c @ L270660
void func_3930()
{
  if (AUDIO::IS_ANY_SPEECH_PLAYING(Local_2464.f_7))
  {
    if (!MISC::IS_BIT_SET(Local_2464, 2))
    {
      AUDIO::START_AUDIO_SCENE("DLC_VW_Casino_PA_Announcement_Scene");
      MISC::SET_BIT(&Local_2464, 2);
    }
  }
  else if (MISC::IS_BIT_SET(Local_2464, 2))
  {
    AUDIO::STOP_AUDIO_SCENE("DLC_VW_Casino_PA_Announcement_Scene");
    MISC::CLEAR_BIT(&Local_2464, 2);
  }
}