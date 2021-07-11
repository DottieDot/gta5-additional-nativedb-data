// golf.ysc @ L129815
void func_1320(int iParam0)
{
  if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, 0))
  {
    ENTITY::SET_ENTITY_LOD_DIST(iParam0, 500);
    PED::SET_PED_DIES_IN_WATER(iParam0, 0);
    PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(iParam0, "move_m@golfer@");
    PED::SET_PED_CONFIG_FLAG(iParam0, 332, true);
  }
}