// agency_heist2.ysc @ L4120
int func_93(int iParam0, var uParam1)
{
  if (!PED::IS_PED_INJURED(iParam0))
  {
    if (((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(*uParam1, uParam1->f_19 + Vector(-1.5f, 0f, -1f)), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(*uParam1, uParam1->f_22 + Vector(-1.5f, 0f, 1f)), (uParam1->f_25 + 1f), 0, true, 0) && !func_11(uParam1, PLAYER::PLAYER_PED_ID())) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(*uParam1, true), uParam1->f_4) < 4f) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(*uParam1, PLAYER::PLAYER_PED_ID()))
    {
      return 1;
    }
  }
  return 0;
}