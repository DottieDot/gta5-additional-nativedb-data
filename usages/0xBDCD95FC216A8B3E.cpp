// am_airstrike.ysc @ L1226
void func_28()
{
  int iVar0;
  
  if (!func_87(Local_238.f_2.f_3))
  {
    if (func_29(Local_238.f_2.f_3))
    {
      if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_238.f_2.f_3))
      {
        iVar0 = NETWORK::NET_TO_PED(Local_238.f_2.f_3);
        ENTITY::SET_ENTITY_HEALTH(iVar0, 0, 0);
      }
    }
  }
}