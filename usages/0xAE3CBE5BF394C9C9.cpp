// am_ammo_drop.ysc @ L430
void func_3(var uParam0)
{
  int iVar0;
  
  if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
  {
    if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(*uParam0))
    {
    }
  }
  if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0))
  {
    iVar0 = NETWORK::NET_TO_ENT(*uParam0);
    ENTITY::DELETE_ENTITY(&iVar0);
  }
}