// act_cinema.c @ L2536
int func_53(bool bParam0, bool bParam1)
{
  if (Global_2437549.f_1893.f_688 != 0)
  {
    return 1;
  }
  if ((((((((!CAM::IS_SCREEN_FADED_IN() || (func_1152(8, -1) && func_54() != 65)) || (HUD::GET_PAUSE_MENU_STATE() != 0 && !bParam1)) || (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam0)) || NETWORK::IS_COMMERCE_STORE_OPEN()) || Global_76837) || Global_22350.f_8384) || HUD::IS_WARNING_MESSAGE_ACTIVE()) || Global_98721.f_1417)
  {
    return 0;
  }
  return 1;
}