// am_kill_list.c @ L27579
void func_714()
{
  int iVar0;
  int iVar1;
  
  iVar0 = 0;
  while (iVar0 < 4)
  {
    if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_112.f_7[iVar0]) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_112.f_7[iVar0]))
    {
      iVar1 = NETWORK::NET_TO_VEH(Local_112.f_7[iVar0]);
      if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, 0))
      {
        PHYSICS::_SET_ENTITY_PROOF_UNK(iVar1, 1);
      }
    }
    iVar0++;
  }
}