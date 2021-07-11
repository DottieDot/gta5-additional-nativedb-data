// abigail2.ysc @ L35916
bool func_271(char* sParam0, int iParam1, int iParam2)
{
  HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(sParam0);
  if (iParam1 == 1)
  {
    HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam2);
  }
  return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}