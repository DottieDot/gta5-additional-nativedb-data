// bailbond1.c @ L40466
void func_398(bool bParam0, var uParam1)
{
  vector3 vVar0;
  vector3 vVar1;
  
  vVar0 = { 2711.198f, 4134.425f, 32.90168f };
  vVar1 = { 2739.981f, 4155.221f, 50.28859f };
  if (bParam0)
  {
    *uParam1 = PED::ADD_SCENARIO_BLOCKING_AREA(vVar0, vVar1, 0, 1, 1, 1);
    PED::SET_PED_NON_CREATION_AREA(vVar0, vVar1);
    VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(vVar0, vVar1, false, 1);
    VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(vVar0, vVar1, 0);
    PATHFIND::SET_ROADS_IN_AREA(2697.222f, 4119.894f, 42.79107f, 2746.04f, 4162.974f, 43.62732f, false, 1);
    MISC::CLEAR_AREA(2728.333f, 4144.778f, 43.29292f, 7.5f, 1, 0, 0, false);
  }
  else
  {
    PED::REMOVE_SCENARIO_BLOCKING_AREA(*uParam1, 0);
    PED::CLEAR_PED_NON_CREATION_AREA();
    VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(vVar0, vVar1, true, 1);
    PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(2697.222f, 4119.894f, 42.79107f, 2746.04f, 4162.974f, 43.62732f, true);
  }
}