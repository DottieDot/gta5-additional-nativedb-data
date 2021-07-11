// cheat_controller.ysc @ L435
void func_16(int iParam0)
{
  if (func_14(""))
  {
  }
  else
  {
    HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CHEAT_ACTIVATED");
    HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam0);
    func_17(HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1));
    STATS::PLAYSTATS_CHEAT_APPLIED(iParam0);
  }
}