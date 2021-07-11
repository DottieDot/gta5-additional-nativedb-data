// am_mp_arena_garage.c @ L281316
void func_4004(int iParam0, var uParam1)
{
  char* sVar0;
  
  *uParam1 = iParam0;
  func_4005(iParam0, &sVar0);
  GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam1->f_3, "SET_TEXTURES");
  GRAPHICS::_SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING_2(&sVar0);
  func_3731("ACW_NOTE_1");
  func_3731("ACW_NOTE_2");
  func_3731("ACW_NOTE_3");
  GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}