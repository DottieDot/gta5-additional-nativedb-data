// am_armwrestling.c @ L43133
int func_249()
{
  if (func_250())
  {
    return 1;
  }
  if (CAM::IS_SCREEN_FADED_OUT())
  {
    return 0;
  }
  if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADING_IN())
  {
    return 0;
  }
  if (MISC::IS_FRONTEND_FADING())
  {
    return 0;
  }
  return 1;
}