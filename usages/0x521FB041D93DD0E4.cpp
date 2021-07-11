// pilot_school.ysc @ L119880
float func_965(var uParam0, char* sParam1, float fParam2, var uParam3, float fParam4, float fParam5, int iParam6, float fParam7)
{
  int iVar0;
  int iVar1;
  
  func_727(uParam3, 0);
  HUD::_BEGIN_TEXT_COMMAND_LINE_COUNT(sParam1);
  iVar0 = HUD::_END_TEXT_COMMAND_LINE_COUNT(*fParam2, fParam2->f_1);
  iVar1 = 720;
  if (!GRAPHICS::GET_IS_WIDESCREEN())
  {
    iVar1 = 480;
  }
  uParam0->f_3 = func_732(((SYSTEM::TO_FLOAT(iVar0) * fParam4) - fParam5), iVar1);
  uParam0->f_1 = func_732(((fParam7 + ((SYSTEM::TO_FLOAT(iParam6) + (SYSTEM::TO_FLOAT(iVar0) * 0.5f)) * fParam4)) - (fParam5 * 0.5f)), iVar1);
  return 0f;
}