// business_battles_defend.ysc @ L8010
void func_157(int iParam0)
{
  int iVar0;
  
  iVar0 = NETWORK::NET_TO_OBJ(iParam0);
  switch (Local_216.f_3)
  {
    case 1:
    case 2:
      NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(iParam0, 1);
      OBJECT::PLACE_OBJECT_ON_GROUND_PROPERLY(iVar0);
      ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iVar0, true, 1);
      ENTITY::_SET_ENTITY_SOMETHING(iVar0, true);
      ENTITY::FREEZE_ENTITY_POSITION(iVar0, false);
      OBJECT::PLACE_OBJECT_ON_GROUND_PROPERLY(iVar0);
      ENTITY::SET_ENTITY_LOD_DIST(iVar0, 1200);
      ENTITY::SET_ENTITY_HEALTH(iVar0, 50, 0);
      ENTITY::SET_ENTITY_INVINCIBLE(iVar0, true);
      ENTITY::SET_ENTITY_PROOFS(iVar0, true, true, true, true, true, true, 1, false);
      ENTITY::_0xCEA7C8E1B48FF68C(iVar0, 1);
      OBJECT::_0x641F272B52E2F0F8(iVar0, 0);
      OBJECT::_SET_OBJECT_SOMETHING(iVar0, 0);
      NETWORK::_NETWORK_SET_ENTITY_INVISIBLE_TO_NETWORK(iVar0, 1);
      ENTITY::SET_ENTITY_VISIBLE(iVar0, true, 0);
      OBJECT::_HIDE_PICKUP(iVar0, false);
      break;
  }
}