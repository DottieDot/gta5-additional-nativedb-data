// arena_carmod.ysc @ L184623
int func_1586()
{
  if (((AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_105.f_12) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_105.f_12)) || AUDIO::IS_ANY_SPEECH_PLAYING(Local_105.f_12)) || AUDIO::IS_PED_IN_CURRENT_CONVERSATION(Local_105.f_12))
  {
    return 0;
  }
  if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_OUT())
  {
    return 0;
  }
  if (func_33(PLAYER::PLAYER_ID()))
  {
    return 0;
  }
  return 1;
}