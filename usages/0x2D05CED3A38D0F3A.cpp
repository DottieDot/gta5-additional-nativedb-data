// barry1.ysc @ L45150
void func_450(vector3 vParam0, vector3 vParam1, int iParam2)
{
  PLAYER::SET_PLAYER_HEALTH_RECHARGE_MULTIPLIER(PLAYER::PLAYER_ID(), 0f);
  if (!func_421(vParam0) && !func_421(vParam1))
  {
  }
  iLocal_101 = func_15(iLocal_127, 0);
  func_393(&iLocal_101, 0);
  if (iParam2 == 1)
  {
    PED::APPLY_DAMAGE_TO_PED(PLAYER::PLAYER_PED_ID(), 100000, 1, 0);
    PED::EXPLODE_PED_HEAD(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_SNIPERRIFLE"));
  }
}