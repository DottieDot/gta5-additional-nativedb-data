// am_ammo_drop.ysc @ L2327
void func_70()
{
  if (AUDIO::GET_SOUND_ID_FROM_NETWORK_ID(Local_60.f_16) != -1)
  {
    if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_4))
    {
      if (!AUDIO::HAS_SOUND_FINISHED(AUDIO::GET_SOUND_ID_FROM_NETWORK_ID(Local_60.f_16)))
      {
        AUDIO::STOP_SOUND(AUDIO::GET_SOUND_ID_FROM_NETWORK_ID(Local_60.f_16));
      }
      AUDIO::RELEASE_SOUND_ID(AUDIO::GET_SOUND_ID_FROM_NETWORK_ID(Local_60.f_16));
    }
    else
    {
      if (!AUDIO::HAS_SOUND_FINISHED(AUDIO::GET_SOUND_ID_FROM_NETWORK_ID(Local_60.f_16)))
      {
        AUDIO::STOP_SOUND(AUDIO::GET_SOUND_ID_FROM_NETWORK_ID(Local_60.f_16));
      }
      AUDIO::RELEASE_SOUND_ID(AUDIO::GET_SOUND_ID_FROM_NETWORK_ID(Local_60.f_16));
    }
  }
}