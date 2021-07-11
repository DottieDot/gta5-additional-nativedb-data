// carwash1.ysc @ L37986
bool func_336()
{
  int iVar0;
  
  if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
  {
    iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
    return ENTITY::IS_ENTITY_UPRIGHT(iVar0, 90f);
  }
  return ENTITY::IS_ENTITY_UPRIGHT(PLAYER::PLAYER_PED_ID(), 90f);
}