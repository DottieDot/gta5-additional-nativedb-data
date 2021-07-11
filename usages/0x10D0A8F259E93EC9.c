// am_mp_defunct_base.c @ L282251
void func_4117()
{
  if (HUD::IS_WARNING_MESSAGE_ACTIVE())
  {
    if (CAM::IS_SCREEN_FADED_OUT())
    {
      if (func_4118())
      {
        CAM::DO_SCREEN_FADE_IN(0);
      }
    }
  }
  if (DLC::GET_IS_LOADING_SCREEN_ACTIVE())
  {
    SCRIPT::SHUTDOWN_LOADING_SCREEN();
  }
}