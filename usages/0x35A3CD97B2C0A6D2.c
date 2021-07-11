// fm_mission_controller.c @ L195346
void func_2430(int iParam0, int iParam1, int iParam2)
{
  int iVar0;
  
  if (!HUD::DOES_BLIP_EXIST(iParam0))
  {
    return;
  }
  iVar0 = func_2431(iParam1, iParam2);
  if (iVar0 == -1)
  {
    return;
  }
  if (!MISC::IS_BIT_SET(iLocal_4753, (0 + iVar0)))
  {
    return;
  }
  HUD::SET_BLIP_SHOW_CONE(iParam0, false);
  HUD::_0x35A3CD97B2C0A6D2(iParam0);
  MISC::CLEAR_BIT(&iLocal_4753, (0 + iVar0));
}