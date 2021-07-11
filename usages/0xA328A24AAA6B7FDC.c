// freemode.c @ L897150
int func_13573()
{
  if (CAM::IS_SCREEN_FADED_OUT())
  {
    return 1;
  }
  if (func_475() == 0)
  {
    func_476(1);
    GRAPHICS::TRIGGER_SCREENBLUR_FADE_IN(250f);
  }
  if (GRAPHICS::GET_SCREENBLUR_FADE_CURRENT_TIME() == 0f)
  {
    GRAPHICS::TRIGGER_SCREENBLUR_FADE_IN(250f);
  }
  if (GRAPHICS::IS_SCREENBLUR_FADE_RUNNING() == 0)
  {
    GRAPHICS::TRIGGER_SCREENBLUR_FADE_IN(250f);
  }
  if (GRAPHICS::GET_SCREENBLUR_FADE_CURRENT_TIME() >= 250f)
  {
    func_476(3);
    return 1;
  }
  return 0;
}