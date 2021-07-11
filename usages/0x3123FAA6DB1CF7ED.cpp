// assassin_bus.ysc @ L12919
void func_229(int iParam0, int iParam1)
{
  TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(iParam0, iParam1, "OJASbs_102", 52, 0, 20, -1, -1f, 0, 1073741824);
  vLocal_1440 = { -455.2892f, -326.1364f, 41.22218f };
  TASK::WAYPOINT_RECORDING_GET_NUM_POINTS("OJASbs_102", &iLocal_1430);
  ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iParam0, true, 1);
  fLocal_1435 = VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(iParam1);
  VEHICLE::MODIFY_VEHICLE_TOP_SPEED(iParam1, (fLocal_1434 * 100f));
  PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 3, true);
  VEHICLE::SET_VEHICLE_FORWARD_SPEED(iParam1, 1.5f);
}