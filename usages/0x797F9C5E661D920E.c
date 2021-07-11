// am_mp_arcade.c @ L10602
void func_123(var uParam0)
{
  int iVar0;
  
  STREAMING::REQUEST_MODEL(joaat("prop_npc_phone"));
  if (!STREAMING::HAS_MODEL_LOADED(joaat("prop_npc_phone")))
  {
    return;
  }
  if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uParam0->f_11))
  {
    if (func_107(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 1) + 1, 0, 1))
    {
      NETWORK::_RESERVE_NETWORK_LOCAL_OBJECTS(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 1) + 1);
      if (NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
      {
        iVar0 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_npc_phone"), 2722.091f, -385.3692f, -49.446f, true, true, true);
        STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_npc_phone"));
        NETWORK::_NETWORK_SET_ENTITY_INVISIBLE_TO_NETWORK(iVar0, 1);
        ENTITY::_0x352E2B5CF420BF3B(iVar0, 1);
        ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iVar0, 2722.091f, -385.3692f, -49.446f, 0, 0, 1);
        ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
        uParam0->f_11 = NETWORK::OBJ_TO_NET(iVar0);
      }
    }
  }
}