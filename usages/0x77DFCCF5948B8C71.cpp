// fm_bj_race_controler.ysc @ L308306
void func_4173(int iParam0, int iParam1)
{
  PLAYER::SET_PLAYER_MAX_ARMOUR(PLAYER::PLAYER_ID(), iParam1);
  if ((!Global_1574400 && !Global_1574398) && Global_1590446[PLAYER::PLAYER_ID() /*871*/] == -1)
  {
    PED::SET_PED_ARMOUR(PLAYER::PLAYER_PED_ID(), iParam0);
  }
  HUD::SET_MAX_ARMOUR_HUD_DISPLAY(iParam1);
}