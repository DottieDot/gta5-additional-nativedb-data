// am_ammo_drop.c @ L1480
void func_39(var uParam0)
{
  int iVar0;
  
  if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0))
  {
    iVar0 = NETWORK::NET_TO_ENT(*uParam0);
    ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar0);
  }
}