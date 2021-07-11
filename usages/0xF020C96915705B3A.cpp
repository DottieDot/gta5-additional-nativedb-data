// social_controller.ysc @ L6827
void func_179(int iParam0, var uParam1, bool bParam2)
{
  struct<2> Var0;
  
  if (!func_53() || !func_52())
  {
    return;
  }
  if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 2))
  {
    if (!bParam2)
    {
      return;
    }
    if (MISC::GET_PROFILE_SETTING(803) == 1 && uParam1->f_166 == 0)
    {
      if (Var0.f_1)
      {
        HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CREWKICK_TA");
        HUD::END_TEXT_COMMAND_THEFEED_POST_MPTICKER(0, 1);
      }
      else
      {
        HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CREWKICK_TI");
        HUD::END_TEXT_COMMAND_THEFEED_POST_MPTICKER(0, 1);
      }
    }
  }
}