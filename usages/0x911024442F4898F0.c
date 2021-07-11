// fm_deathmatch_controler.c @ L485247
void func_8079(int iParam0, var uParam1)
{
  struct<4> Var0;
  int iVar1;
  
  if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 4))
  {
    if (Var0 == 1182964416)
    {
      iVar1 = NETWORK::NET_TO_OBJ((*uParam1)[Var0.f_2]);
      if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
      {
        ENTITY::FREEZE_ENTITY_POSITION(iVar1, false);
      }
      if (Var0.f_3)
      {
      }
      OBJECT::_SET_ENABLE_ARENA_PROP_PHYSICS(iVar1, Var0.f_3, 0);
      if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
      {
      }
    }
  }
}