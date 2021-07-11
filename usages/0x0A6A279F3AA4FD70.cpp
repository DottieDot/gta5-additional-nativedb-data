// exile3.ysc @ L47808
void func_387(int iParam0, int iParam1, float fParam2)
{
  int iVar0;
  
  iVar0 = func_280();
  if (!PED::IS_PED_INJURED(iVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_189[1], 0))
  {
    if (func_303() != 0 || iParam1)
    {
      TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(iVar0, iLocal_189[1], "exile31", 262144, iParam0, 0, -1, fParam2, 0, 1073741824);
      VEHICLE::SET_BOAT_DISABLE_AVOIDANCE(iLocal_189[1], 1);
    }
  }
}