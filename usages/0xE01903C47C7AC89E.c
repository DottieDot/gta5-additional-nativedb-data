// gb_casino.c @ L421721
void func_7360()
{
  int iVar0;
  
  iVar0 = 0;
  while (iVar0 < 30)
  {
    if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uLocal_960.f_947[iVar0 /*8*/]))
    {
      if (NETWORK::NET_TO_VEH(uLocal_960.f_947[iVar0 /*8*/]) == VEHICLE::GET_LAST_DRIVEN_VEHICLE())
      {
        VEHICLE::CLEAR_LAST_DRIVEN_VEHICLE();
      }
      if (func_7361(iVar0))
      {
        if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uLocal_960.f_947[iVar0 /*8*/]))
        {
          func_1351(&(uLocal_960.f_947[iVar0 /*8*/]));
        }
      }
      else
      {
        func_664(&(uLocal_960.f_947[iVar0 /*8*/]));
      }
    }
    iVar0++;
  }
}