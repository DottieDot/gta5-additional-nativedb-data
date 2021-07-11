// main.c @ L428
void func_5(bool bParam0, var uParam1)
{
  char* sVar0;
  
  sVar0 = "NOIR_FILTER_SOUNDS";
  if (bParam0)
  {
    GRAPHICS::_SET_EXTRA_TIMECYCLE_MODIFIER(func_6());
    AUDIO::PLAY_SOUND_FRONTEND(-1, "ON", sVar0, true);
    if (*uParam1 == -1)
    {
      *uParam1 = AUDIO::GET_SOUND_ID();
      AUDIO::PLAY_SOUND_FRONTEND(*uParam1, "LOOP", sVar0, true);
    }
  }
  else
  {
    GRAPHICS::_CLEAR_EXTRA_TIMECYCLE_MODIFIER();
    AUDIO::PLAY_SOUND_FRONTEND(-1, "OFF", sVar0, true);
    AUDIO::STOP_SOUND(*uParam1);
    AUDIO::RELEASE_SOUND_ID(*uParam1);
    *uParam1 = -1;
  }
}