// am_mp_arcade.c @ L12555
int func_174(int iParam0)
{
  int iVar0;
  
  if ((ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, 0)) && func_35(iParam0))
  {
    return 1;
  }
  iVar0 = 0;
  if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
  {
    iVar0 = GRAPHICS::GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(iParam0, 0);
  }
  if (iVar0 >= 3)
  {
    return 1;
  }
  return 0;
}