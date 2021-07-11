// business_battles.ysc @ L234246
void func_3476(bool bParam0)
{
  int iVar0;
  
  iVar0 = 0;
  while (iVar0 < func_3871())
  {
    if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uLocal_809[iVar0]))
    {
      if (bParam0)
      {
        if (!NETWORK::IS_DAMAGE_TRACKER_ACTIVE_ON_NETWORK_ID(uLocal_809[iVar0]))
        {
          NETWORK::ACTIVATE_DAMAGE_TRACKER_ON_NETWORK_ID(uLocal_809[iVar0], 1);
        }
      }
      else if (NETWORK::IS_DAMAGE_TRACKER_ACTIVE_ON_NETWORK_ID(uLocal_809[iVar0]))
      {
        NETWORK::ACTIVATE_DAMAGE_TRACKER_ON_NETWORK_ID(uLocal_809[iVar0], 0);
      }
    }
    iVar0++;
  }
}