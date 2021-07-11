// pi_menu.c @ L96334
int func_377()
{
  iLocal_150 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("TEXTFIELD");
  if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_150))
  {
    return 1;
  }
  return 0;
}