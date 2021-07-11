// am_armwrestling.c @ L54197
int func_436()
{
  if (CAM::IS_SCREEN_FADED_OUT())
  {
    func_438(0);
    GRAPHICS::_0xDE81239437E8C5A8();
    return 1;
  }
  if (func_437() == 3)
  {
    func_438(2);
    GRAPHICS::TRIGGER_SCREENBLUR_FADE_OUT(250f);
  }
  if (GRAPHICS::GET_SCREENBLUR_FADE_CURRENT_TIME() >= 250f)
  {
    GRAPHICS::TRIGGER_SCREENBLUR_FADE_OUT(250f);
  }
  if (GRAPHICS::IS_SCREENBLUR_FADE_RUNNING() == 0)
  {
    GRAPHICS::TRIGGER_SCREENBLUR_FADE_OUT(250f);
  }
  if (GRAPHICS::GET_SCREENBLUR_FADE_CURRENT_TIME() <= 0f)
  {
    func_438(0);
    return 1;
  }
  return 0;
}