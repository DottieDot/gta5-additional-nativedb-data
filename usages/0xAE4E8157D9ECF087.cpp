// am_mp_arena_garage.ysc @ L283511
void func_4056(int iParam0, int iParam1, int iParam2, char* sParam3)
{
  MISC::SET_BIT(&iParam2, 7);
  GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_SLOT");
  GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
  GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
  GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam3);
  GRAPHICS::_END_TEXT_COMMAND_SCALEFORM_STRING_2();
  GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}