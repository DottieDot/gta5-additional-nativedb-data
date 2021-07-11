// business_battles_sell.ysc @ L307906
int func_4568(int iParam0)
{
  int iVar0;
  
  if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_915.f_31[iParam0 /*42*/]))
  {
    iVar0 = NETWORK::NET_TO_VEH(Local_915.f_31[iParam0 /*42*/]);
    if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
    {
      return SYSTEM::FLOOR(VEHICLE::GET_VEHICLE_BODY_HEALTH(iVar0));
    }
    return 0;
  }
  return func_692(iParam0);
}