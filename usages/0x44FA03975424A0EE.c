// freemode.c @ L847319
void func_12179(int iParam0, var uParam1, int iParam2)
{
  if (func_15278())
  {
    if (func_514(uParam1, iParam2, 0))
    {
      if (func_15359(PLAYER::PLAYER_ID(), 0, 1))
      {
        HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("HUD_ILDETIME");
        HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam0, 134);
        Global_2461332 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER_FORCED(1, 1);
      }
    }
  }
}