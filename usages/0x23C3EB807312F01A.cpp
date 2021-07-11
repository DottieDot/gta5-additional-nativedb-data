// fm_race_creator.ysc @ L430064
void func_6894(int iParam0, bool bParam1)
{
  if (bParam1)
  {
    if (!MISC::IS_BIT_SET(Global_2416074.f_384, iParam0))
    {
      HUD::SHOW_FRIEND_INDICATOR_ON_BLIP(Global_2416074[iParam0], 1);
      MISC::SET_BIT(&(Global_2416074.f_382), iParam0);
    }
  }
  else
  {
    if (HUD::DOES_BLIP_EXIST(Global_2416074[iParam0]))
    {
      HUD::SHOW_FRIEND_INDICATOR_ON_BLIP(Global_2416074[iParam0], 0);
    }
    MISC::CLEAR_BIT(&(Global_2416074.f_382), iParam0);
    func_6884(iParam0);
  }
}