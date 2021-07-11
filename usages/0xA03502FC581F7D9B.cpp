// fmmc_launcher.ysc @ L544203
void func_8374()
{
  float fVar0;
  float fVar1;
  
  func_5022();
  fVar0 = CAM::GET_FINAL_RENDERED_CAM_NEAR_DOF();
  fVar1 = CAM::GET_FINAL_RENDERED_CAM_FAR_DOF();
  GRAPHICS::_SET_HIDOF_ENV_BLUR_PARAMS(1, 1, 0f, fVar0, fVar1, (fVar1 + 25f));
  func_8897(1);
  GRAPHICS::ANIMPOSTFX_PLAY("MP_job_load", 0, 1);
  AUDIO::PLAY_SOUND_FRONTEND(-1, "SCREEN_FLASH", "CELEBRATION_SOUNDSET", true);
}