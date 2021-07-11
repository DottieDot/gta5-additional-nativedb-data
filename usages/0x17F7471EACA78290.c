// fm_mission_controller.c @ L644793
void func_10354(bool bParam0)
{
  if (Global_4456448.f_188360 > 0)
  {
    func_10356();
  }
  iLocal_4557 = 0;
  func_10355();
  PLAYER::_SPECIAL_ABILITY_DEPLETE(iLocal_1071);
  Local_6942[iLocal_1075 /*287*/].f_178 = 0;
  GRAPHICS::ANIMPOSTFX_STOP("PPFilter");
  GRAPHICS::ANIMPOSTFX_STOP("MP_Bull_tost");
  if (bParam0)
  {
    PLAYER::_SPECIAL_ABILITY_DEPLETE(iLocal_1071);
    AUDIO::SET_AUDIO_FLAG("AllowScriptedSpeechInSlowMo", 0);
    func_10360(0);
  }
  else
  {
    func_10360(1);
  }
}