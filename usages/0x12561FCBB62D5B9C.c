// family5.c @ L122285
void func_808()
{
  if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_5_YOGA_ON_DRUGS"))
  {
    AUDIO::SET_AUDIO_SPECIAL_EFFECT_MODE(2);
    AUDIO::SET_AUDIO_SCENE_VARIABLE("FAMILY_5_YOGA_ON_DRUGS", "DrugsEffect", ((SYSTEM::SIN((((SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f) * 45f) % 360f)) * 0.5f) + 0.5f));
    AUDIO::SET_AUDIO_SCENE_VARIABLE("FAMILY_5_YOGA_ON_DRUGS", "DrugsEffectSpeech", (((0.5f * SYSTEM::SIN((((SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f) * 45f) % 360f))) * 0.5f) + 0.5f));
  }
}