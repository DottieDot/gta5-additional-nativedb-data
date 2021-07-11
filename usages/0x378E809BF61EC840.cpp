// fm_bj_race_controler.ysc @ L200730
int func_2502(int iParam0)
{
  int iVar0;
  
  iVar0 = -1;
  HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("LBD_VOTE_TICK");
  HUD::ADD_TEXT_COMPONENT_INTEGER(iParam0);
  iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER_WITH_TOKENS(0, 1);
  return iVar0;
}