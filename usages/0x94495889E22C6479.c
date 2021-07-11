// am_pi_menu.c @ L176039
int func_1388()
{
  int iVar0;
  
  if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
  {
    return 1;
  }
  if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
  {
    iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
    if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
    {
      return func_1389(ENTITY::GET_ENTITY_MODEL(iVar0));
    }
  }
  return 0;
}