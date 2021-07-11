// fm_mission_controller.ysc @ L576686
void func_9158(var uParam0, int iParam1)
{
  if (HUD::DOES_BLIP_EXIST(*iParam1))
  {
    if (uParam0->f_29 == 0)
    {
      HUD::_SET_BLIP_DISPLAY_INDICATOR_ON_BLIP(*iParam1, 0);
      HUD::_0x4B5B620C9B59ED34(*iParam1, false);
    }
    else if (uParam0->f_29 == 2)
    {
      HUD::_0x4B5B620C9B59ED34(*iParam1, false);
      HUD::_SET_BLIP_DISPLAY_INDICATOR_ON_BLIP(*iParam1, 1);
    }
    else if (uParam0->f_29 == 1)
    {
      HUD::_SET_BLIP_DISPLAY_INDICATOR_ON_BLIP(*iParam1, 0);
      HUD::_0x4B5B620C9B59ED34(*iParam1, true);
    }
  }
}