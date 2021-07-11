// freemode.ysc @ L948149
int func_14862(vector3 vParam0, int iParam1)
{
  int iVar0;
  
  iVar0 = HUD::ADD_BLIP_FOR_RADIUS(vParam0, 80f);
  if (iVar0 == 0)
  {
    return 0;
  }
  HUD::SET_BLIP_ALPHA(iVar0, 120);
  HUD::SHOW_HEIGHT_ON_BLIP(iVar0, false);
  HUD::SET_BLIP_AS_SHORT_RANGE(iVar0, true);
  HUD::SET_BLIP_COLOUR(iVar0, iParam1);
  HUD::SET_BLIP_PRIORITY(iVar0, 1);
  HUD::SHOW_TICK_ON_BLIP(iVar0, 0);
  HUD::SET_BLIP_DISPLAY(iVar0, 8);
  return iVar0;
}