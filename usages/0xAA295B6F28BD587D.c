// pilot_school.c @ L104564
int func_577(int iParam0)
{
  if (iParam0 == 1)
  {
    HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(&(Local_702.f_52));
    return HUD::END_TEXT_COMMAND_THEFEED_POST_AWARD("MPMedals_FEED", "Feed_Medal_FlightSchool", 0, 107, "HUD_MED_UNLKED");
  }
  else if (iParam0 == 2)
  {
    HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(&(Local_702.f_52));
    return HUD::END_TEXT_COMMAND_THEFEED_POST_AWARD("MPMedals_FEED", "Feed_Medal_FlightSchool", 0, 108, "HUD_MED_UNLKED");
  }
  else if (iParam0 == 3)
  {
    HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(&(Local_702.f_52));
    return HUD::END_TEXT_COMMAND_THEFEED_POST_AWARD("MPMedals_FEED", "Feed_Medal_FlightSchool", 0, 109, "HUD_MED_UNLKED");
  }
  return -1;
}