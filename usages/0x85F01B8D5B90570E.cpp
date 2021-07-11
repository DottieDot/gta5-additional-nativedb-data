// act_cinema.ysc @ L1323
void func_5(int iParam0)
{
  if (iParam0->f_9 != 0)
  {
    if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
    {
      GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam0);
    }
    *iParam0 = 0;
    iParam0->f_9 = 0;
  }
}