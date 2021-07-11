// agency_heist2.ysc @ L899
int func_11(var uParam0, int iParam1)
{
  if (ENTITY::DOES_ENTITY_EXIST(iParam1) && ENTITY::DOES_ENTITY_EXIST(*uParam0))
  {
    if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam1, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(*uParam0, uParam0->f_19), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(*uParam0, uParam0->f_22), uParam0->f_25, 0, true, 0))
    {
      return 1;
    }
  }
  return 0;
}