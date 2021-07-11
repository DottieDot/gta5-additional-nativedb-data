// act_cinema.ysc @ L119521
void func_1101(char* sParam0, int iParam1)
{
  HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
  HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
  HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, true, -1);
}