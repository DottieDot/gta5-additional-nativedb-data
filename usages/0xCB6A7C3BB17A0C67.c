// gb_bank_job.c @ L106808
void func_1050(bool bParam0)
{
  if (!bParam0)
  {
    CAM::DO_SCREEN_FADE_IN(2000);
  }
  GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
  GRAPHICS::SET_TIMECYCLE_MODIFIER("CAMERA_secuirity");
  GRAPHICS::SET_NOISINESSOVERIDE(0.1f);
  if (func_1051() == 6)
  {
    GRAPHICS::SET_TIMECYCLE_MODIFIER_STRENGTH(0.75f);
  }
  else
  {
    GRAPHICS::SET_TIMECYCLE_MODIFIER_STRENGTH(1f);
  }
  func_858(&uLocal_445);
  func_858(&uLocal_440);
  func_497(7);
}