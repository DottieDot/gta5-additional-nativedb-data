// am_dead_drop.c @ L1928
int func_14()
{
  if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_112.f_2))
  {
    if (func_15(Local_112.f_6))
    {
      if (NETWORK::CAN_REGISTER_MISSION_ENTITIES(0, 0, 1, 0))
      {
        Local_112.f_2 = NETWORK::OBJ_TO_NET(OBJECT::CREATE_PORTABLE_PICKUP(joaat("PICKUP_PORTABLE_CRATE_FIXED_INCAR"), Local_112.f_7, true, Local_112.f_6));
        ENTITY::SET_ENTITY_COORDS_NO_OFFSET(NETWORK::NET_TO_OBJ(Local_112.f_2), Local_112.f_7, 0, 0, 1);
        NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(Local_112.f_2, 1);
        ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_OBJ(Local_112.f_2), true);
        OBJECT::_SET_OBJECT_SOMETHING(NETWORK::NET_TO_OBJ(Local_112.f_2), 1);
        OBJECT::SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(NETWORK::NET_TO_OBJ(Local_112.f_2), 1);
        ENTITY::_SET_ENTITY_SOMETHING(NETWORK::NET_TO_OBJ(Local_112.f_2), false);
        PHYSICS::ACTIVATE_PHYSICS(NETWORK::NET_TO_OBJ(Local_112.f_2));
        ENTITY::SET_ENTITY_LOD_DIST(NETWORK::NET_TO_OBJ(Local_112.f_2), 1200);
      }
    }
  }
  if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_112.f_2))
  {
    return 0;
  }
  MISC::SET_BIT(&(Local_112.f_1), 1);
  return 1;
}