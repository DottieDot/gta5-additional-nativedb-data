// armenian3.ysc @ L112988
int func_621(int iParam0)
{
  if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, 0))
  {
    func_622(iParam0, 0);
    VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iParam0, "57EIG117");
    VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(iParam0, false);
    VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iParam0, true);
    ENTITY::_SET_ENTITY_SOMETHING(iParam0, true);
    VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(iParam0, 0, false);
    VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam0, false);
    return 1;
  }
  return 0;
}