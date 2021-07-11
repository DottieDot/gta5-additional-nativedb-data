// gb_casino.c @ L342691
void func_5110()
{
  if (!MISC::IS_STRING_NULL_OR_EMPTY(func_5105()))
  {
    AUDIO::START_AUDIO_SCENE(func_5105());
  }
  if (func_7081() == 13)
  {
    AUDIO::PLAY_STREAM_FROM_VEHICLE(Local_939);
  }
}