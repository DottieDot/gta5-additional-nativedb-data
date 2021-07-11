// armenian2.c @ L1257
void func_23()
{
  if (iLocal_285)
  {
    if (iLocal_286)
    {
      if (AUDIO::PREPARE_MUSIC_EVENT(sLocal_288))
      {
        if (AUDIO::TRIGGER_MUSIC_EVENT(sLocal_288))
        {
          iLocal_285 = 0;
          iLocal_286 = 0;
        }
      }
    }
    else if (AUDIO::TRIGGER_MUSIC_EVENT(sLocal_288))
    {
      iLocal_285 = 0;
    }
  }
  else if (iLocal_287)
  {
    if (AUDIO::PREPARE_MUSIC_EVENT(sLocal_289))
    {
      iLocal_287 = 0;
    }
  }
}