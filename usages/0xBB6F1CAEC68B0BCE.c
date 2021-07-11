// business_battles_sell.c @ L341384
void func_5303(int iParam0)
{
  int iVar0;
  float fVar1;
  
  switch (func_5579())
  {
    case 1:
      if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_915.f_31[iParam0 /*42*/]))
      {
        iVar0 = NETWORK::NET_TO_VEH(Local_915.f_31[iParam0 /*42*/]);
        if (func_77(iVar0))
        {
          fVar1 = func_433(iLocal_218, iVar0, 0);
          if (fVar1 < 100f)
          {
            if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_915.f_31[iParam0 /*42*/]))
            {
              VEHICLE::SET_VEHICLE_ENGINE_ON(iVar0, true, true, 0);
              AUDIO::SET_VEHICLE_RADIO_ENABLED(iVar0, true);
              AUDIO::SET_VEHICLE_RADIO_LOUD(iVar0, 1);
              if (!func_32(iParam0, 8))
              {
                AUDIO::_0xC1805D05E6D4FE10(iVar0);
                AUDIO::SET_VEH_RADIO_STATION(iVar0, func_5304());
              }
            }
          }
        }
      }
      break;
  }
}