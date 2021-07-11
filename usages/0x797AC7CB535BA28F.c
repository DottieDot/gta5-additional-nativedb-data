// abigail1.c @ L34327
void func_230(int iParam0, bool bParam1)
{
  if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
  {
    if (!CAM::IS_SCREEN_FADING_IN())
    {
      CAM::DO_SCREEN_FADE_IN(iParam0);
    }
  }
  if (bParam1)
  {
    while (!CAM::IS_SCREEN_FADED_IN())
    {
      SYSTEM::WAIT(0);
    }
  }
}