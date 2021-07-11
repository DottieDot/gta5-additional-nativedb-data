// am_mp_vehicle_weapon.ysc @ L5570
void func_197(bool bParam0)
{
  int iVar0;
  
  Local_149.f_33 = 100;
  Local_149.f_59 = 50f;
  Local_149.f_62 = GRAPHICS::_REQUEST_SCALEFORM_MOVIE_2(func_38());
  AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SCRIPT\POLICE_CHOPPER_CAM", 0, -1);
  GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("helicopterhud", false);
  GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("droneHUD", false);
  Local_149.f_29 = AUDIO::GET_SOUND_ID();
  Local_149.f_30 = AUDIO::GET_SOUND_ID();
  func_112(0);
  iVar0 = 0;
  while (iVar0 <= 5)
  {
    Local_149.f_34[iVar0] = -1;
    Local_149.f_41[iVar0] = -1;
    iVar0++;
  }
  if (bParam0)
  {
  }
}