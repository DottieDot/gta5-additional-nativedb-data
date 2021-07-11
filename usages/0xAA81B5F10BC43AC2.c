// am_gang_call.c @ L18385
void func_530()
{
  if (NETWORK::GET_NUM_RESERVED_MISSION_PEDS(false, 0) != Local_95.f_45)
  {
    if (func_538(Local_95.f_45, 0, 1))
    {
      if (NETWORK::GET_NUM_CREATED_MISSION_PEDS(0) <= Local_95.f_45)
      {
        NETWORK::RESERVE_NETWORK_MISSION_PEDS(Local_95.f_45);
      }
    }
  }
  if (NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(false, 0) != Local_95.f_46)
  {
    if (func_537(Local_95.f_45, 0, 1))
    {
      if (NETWORK::GET_NUM_CREATED_MISSION_VEHICLES(0) <= Local_95.f_46)
      {
        NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(Local_95.f_46);
      }
    }
  }
  if (NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 0) != Local_95.f_47)
  {
    if (func_531(Local_95.f_45, 0, 1))
    {
      if (NETWORK::GET_NUM_CREATED_MISSION_OBJECTS(0) <= Local_95.f_47)
      {
        NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(Local_95.f_47);
      }
    }
  }
}