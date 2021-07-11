// am_ammo_drop.ysc @ L3432
int func_114()
{
  int iVar0;
  
  if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_60.f_19))
  {
    if (!ENTITY::IS_ENTITY_IN_AIR(NETWORK::NET_TO_OBJ(Local_60.f_19)))
    {
      iVar0 = 1;
    }
    if (OBJECT::HAS_OBJECT_BEEN_BROKEN(NETWORK::NET_TO_OBJ(Local_60.f_19), 0))
    {
      iVar0 = 1;
    }
    if (ENTITY::IS_ENTITY_IN_WATER(NETWORK::NET_TO_OBJ(Local_60.f_19)))
    {
      iVar0 = 1;
    }
    if (func_115())
    {
      iVar0 = 1;
    }
    if (iVar0 == 1)
    {
      if (func_116(Local_60.f_19))
      {
        PHYSICS::SET_DISABLE_BREAKING(NETWORK::NET_TO_OBJ(Local_60.f_19), 0);
        return 1;
      }
    }
  }
  return 0;
}