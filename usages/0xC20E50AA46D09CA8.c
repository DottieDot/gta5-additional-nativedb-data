// am_mp_arcade.c @ L324153
int func_4880()
{
  if (!func_4078())
  {
    return 0;
  }
  func_4075();
  if ((MISC::IS_BIT_SET(Local_823, 4) && Local_825.f_34 != -1) && Local_825.f_34 < 10)
  {
    if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_825.f_54[Local_825.f_34]))
    {
      if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(Local_825.f_54[Local_825.f_34]), 0)) && !NETWORK::NETWORK_IS_ENTITY_FADING(NETWORK::NET_TO_VEH(Local_825.f_54[Local_825.f_34]))) && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(NETWORK::NET_TO_VEH(Local_825.f_54[Local_825.f_34])))
      {
        if (func_4881(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_825.f_54[Local_825.f_34]), 0))
        {
          NETWORK::NETWORK_FADE_IN_ENTITY(PLAYER::PLAYER_PED_ID(), 1, 0);
          return 1;
        }
        else if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -1794415470) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -1794415470) != 0)
        {
          TASK::TASK_ENTER_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_825.f_54[Local_825.f_34]), 20000, Global_1676866, 2f, 16, 0);
        }
      }
    }
  }
  return 0;
}