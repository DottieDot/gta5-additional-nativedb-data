// am_mp_vehicle_reward.c @ L290
void func_8()
{
  int iVar0;
  
  if (Local_96.f_8 != -1)
  {
    if (func_12())
    {
      if (((ENTITY::DOES_ENTITY_EXIST(Local_96.f_11[Local_96.f_8]) && (!ENTITY::IS_ENTITY_DEAD(Local_96.f_11[Local_96.f_8], 0) || ENTITY::IS_ENTITY_IN_WATER(Local_96.f_11[Local_96.f_8]))) && func_10(Local_96.f_11[Local_96.f_8], 1, 0, 0, 0, 0, 1, 0, 1)) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_96.f_11[Local_96.f_8], 0))
      {
        iVar0 = Local_96.f_11[Local_96.f_8];
        if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
        {
          if (func_9(iVar0, &(Local_96.f_9)))
          {
            if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
            {
              VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(iVar0, 1);
              VEHICLE::_0xCFD778E7904C255E(iVar0);
            }
            NETWORK::NETWORK_FADE_OUT_ENTITY(iVar0, 0, 1);
            VEHICLE::DELETE_VEHICLE(&iVar0);
          }
        }
      }
    }
  }
}