// fmmc_launcher.ysc @ L546794
void func_8470(bool bParam0, bool bParam1)
{
  if (bParam0)
  {
    if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_1668601))
    {
      GRAPHICS::DRAW_SCALEFORM_MOVIE_3D(Global_1668601, Global_1668601.f_16, Global_1668601.f_19, Global_1668601.f_22, Global_1668601.f_25, 2);
    }
  }
  if (bParam1)
  {
    if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_1668601.f_1))
    {
      GRAPHICS::DRAW_SCALEFORM_MOVIE_3D(Global_1668601.f_1, Global_1668601.f_28, Global_1668601.f_31, Global_1668601.f_34, Global_1668601.f_37, 2);
    }
  }
}