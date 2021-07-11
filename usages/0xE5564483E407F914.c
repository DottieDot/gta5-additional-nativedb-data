// re_chasethieves.c @ L34947
void func_310(int iParam0)
{
  if (iParam0 == 1)
  {
    if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("RE_CHASE_THIEVES_SCENE"))
    {
      AUDIO::START_AUDIO_SCENE("RE_CHASE_THIEVES_SCENE");
      if (func_1(iLocal_86))
      {
        AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_86, "RE_CHASE_THIEVES_BIKE", 0);
        AUDIO::SET_AUDIO_VEHICLE_PRIORITY(iLocal_86, 2);
      }
    }
  }
  else if (AUDIO::IS_AUDIO_SCENE_ACTIVE("RE_CHASE_THIEVES_SCENE"))
  {
    if (func_1(iLocal_86))
    {
      AUDIO::SET_AUDIO_VEHICLE_PRIORITY(iLocal_86, 0);
      AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_86, 0);
    }
    AUDIO::STOP_AUDIO_SCENE("RE_CHASE_THIEVES_SCENE");
  }
}