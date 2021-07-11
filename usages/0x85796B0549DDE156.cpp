// minute2.ysc @ L48028
void func_462()
{
  if (!ENTITY::DOES_ENTITY_EXIST(Local_54.f_35[0]))
  {
    Local_54.f_35[0] = VEHICLE::CREATE_VEHICLE(joaat("PRANGER"), 20.8f, 4532.65f, 104.66f, 284.7f, true, true, false);
  }
  if (func_5(Local_54.f_35[0]))
  {
    if (func_546(PLAYER::PLAYER_PED_ID()))
    {
      func_463(Local_54.f_35[0], 1);
      VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("PRANGER"), true);
      VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(Local_54.f_35[0], 5, false);
      VEHICLE::ROLL_DOWN_WINDOWS(Local_54.f_35[0]);
      VEHICLE::SET_VEHICLE_DIRT_LEVEL(Local_54.f_35[0], 14f);
      VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_54.f_35[0], true);
      if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_54.f_35[0], 0))
      {
        ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
        PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_54.f_35[0], -1);
      }
      VEHICLE::SET_VEHICLE_DEFORMATION_FIXED(Local_54.f_35[0]);
    }
  }
  STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("PRANGER"));
}