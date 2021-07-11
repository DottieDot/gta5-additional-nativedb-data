// am_heli_taxi.c @ L6521
void func_159()
{
  if (!iLocal_1117)
  {
    if (Local_214.f_24 == 2)
    {
      if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_214.f_3))
      {
        if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_214.f_3))
        {
          VEHICLE::SET_HELI_TURBULENCE_SCALAR(iLocal_1123, 1f);
          iLocal_1117 = 1;
        }
        else
        {
          NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_214.f_3);
        }
      }
    }
  }
}