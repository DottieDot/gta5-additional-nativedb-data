// appmpjoblistnew.c @ L279273
void func_3896()
{
  int iVar0;
  struct<4> Var1;
  char cVar2[64];
  
  func_25(Global_19467, "SET_DATA_SLOT_EMPTY", SYSTEM::TO_FLOAT(7), -1082130432, -1082130432, -1082130432, -1082130432);
  GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19467, "SET_DATA_SLOT");
  GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(7);
  GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
  iVar0 = 12;
  Var1 = { func_368(iVar0) };
  GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
  HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Var1);
  GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
  GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&cLocal_344);
  HUD::ADD_TEXT_COMPONENT_INTEGER(func_404(20));
  GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
  StringCopy(&cVar2, HUD::_GET_LABEL_TEXT(func_359(iVar0)), 64);
  GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(&cVar2);
  GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
  func_25(Global_19467, "DISPLAY_VIEW", SYSTEM::TO_FLOAT(7), -1082130432, -1082130432, -1082130432, -1082130432);
  func_354(13, &Local_314, 1, "", 14, &Local_317, &iLocal_364);
  func_357(&Local_335);
}