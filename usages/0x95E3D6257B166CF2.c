// am_mp_defunct_base.c @ L281833
void func_4103()
{
  if (!Global_1574410)
  {
    if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
    {
      if (ENTITY::DOES_ENTITY_EXIST(func_4648()))
      {
        if (func_4104(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(func_4648()), 155, 0) && !func_4104(PLAYER::PLAYER_ID(), 155, 0))
        {
          MISC::CLEAR_AREA_OF_VEHICLES(Global_4456448.f_48314, 3000f, 0, 0, 0, 0, false, 0);
          MISC::CLEAR_AREA_OF_VEHICLES(Global_4456448.f_48314, 3000f, 0, 0, 1, 0, false, 0);
          MISC::CLEAR_AREA_OF_VEHICLES(Global_4456448.f_48314, 3000f, 0, 0, 0, 1, false, 0);
          PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
          PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f, 0f);
          VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
          VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
          VEHICLE::SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
        }
      }
    }
  }
}