// am_casino_peds.c @ L255545
int func_2741(int iParam0)
{
  int iVar0;
  vector3 vVar1;
  
  if (iParam0 == func_357())
  {
    return 0;
  }
  iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
  if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0, 0))
  {
    return 0;
  }
  vVar1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true) };
  if (INTERIOR::GET_ROOM_KEY_FROM_ENTITY(iVar0) == -374937855)
  {
    if (vVar1.z > -77f)
    {
      return 1;
    }
  }
  return 0;
}