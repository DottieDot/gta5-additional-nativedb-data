// fm_race_creator.c @ L430031
void func_6892(int iParam0, bool bParam1)
{
  if (HUD::DOES_BLIP_EXIST(Global_2416074[iParam0]))
  {
    if (bParam1)
    {
      if (!MISC::IS_BIT_SET(Global_2416074.f_383, iParam0))
      {
        HUD::SHOW_HEADING_INDICATOR_ON_BLIP(Global_2416074[iParam0], 1);
        MISC::SET_BIT(&(Global_2416074.f_383), iParam0);
      }
    }
    else if (MISC::IS_BIT_SET(Global_2416074.f_383, iParam0))
    {
      HUD::SHOW_HEADING_INDICATOR_ON_BLIP(Global_2416074[iParam0], 0);
      MISC::CLEAR_BIT(&(Global_2416074.f_383), iParam0);
    }
  }
  else if (MISC::IS_BIT_SET(Global_2416074.f_383, iParam0))
  {
    MISC::CLEAR_BIT(&(Global_2416074.f_383), iParam0);
  }
}