// am_casino_peds.ysc @ L254201
void func_2710(var uParam0, var uParam1)
{
  NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(PLAYER::PLAYER_PED_ID(), false, 0);
  if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uParam1->f_23))
  {
    if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uParam1->f_23) > 0f && !MISC::IS_BIT_SET(uParam1->f_178, 0))
    {
      if (func_15(uParam1->f_130[1]))
      {
        AUDIO::_PLAY_AMBIENT_SPEECH_WITH_VOICE(uParam1->f_130[1], "BOUNCER_EJECT_GENERIC", "", func_434(10), 0);
      }
      MISC::SET_BIT(&(uParam1->f_178), 0);
    }
    else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uParam1->f_23) > 0.3f)
    {
      if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
      {
        CAM::DO_SCREEN_FADE_OUT(500);
      }
      else if (CAM::IS_SCREEN_FADED_OUT())
      {
        uParam1->f_23 = -1;
      }
    }
  }
}