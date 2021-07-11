// carsteal4.ysc @ L112556
void func_619()
{
  if (ENTITY::DOES_ENTITY_EXIST(Local_387[iLocal_261 /*19*/]))
  {
    if (!ENTITY::IS_ENTITY_DEAD(Local_387[iLocal_261 /*19*/], 0))
    {
      GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_carsteal4_wheel_burnout", Local_387[iLocal_261 /*19*/], vLocal_1836, vLocal_1837, 1065353216, 0, 0, 0);
      if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("CAR_STEAL_4", false, -1))
      {
        AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "CAR_STEAL_4_BURNOUT", Local_387[iLocal_261 /*19*/], "CAR_STEAL_4_SOUNDSET", false, 0);
      }
    }
  }
}