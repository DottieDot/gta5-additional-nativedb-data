// act_cinema.ysc @ L4241
int func_106(int iParam0)
{
  int iVar0;
  int iVar1;
  
  if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, -1, 0))
  {
    iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, 0);
    if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, 0))
    {
      if (PED::IS_PED_A_PLAYER(iVar0))
      {
        iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
        if (func_35(iVar1, 0, 0))
        {
          if (func_107(iVar1))
          {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}