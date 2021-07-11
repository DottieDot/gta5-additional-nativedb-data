// fm_mission_controller.ysc @ L615435
void func_9803(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7)
{
  if (!HUD::DOES_BLIP_EXIST(iParam0))
  {
    return;
  }
  if (!MISC::IS_BIT_SET(iLocal_4147, 30))
  {
    HUD::_0x8410C5E0CD847B9D();
    MISC::SET_BIT(&iLocal_4147, 30);
  }
  HUD::_0xF83D0FEBE75E62C9(iParam0, fParam1, fParam2, fParam3, fParam4, fParam5, fParam6, iParam7);
  HUD::SET_BLIP_SHOW_CONE(iParam0, true);
}