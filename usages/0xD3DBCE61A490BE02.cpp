// am_pass_the_parcel.ysc @ L5471
void func_131()
{
  if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_132.f_16))
  {
    if (VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(Local_132.f_16), 0))
    {
      if (func_133(PLAYER::PLAYER_ID()) || func_5(PLAYER::PLAYER_ID()))
      {
        VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(NETWORK::NET_TO_VEH(Local_132.f_16), 0);
        if (func_132(0, 0))
        {
          TASK::TASK_LEAVE_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_132.f_16), 0);
        }
      }
      else
      {
        VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(NETWORK::NET_TO_VEH(Local_132.f_16), 1);
      }
    }
  }
}