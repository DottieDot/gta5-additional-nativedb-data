// am_contact_requests.ysc @ L14991
void func_281(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4)
{
  HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
  HUD::ADD_TEXT_COMPONENT_FLOAT(fParam3, iParam4);
  HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}