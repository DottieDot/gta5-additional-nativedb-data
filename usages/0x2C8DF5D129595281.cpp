// am_mp_arena_garage.ysc @ L290509
int func_4191(var uParam0)
{
  int iVar0;
  
  iVar0 = 0;
  while (iVar0 < 2)
  {
    if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID((*uParam0)[iVar0]))
    {
      if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID((*uParam0)[iVar0]))
      {
        func_155(uParam0[iVar0]);
        NETWORK::_RESERVE_NETWORK_LOCAL_PEDS((NETWORK::GET_NUM_RESERVED_MISSION_PEDS(false, 1) - 1));
      }
      else
      {
        NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID((*uParam0)[iVar0]);
        return 0;
      }
    }
    iVar0++;
  }
  return 1;
}