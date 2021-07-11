// am_mp_property_int.ysc @ L182649
int func_1648()
{
  if (func_144(joaat("ex_prop_tv_settop_remote")))
  {
    if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iLocal_5556))
    {
      if (func_164(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 1) + 1, 0, 1))
      {
        NETWORK::_RESERVE_NETWORK_LOCAL_OBJECTS(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 1) + 1);
        if (NETWORK::CAN_REGISTER_MISSION_ENTITIES(0, 0, 1, 0))
        {
          iLocal_5556 = NETWORK::OBJ_TO_NET(OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("ex_prop_tv_settop_remote"), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true, false, false));
          ENTITY::SET_ENTITY_COLLISION(NETWORK::NET_TO_ENT(iLocal_5556), false, 0);
          NETWORK::_NETWORK_SET_ENTITY_INVISIBLE_TO_NETWORK(NETWORK::NETWORK_GET_ENTITY_FROM_NETWORK_ID(iLocal_5556), 1);
          ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_ENT(iLocal_5556), false, 0);
          NETWORK::_SET_NETWORK_ID_SYNC_TO_PLAYER(iLocal_5556, PLAYER::PLAYER_ID(), 1);
          return 1;
        }
      }
    }
    else
    {
      return 1;
    }
  }
  return 0;
}