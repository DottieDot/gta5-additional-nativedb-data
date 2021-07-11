// fm_race_creator.c @ L426776
void func_6795(int iParam0)
{
  int iVar0;
  
  iVar0 = iParam0;
  if (!MISC::IS_BIT_SET(Global_2416074.f_378, iVar0))
  {
    if (MISC::IS_BIT_SET(Global_2416074.f_376, iVar0))
    {
      if (HUD::DOES_BLIP_EXIST(Global_2416074[iVar0]))
      {
        if (HUD::GET_BLIP_SPRITE(Global_2416074[iVar0]) == func_6796(iParam0))
        {
          HUD::PULSE_BLIP(Global_2416074[iVar0]);
          MISC::SET_BIT(&(Global_2416074.f_377), iVar0);
          Global_2416074.f_300[iVar0] = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 2000);
        }
        MISC::CLEAR_BIT(&(Global_2416074.f_376), iVar0);
      }
      else if (iVar0 == Global_2437549)
      {
        MISC::CLEAR_BIT(&(Global_2416074.f_376), iVar0);
      }
    }
    if (MISC::IS_BIT_SET(Global_2416074.f_377, iVar0))
    {
      if (NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), Global_2416074.f_300[iVar0]))
      {
        MISC::CLEAR_BIT(&(Global_2416074.f_377), iVar0);
      }
    }
  }
}