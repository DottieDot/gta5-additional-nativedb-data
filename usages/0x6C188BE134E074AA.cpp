// am_armwrestling.ysc @ L6138
void func_65(int iParam0, char* sParam1)
{
  if (*iParam0 != 0 && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
  {
    GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "CLEANUP");
    GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
    HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
    GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
    GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
  }
  if (iParam0->f_1 != 0 && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iParam0->f_1))
  {
    GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0->f_1, "CLEANUP");
    GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
    HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
    GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
    GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
  }
  if (iParam0->f_2 != 0 && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iParam0->f_2))
  {
    GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0->f_2, "CLEANUP");
    GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
    HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
    GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
    GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
  }
}