// act_cinema.ysc @ L4017
int func_98()
{
  int iVar0;
  
  if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
  {
    iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
    if (ENTITY::DOES_ENTITY_EXIST(iVar0))
    {
      if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
      {
        if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, 0) == PLAYER::PLAYER_PED_ID())
        {
          return 1;
        }
      }
    }
  }
  return 0;
}