// am_armybase.c @ L1445
int func_43(int iParam0, int iParam1)
{
  int iVar0;
  
  if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_115.f_3[iParam0 /*5*/]))
  {
    return 1;
  }
  iVar0 = NETWORK::NET_TO_VEH(Local_115.f_3[iParam0 /*5*/]);
  if (ENTITY::IS_ENTITY_DEAD(iVar0, 0))
  {
    return 1;
  }
  if (TASK::GET_ACTIVE_VEHICLE_MISSION_TYPE(iVar0) != iParam1)
  {
    return 0;
  }
  return 1;
}