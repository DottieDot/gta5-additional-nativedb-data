// am_mp_arc_cab_manager.c @ L97484
int func_794(var uParam0)
{
  GRAPHICS::_PLAY_BINK_MOVIE(uParam0->f_5);
  GRAPHICS::_DRAW_BINK_MOVIE(uParam0->f_5, func_791(0.5f), 0.5f, (func_790(1920f) * fLocal_206), func_789(1080f), 0f, 255, 255, 255, 255);
  GRAPHICS::_0x6805D58CAA427B72(uParam0->f_5, 1);
  if (GRAPHICS::_GET_BINK_MOVIE_PROGRESS(uParam0->f_5) >= 99f)
  {
    GRAPHICS::_STOP_BINK_MOVIE(uParam0->f_5);
    GRAPHICS::_RELEASE_BINK_MOVIE(uParam0->f_5);
    return 1;
  }
  return 0;
}