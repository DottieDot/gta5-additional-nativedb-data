// am_mp_property_int.c @ L327534
void func_3857()
{
  int iVar0;
  
  iVar0 = NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(false, 1);
  if (Local_5543.f_353 != iVar0)
  {
    if (Local_5543.f_353 < iVar0 || func_1021(Local_5543.f_353, 0, 1))
    {
      NETWORK::_RESERVE_NETWORK_LOCAL_VEHICLES(Local_5543.f_353);
    }
  }
}