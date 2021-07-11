// business_battles.c @ L250480
void func_3825(int iParam0)
{
  float fVar0;
  
  if (!func_3826())
  {
    return;
  }
  if (!func_609(NETWORK::PARTICIPANT_ID(), 34))
  {
    if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uLocal_809[iParam0]))
    {
      if (VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(uLocal_809[iParam0]), 0))
      {
        fVar0 = VEHICLE::_GET_VEHICLE_BODY_HEALTH_2(NETWORK::NET_TO_VEH(uLocal_809[iParam0]), 1148846080, 1148846080, 1148846080, 1148846080, 1148846080, 1148846080);
        if (fVar0 < 25f)
        {
          func_3788(34);
        }
      }
    }
  }
}