// gb_casino_heist.c @ L368664
void func_5589(int iParam0, bool bParam1)
{
  if (!bParam1)
  {
    CAM::DO_SCREEN_FADE_IN(2000);
  }
  GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
  GRAPHICS::SET_TIMECYCLE_MODIFIER("CAMERA_secuirity");
  GRAPHICS::SET_NOISEOVERIDE(1);
  GRAPHICS::SET_NOISINESSOVERIDE(0.3f);
  GRAPHICS::SET_TIMECYCLE_MODIFIER_STRENGTH(0.3f);
  func_13(&(iParam0->f_10));
  func_13(&(iParam0->f_8));
  func_5602(iParam0, 2);
}