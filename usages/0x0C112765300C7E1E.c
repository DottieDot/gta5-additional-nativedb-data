// business_battles_defend.c @ L21981
void func_420(int iParam0)
{
  switch (Local_216.f_3)
  {
    case 4:
      ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(NETWORK::NET_TO_OBJ(Local_216.f_590[iParam0]), false, 0);
      ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_216.f_590[iParam0]), true, 0);
      ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_OBJ(Local_216.f_590[iParam0]), true);
      if (ENTITY::DOES_ENTITY_HAVE_PHYSICS(NETWORK::NET_TO_OBJ(Local_216.f_590[iParam0])) && PHYSICS::_GET_HAS_OBJECT_FRAG_INST(NETWORK::NET_TO_OBJ(Local_216.f_590[iParam0])))
      {
        PHYSICS::SET_DISABLE_BREAKING(NETWORK::NET_TO_OBJ(Local_216.f_590[iParam0]), 1);
        PHYSICS::SET_DISABLE_FRAG_DAMAGE(NETWORK::NET_TO_OBJ(Local_216.f_590[iParam0]), 1);
      }
      ENTITY::SET_ENTITY_PROOFS(NETWORK::NET_TO_OBJ(Local_216.f_590[iParam0]), true, true, true, true, true, true, 1, true);
      break;
  }
}