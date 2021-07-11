// agency_heist1.ysc @ L118925
void func_724(int iParam0, vector3 vParam1, vector3 vParam2)
{
  PATHFIND::SET_PED_PATHS_IN_AREA(vParam1, vParam2, false, 0);
  PATHFIND::SET_ROADS_IN_AREA(vParam1, vParam2, false, 1);
  VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(vParam1, vParam2, false, 1);
  PED::REMOVE_SCENARIO_BLOCKING_AREA(iParam0, 0);
  iParam0 = PED::ADD_SCENARIO_BLOCKING_AREA(vParam1, vParam2, 0, 1, 1, 1);
}