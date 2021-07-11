// freemode.ysc @ L709406
void func_9902(int iParam0)
{
  char* sVar0;
  
  HUD::_0x15CFA549788D35EF();
  sVar0 = "";
  switch (iParam0)
  {
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
      HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("ARCCAB_CLAW_PWTE");
      break;
    
    default:
      HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sVar0);
      break;
  }
  sVar0 = func_9903(iParam0);
  HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sVar0);
  HUD::END_TEXT_COMMAND_THEFEED_POST_UNLOCK_TU("ARCUNLCK", 20, sVar0, 1);
}