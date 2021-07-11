// freemode.ysc @ L856182
void func_12392(int iParam0, int iParam1, int iParam2)
{
  if ((func_491(iParam0) || func_492(iParam0)) || Global_2540844.f_3.f_176)
  {
    HUD::SET_MP_GAMER_TAG_COLOUR(iParam1, iParam2, 118);
  }
  else
  {
    HUD::SET_MP_GAMER_TAG_COLOUR(iParam1, iParam2, func_1623(iParam0, PLAYER::GET_PLAYER_TEAM(iParam0), 0, 0, 0));
  }
}