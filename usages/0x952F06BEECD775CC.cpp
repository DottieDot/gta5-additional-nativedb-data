// business_battles_defend.ysc @ L272426
void func_4245()
{
  if (!func_4246() && !func_434(25))
  {
    return;
  }
  switch (Local_216.f_3)
  {
    case 3:
      if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_216.f_636[0]))
      {
        PED::SET_PED_VEHICLE_FORCED_SEAT_USAGE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_216.f_636[0]), 0, 1);
        func_4791(25);
      }
      break;
  }
}