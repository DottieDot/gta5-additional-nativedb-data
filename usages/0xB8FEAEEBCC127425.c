// business_battles.c @ L252558
void func_3888()
{
  int iVar0;
  
  iVar0 = 0;
  while (iVar0 < func_1229(func_3620(), func_461()))
  {
    if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uLocal_809.f_1110[iVar0]))
    {
      if (func_1227(func_1228(iVar0, func_3620(), func_461())))
      {
        GRAPHICS::REMOVE_PARTICLE_FX_FROM_ENTITY(NETWORK::NET_TO_ENT(uLocal_809.f_1110[iVar0]));
      }
      if (func_3889(iVar0))
      {
        if (func_1235(uLocal_809.f_1110[iVar0]))
        {
          func_1285(&(uLocal_809.f_1110[iVar0]));
        }
      }
      else
      {
        func_686(&(uLocal_809.f_1110[iVar0]));
      }
    }
    iVar0++;
  }
}