// am_mp_vehicle_weapon.ysc @ L5668
void func_202()
{
  if (Local_149.f_30 != -1)
  {
    AUDIO::STOP_SOUND(Local_149.f_30);
    AUDIO::RELEASE_SOUND_ID(Local_149.f_30);
    Local_149.f_30 = -1;
  }
  if (Local_149.f_29 != -1)
  {
    AUDIO::STOP_SOUND(Local_149.f_29);
    AUDIO::RELEASE_SOUND_ID(Local_149.f_29);
    Local_149.f_29 = -1;
  }
  if (Local_149.f_49 != -1)
  {
    AUDIO::STOP_SOUND(Local_149.f_49);
    AUDIO::RELEASE_SOUND_ID(Local_149.f_49);
    Local_149.f_49 = -1;
  }
  AUDIO::STOP_AUDIO_SCENE("DLC_GR_MOC_Turret_View_Scene");
  AUDIO::RELEASE_AMBIENT_AUDIO_BANK();
}