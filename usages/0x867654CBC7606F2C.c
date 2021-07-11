// business_battles.c @ L206446
void func_2964(int iParam0, bool bParam1)
{
  vector3 vVar0;
  
  PED::SET_PED_DIES_WHEN_INJURED(iParam0, true);
  if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
  {
    vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
    MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(vVar0.x, (vVar0.y - 0.1f), (vVar0.z - 0.1f), vVar0.x, (vVar0.y + 0.1f), (vVar0.z + 0.1f), 300, 1, joaat("WEAPON_ASSAULTSHOTGUN"), 0, 1, 1, -1082130432);
    PED::SET_PED_CONFIG_FLAG(iParam0, 227, true);
    ENTITY::SET_ENTITY_HEALTH(iParam0, 0, 0);
    func_1161(iParam0, -1, bParam1);
  }
}