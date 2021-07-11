// flyunderbridges.c @ L526
int func_15()
{
  if (bLocal_38)
  {
    if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
    {
      if (ENTITY::GET_ENTITY_UPRIGHT_VALUE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) > -0.6f && ENTITY::GET_ENTITY_UPRIGHT_VALUE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) < 0.6f)
      {
        return 1;
      }
    }
  }
  else
  {
    return 1;
  }
  return 0;
}