// am_armybase.c @ L5313
void func_171()
{
  if (NETWORK::GET_NUM_RESERVED_MISSION_PEDS(false, 0) != 5)
  {
    if (func_178(5, 0, 1))
    {
      if (NETWORK::GET_NUM_CREATED_MISSION_PEDS(0) <= 5)
      {
        NETWORK::RESERVE_NETWORK_MISSION_PEDS(5);
      }
    }
  }
  if (NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(false, 0) != 3)
  {
    if (func_172(3, 0, 1))
    {
      if (NETWORK::GET_NUM_CREATED_MISSION_VEHICLES(0) <= 3)
      {
        NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(3);
      }
    }
  }
}