// timershud.ysc @ L2558
void func_45(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4)
{
  char* sVar0;
  
  sVar0 = sParam2;
  if (!func_56(sVar0))
  {
    if (func_48())
    {
      func_67(uParam1, 0);
      HUD::SET_TEXT_JUSTIFICATION(iParam4);
      HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sVar0);
      HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
      HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam3, 1);
      HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_47(*uParam0), func_46(uParam0->f_1), 0);
    }
  }
}