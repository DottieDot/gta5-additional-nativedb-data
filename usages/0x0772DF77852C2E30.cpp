// freemode.ysc @ L767605
void func_11065(var uParam0)
{
  if (Global_2508071)
  {
    if ((((((((((func_11067() && !CAM::IS_SCREEN_FADED_OUT()) && !func_1594()) && !func_18037()) && !func_541()) && func_15359(PLAYER::PLAYER_ID(), 1, 1)) && func_15278()) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && !func_1256()) && !Global_1312792) && !Global_1662552)
    {
      if (Global_2508076 == 0)
      {
        Global_2508076 = 1;
      }
      HUD::_0x170F541E1CADD1DE(1);
      HUD::_SET_PLAYER_CASH_CHANGE(0, (Global_262145.f_23550 * Global_2508076));
      HUD::_0x170F541E1CADD1DE(0);
      func_748("WS_RFUND", -1);
      MISC::SET_BIT(&(uParam0->f_1), 9);
      Global_2508076 = 0;
      Global_2508071 = 0;
    }
  }
  func_11066(uParam0);
}