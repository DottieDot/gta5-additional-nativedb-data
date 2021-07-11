// fm_bj_race_controler.c @ L485512
void func_7896(int iParam0, int iParam1)
{
  int iVar0;
  
  iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
  if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
  {
    NETWORK::_0x95BAF97C82464629(NETWORK::OBJ_TO_NET(iParam0), 1);
    NETWORK::_NETWORK_SET_NETWORK_ID_DYNAMIC(NETWORK::OBJ_TO_NET(iParam0), 1);
  }
  if (func_7901(ENTITY::GET_ENTITY_MODEL(iParam0)))
  {
    OBJECT::_0x1C57C94A6446492A(iParam0, 1);
  }
  if (func_7899(iVar0))
  {
    ENTITY::FREEZE_ENTITY_POSITION(iParam0, true);
  }
  if (func_7899(iVar0) || func_7901(iVar0))
  {
    ENTITY::SET_ENTITY_INVINCIBLE(iParam0, true);
  }
  if (func_7897(iVar0))
  {
    ENTITY::SET_ENTITY_PROOFS(iParam0, false, true, false, false, false, false, 0, false);
    ENTITY::SET_ENTITY_INVINCIBLE(iParam0, false);
  }
  ENTITY::SET_ENTITY_LOD_DIST(iParam0, 750);
}