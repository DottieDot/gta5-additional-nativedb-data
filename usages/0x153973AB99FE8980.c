// am_joyrider.c @ L517
int func_12()
{
  vector3 vVar0;
  float fVar1;
  
  if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_93.f_2))
  {
    if (func_34(Local_93.f_4))
    {
      if (func_16(&vVar0, &fVar1))
      {
        if (func_13(&(Local_93.f_2), Local_93.f_4, vVar0, fVar1, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
        {
          VEHICLE::SET_VEHICLE_ENGINE_ON(NETWORK::NET_TO_VEH(Local_93.f_2), true, true, 0);
          VEHICLE::SET_VEHICLE_IS_WANTED(NETWORK::NET_TO_VEH(Local_93.f_2), 1);
          VEHICLE::SET_VEHICLE_IS_STOLEN(NETWORK::NET_TO_VEH(Local_93.f_2), true);
          AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(NETWORK::NET_TO_VEH(Local_93.f_2), "JOYRIDER_GROUP", 0f);
          STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_93.f_4);
        }
      }
    }
  }
  if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_93.f_2))
  {
    return 0;
  }
  return 1;
}