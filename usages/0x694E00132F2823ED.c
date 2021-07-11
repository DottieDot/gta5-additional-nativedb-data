// fm_mission_controller.c @ L758814
void func_12448(int iParam0, int iParam1, bool bParam2)
{
  if (bParam2)
  {
    ENTITY::_0x694E00132F2823ED(iParam0, 1);
  }
  func_12394(iParam0, iParam1, bParam2);
  ENTITY::_SET_ENTITY_SOMETHING(iParam0, true);
  VEHICLE::_SET_BOAT_MOVEMENT_RESISTANCE(iParam0, 99999f);
  VEHICLE::SET_BOAT_ANCHOR(iParam0, false);
  ENTITY::SET_ENTITY_DYNAMIC(iParam0, 1);
  PHYSICS::ACTIVATE_PHYSICS(iParam0);
  VEHICLE::SET_VEHICLE_ENGINE_ON(iParam0, true, true, 0);
}