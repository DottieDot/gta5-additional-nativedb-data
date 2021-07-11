// freemode.ysc @ L847601
int func_12192()
{
  if (func_12194())
  {
    return 1;
  }
  if (Global_2460158)
  {
    return 1;
  }
  if (((((((((NETWORK::NETWORK_IS_IN_MP_CUTSCENE() == 0 || func_1042() == 1) && func_470() == 0) && func_12193(0) == 0) && func_12193(2) == 0) && func_12193(1) == 0) && func_10220(PLAYER::PLAYER_ID()) == 0) && HUD::IS_SOCIAL_CLUB_ACTIVE() == 0) && MISC::IS_BIT_SET(Global_2531497.f_1732, 12) == 0) && MISC::_IS_IN_POWER_SAVING_MODE() == 0)
  {
    return 0;
  }
  return 1;
}