// am_airstrike.c @ L1899
int func_58()
{
  if ((!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_238.f_2.f_3) && func_83(Local_238.f_2.f_3.f_1)) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_238.f_2))
  {
    if (func_15(Local_238.f_2))
    {
      if (func_60(&(Local_238.f_2.f_3), Local_238.f_2, 22, Local_238.f_2.f_3.f_1, -1, 1, 1, 1))
      {
        PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_238.f_2.f_3), true);
        PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_238.f_2.f_3), Global_1574997);
        PED::SET_PED_RANDOM_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_238.f_2.f_3), 0);
        PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_238.f_2.f_3), true);
        func_59();
        TASK::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_238.f_2.f_3), iLocal_48);
        VEHICLE::SET_TASK_VEHICLE_GOTO_PLANE_MIN_HEIGHT_ABOVE_TERRAIN(NETWORK::NET_TO_VEH(Local_238.f_2), SYSTEM::ROUND(50f));
      }
    }
  }
  if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_238.f_2.f_3))
  {
    return 0;
  }
  STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_238.f_2.f_3.f_1);
  return 1;
}