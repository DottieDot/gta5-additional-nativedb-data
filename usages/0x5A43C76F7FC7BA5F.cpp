// am_armwrestling.ysc @ L6192
void func_69(int iParam0, bool bParam1)
{
  if (bParam1)
  {
    CAM::_0x5A43C76F7FC7BA5F();
  }
  if ((*iParam0 != 0 && iParam0->f_1 != 0) && iParam0->f_2 != 0)
  {
    GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN_MASKED(*iParam0, iParam0->f_1, 255, 255, 255, 255);
    GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iParam0->f_2, 255, 255, 255, 255, 0);
  }
}