// pausemenu_map.ysc @ L9463
void func_255(int iParam0)
{
  if (HUD::IS_HOVERING_OVER_MISSION_CREATOR_BLIP())
  {
    if (HUD::DOES_BLIP_EXIST(iParam0))
    {
      if (HUD::GET_BLIP_SPRITE(iParam0) == 490)
      {
        Global_1574633 = 1;
      }
    }
  }
  else
  {
    Global_1574633 = 0;
  }
}