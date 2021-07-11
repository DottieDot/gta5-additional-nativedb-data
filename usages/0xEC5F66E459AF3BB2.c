// bj.c @ L21595
bool func_346(var uParam0, var uParam1, int iParam2)
{
  int iVar0;
  int iVar1;
  
  if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
  {
    return 1;
  }
  iVar0 = PLAYER::PLAYER_PED_ID();
  if (!*uParam1)
  {
    iVar1 = PED::GET_PED_PARACHUTE_LANDING_TYPE(iVar0);
    if (iVar1 != -1 && !ENTITY::IS_ENTITY_IN_AIR(iVar0))
    {
      *uParam1 = 1;
      *uParam0 = iVar1;
    }
  }
  return (((ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()) || (PED::GET_PED_PARACHUTE_STATE(iVar0) == 3 && !ENTITY::IS_ENTITY_IN_AIR(iVar0))) || (PED::GET_PED_PARACHUTE_STATE(iVar0) == -1 && !ENTITY::IS_ENTITY_IN_AIR(iVar0))) || (((ENTITY::DOES_ENTITY_EXIST(*iParam2) && !PED::IS_PED_INJURED(iVar0)) && !ENTITY::IS_ENTITY_DEAD(*iParam2, 0)) && PED::IS_PED_ON_SPECIFIC_VEHICLE(iVar0, *iParam2)));
}