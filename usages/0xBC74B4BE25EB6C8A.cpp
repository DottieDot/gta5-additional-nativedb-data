// am_mp_property_ext.ysc @ L239954
int func_3448()
{
  int iVar0;
  
  if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
  {
    iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
    if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
    {
      if (!func_3437(ENTITY::GET_ENTITY_MODEL(iVar0)))
      {
        return 0;
      }
      if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0) || VEHICLE::IS_HELI_PART_BROKEN(iVar0, 1, 1, 1))
      {
        return 0;
      }
      if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0))
      {
        return 0;
      }
      return 1;
    }
  }
  return 0;
}