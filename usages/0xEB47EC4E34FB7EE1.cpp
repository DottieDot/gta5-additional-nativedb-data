// barry1.ysc @ L42486
void func_417(int iParam0, int iParam1)
{
  STREAMING::SET_PED_POPULATION_BUDGET(0);
  STREAMING::SET_REDUCE_PED_MODEL_BUDGET(true);
  STREAMING::SET_VEHICLE_POPULATION_BUDGET(0);
  STREAMING::SET_REDUCE_VEHICLE_MODEL_BUDGET(true);
  PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), 0);
  PED::SET_CREATE_RANDOM_COPS(false);
  VEHICLE::_0xE6C0C80B8C867537(1);
  *iParam0 = PED::ADD_SCENARIO_BLOCKING_AREA(-7000f, -7000f, -100f, 7000f, 7000f, 315f, 0, 1, 1, 1);
  TASK::SET_SCENARIO_TYPE_ENABLED("DRIVE", false);
  VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-7000f, -7000f, -100f, 7000f, 7000f, 315f, false, 1);
  VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(-7000f, -7000f, -100f, 7000f, 7000f, 315f, 0);
  if (func_12(PLAYER::PLAYER_PED_ID()) && iParam1 == 1)
  {
    MISC::CLEAR_AREA_OF_PEDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 500f, 0);
  }
}