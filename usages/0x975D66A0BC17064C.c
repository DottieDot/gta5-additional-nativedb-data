// fm_bj_race_controler.c @ L308284
void func_4171(int iParam0, int iParam1, bool bParam2)
{
  float fVar0;
  float fVar1;
  
  fVar0 = SYSTEM::TO_FLOAT(iParam1);
  fVar1 = SYSTEM::TO_FLOAT(iParam0);
  iParam1 = SYSTEM::CEIL(fVar0);
  iParam0 = SYSTEM::CEIL(fVar1);
  PED::SET_PED_MAX_HEALTH(PLAYER::PLAYER_PED_ID(), SYSTEM::ROUND((IntToFloat(iParam0) * Global_262145.f_106)));
  if (bParam2)
  {
    func_4172(SYSTEM::ROUND((IntToFloat(iParam0) * Global_262145.f_106)));
  }
  HUD::SET_MAX_HEALTH_HUD_DISPLAY(SYSTEM::ROUND((IntToFloat(iParam1) * Global_262145.f_106)));
}