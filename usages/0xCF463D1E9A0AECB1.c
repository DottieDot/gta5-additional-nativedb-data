// am_dead_drop.c @ L127197
void func_1377()
{
  if (func_145())
  {
    if (Local_1466[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4 != 4)
    {
      if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2))
      {
        if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(NETWORK::NET_TO_OBJ(Local_112.f_2), PLAYER::PLAYER_PED_ID()))
        {
          if (MISC::IS_BIT_SET(Local_1466[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_1, 1))
          {
            MISC::CLEAR_BIT(&(Local_1466[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_1), 1);
          }
          OBJECT::_0x92AEFB5F6E294023(NETWORK::NET_TO_OBJ(Local_112.f_2), true, 1);
          OBJECT::DETACH_PORTABLE_PICKUP_FROM_PED(NETWORK::NET_TO_OBJ(Local_112.f_2));
        }
      }
      func_1251();
      Local_1466[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4 = 4;
    }
  }
}