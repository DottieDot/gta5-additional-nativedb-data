// am_mp_shooting_range.ysc @ L116413
int func_829(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13)
{
  if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Param0.f_1, 0, 2))
  {
    ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Param0.f_1);
    if (WEAPON::GET_PED_LAST_WEAPON_IMPACT_COORD(PLAYER::PLAYER_PED_ID(), uParam13))
    {
      return 1;
    }
    else
    {
      return 0;
    }
  }
  return 0;
}