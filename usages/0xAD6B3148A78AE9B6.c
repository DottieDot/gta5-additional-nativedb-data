// am_mp_arcade_claw_crane.c @ L88636
void func_591()
{
  if (!AUDIO::HAS_SOUND_FINISHED(Local_206.f_9))
  {
    AUDIO::SET_VARIABLE_ON_SOUND(Local_206.f_9, "claw_speed", Local_206.f_12);
  }
}