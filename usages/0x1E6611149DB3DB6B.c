// social_controller.c @ L7140
int func_185(char* sParam0, char* sParam1, int iParam2, char* sParam3, bool bParam4, float fParam5)
{
  int iVar0;
  struct<16> Var1;
  
  iVar0 = -1;
  HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
  HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_66(sParam1));
  HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam3);
  HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 2055);
  if (bParam4)
  {
    Var1 = { func_76(sParam1) };
    iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT_TU("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", 0, 0, &Var1, "", fParam5);
  }
  else
  {
    iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
  }
  func_59(18, sParam0, 1, sParam1, iParam2, 0, 0, 0f, 0, sParam3, 0, 0);
  return iVar0;
}