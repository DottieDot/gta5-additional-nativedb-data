// agency_heist3b.c @ L121209
void func_759()
{
  AUDIO::STOP_SOUND(iLocal_445[0]);
  AUDIO::PLAY_SOUND_FROM_COORD(iLocal_445[1], "HACKING_DOWNLOADED", ENTITY::GET_ENTITY_COORDS(Local_443[2 /*2*/], true), 0, 0, 0, 0);
  GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_66, "SET_LOADING_PROGRESS");
  GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(100);
  GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
  GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
  GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_66, "SET_LOADING_MESSAGE");
  func_760("A3B_DLCOMP");
  GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
  GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
  GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_66, "SET_LOADING_TIME");
  GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
  GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
  iLocal_1377 = 1;
}