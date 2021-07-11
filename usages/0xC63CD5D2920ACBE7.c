// abigail1.c @ L33831
void func_202()
{
  char cVar0[64];
  char cVar1[64];
  char* sVar2;
  
  StringCopy(&cVar0, HUD::_GET_LABEL_TEXT(&(Global_1798[Global_8042 /*29*/].f_7)), 64);
  if (Global_8061 == 0)
  {
    HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("");
    StringCopy(&cVar1, HUD::_GET_LABEL_TEXT(&(Global_7966[1 /*6*/])), 64);
    sVar2 = HUD::_GET_LABEL_TEXT("CELL_253");
    HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, 0, 3, sVar2, &cVar1);
  }
  else
  {
    HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_255");
    HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_7966[1 /*6*/]));
    HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, 0, 3, "", 0);
  }
  MISC::CLEAR_BIT(&Global_7356, 0);
}