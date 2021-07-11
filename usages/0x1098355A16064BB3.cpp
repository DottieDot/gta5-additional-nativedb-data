// fm_capture_creator.ysc @ L10561
void func_96(bool bParam0, bool bParam1)
{
  if (bParam0)
  {
    if (!bParam1)
    {
      AUDIO::START_AUDIO_SCENE("CREATOR_SCENES_AMBIENCE");
    }
    AUDIO::SET_AUDIO_FLAG("AllowRadioOverScreenFade", 1);
    AUDIO::SET_MOBILE_RADIO_ENABLED_DURING_GAMEPLAY(1);
  }
  else
  {
    if (!bParam1)
    {
      AUDIO::STOP_AUDIO_SCENE("CREATOR_SCENES_AMBIENCE");
    }
    AUDIO::SET_AUDIO_FLAG("AllowRadioOverScreenFade", 0);
  }
}