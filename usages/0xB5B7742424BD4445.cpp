// fm_mission_controller.ysc @ L45525
void func_1008(int iParam0, int iParam1)
{
  if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
  {
    return;
  }
  OBJECT::_0x1A6CBB06E2D0D79D(iParam0, 1);
  NETWORK::_0xA6FCECCF4721D679(NETWORK::OBJ_TO_NET(iParam0));
  ENTITY::SET_ENTITY_VISIBLE(iParam0, true, 0);
  ENTITY::FREEZE_ENTITY_POSITION(iParam0, false);
  NETWORK::_NETWORK_SET_VEHICLE_WHEELS_DESTRUCTIBLE(iParam0, 1);
  OBJECT::_0xB5B7742424BD4445(iParam0, 1);
  func_1009(iParam0);
}