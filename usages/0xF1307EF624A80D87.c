// am_mp_arcade.c @ L321381
float func_4748()
{
  GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&uLocal_264, &iLocal_265);
  fLocal_262 = GRAPHICS::_GET_ASPECT_RATIO(0);
  if (MISC::IS_PC_VERSION())
  {
    if (fLocal_262 >= 4f)
    {
      fLocal_262 = (fLocal_262 / 3f);
    }
  }
  return fLocal_262;
}