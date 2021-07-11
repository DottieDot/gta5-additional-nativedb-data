// creator.ysc @ L115030
void func_774()
{
  MISC::SET_WIND(0f);
  PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
  VEHICLE::DELETE_ALL_TRAINS();
  VEHICLE::SET_RANDOM_TRAINS(0);
  PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
  STREAMING::SET_PED_POPULATION_BUDGET(0);
  PED::REMOVE_SCENARIO_BLOCKING_AREAS();
  PED::ADD_SCENARIO_BLOCKING_AREA(-10000f, -10000f, -1000f, 10000f, 10000f, 1000f, 0, 1, 1, 1);
  MISC::CLEAR_AREA(0f, 0f, 0f, 10000f, 1, 0, 0, false);
  if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
  {
    MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 200f, 1, 0, 0, false);
  }
  STREAMING::SET_REDUCE_VEHICLE_MODEL_BUDGET(true);
  STREAMING::SET_REDUCE_PED_MODEL_BUDGET(true);
  HUD::SET_MINIMAP_HIDE_FOW(1);
  PED::CLEAR_PED_BLOOD_DAMAGE(PLAYER::PLAYER_PED_ID());
  func_776();
  STREAMING::SET_VEHICLE_POPULATION_BUDGET(0);
  func_775(1);
  VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-7000f, -7000f, -1000f, 7000f, 7000f, 1000f, false, 1);
  VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(-10000f, -10000f, -1000f, 10000f, 10000f, 1000f, 0);
  MISC::ENABLE_DISPATCH_SERVICE(3, false);
  MISC::ENABLE_DISPATCH_SERVICE(5, false);
  GRAPHICS::DISABLE_VEHICLE_DISTANTLIGHTS(1);
  VEHICLE::SET_DISTANT_CARS_ENABLED(0);
  MISC::DISABLE_STUNT_JUMP_SET(0);
  MISC::DISABLE_STUNT_JUMP_SET(1);
  GRAPHICS::_0x6DDBF9DFFC4AC080(1);
}