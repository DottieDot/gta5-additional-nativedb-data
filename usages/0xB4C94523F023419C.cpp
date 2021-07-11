// am_mp_rc_vehicle.ysc @ L114377
void func_1015()
{
  if (func_1017())
  {
    if (func_943(Local_117.f_25))
    {
      if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Local_117.f_25))
      {
        NETWORK::SET_NETWORK_VEHICLE_RESPOT_TIMER(NETWORK::VEH_TO_NET(Local_117.f_25), 10000, 0, 0);
        func_1016(0);
      }
      else
      {
        NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(Local_117.f_25);
      }
    }
  }
}