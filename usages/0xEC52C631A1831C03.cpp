// pi_menu.ysc @ L102281
void func_452(bool bParam0)
{
  if (func_377())
  {
    GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_150, "SET_TEXT");
    if (bParam0)
    {
      GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_LATEST_BRIEF_STRING(2);
    }
    else
    {
      GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_LATEST_BRIEF_STRING(1);
    }
    GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
    iLocal_125 = 1;
  }
}