// act_cinema.ysc @ L1735
void func_30()
{
  if (!MISC::ARE_STRINGS_EQUAL("NULL", sLocal_259))
  {
    if (AUDIO::IS_AUDIO_SCENE_ACTIVE(sLocal_259))
    {
      AUDIO::STOP_AUDIO_SCENE(sLocal_259);
    }
  }
  if (AUDIO::IS_AUDIO_SCENE_ACTIVE("LEAVE_CINEMA"))
  {
    AUDIO::STOP_AUDIO_SCENE("LEAVE_CINEMA");
  }
}