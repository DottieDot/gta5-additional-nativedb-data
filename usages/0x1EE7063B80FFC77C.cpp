// agency_heist1.ysc @ L121296
void func_738(int iParam0, vector3 vParam1, vector3 vParam2)
{
  PED::REMOVE_SCENARIO_BLOCKING_AREA(iParam0, 0);
  PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(vParam1, vParam2, true);
  PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(vParam1, vParam2, 0);
  VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(vParam1, vParam2, true, 1);
}