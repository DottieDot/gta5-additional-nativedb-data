// am_hot_property.c @ L2882
int func_70(char* sParam0, int iParam1, bool bParam2)
{
  int iVar0;
  char* sVar1;
  
  iVar0 = -1;
  HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
  if (!bParam2)
  {
    HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam1, 7);
  }
  else
  {
    HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam1, 2055);
  }
  iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
  func_28(17, sParam0, 1, &sVar1, iParam1, 0, 0, 0, 1, 0, 0, 0);
  return iVar0;
}