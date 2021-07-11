// act_cinema.ysc @ L115197
void func_997()
{
  sLocal_259 = "NULL";
  switch (Local_249.f_14)
  {
    case 7:
      sLocal_259 = "CINEMA_DOWNTOWN";
      break;
    
    case 9:
      sLocal_259 = "CINEMA_VINEWOOD";
      break;
    
    case 8:
      sLocal_259 = "CINEMA_MORNINGWOOD";
      break;
  }
  if (!MISC::ARE_STRINGS_EQUAL("NULL", sLocal_259))
  {
    if (!AUDIO::IS_AUDIO_SCENE_ACTIVE(sLocal_259))
    {
      AUDIO::START_AUDIO_SCENE(sLocal_259);
    }
  }
}