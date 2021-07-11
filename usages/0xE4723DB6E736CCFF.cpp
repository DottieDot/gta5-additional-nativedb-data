// franklin1.ysc @ L119143
void func_679(int iParam0, int iParam1, vector3 vParam2)
{
  int iVar0;
  
  if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
  {
    return;
  }
  if (ENTITY::IS_ENTITY_DEAD(iParam0, 0))
  {
    return;
  }
  if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
  {
    return;
  }
  TASK::OPEN_SEQUENCE_TASK(&iVar0);
  TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
  TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 256);
  if (!func_680(vParam2, 0f, 0f, 0f, 0))
  {
    TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, vParam2, PLAYER::PLAYER_PED_ID(), 3f, true, 0.5f, 4f, true, 0, 0, -957453492, 20000);
  }
  TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
  TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 50f, 0);
  TASK::CLOSE_SEQUENCE_TASK(iVar0);
  TASK::TASK_PERFORM_SEQUENCE(iParam0, iVar0);
  TASK::CLEAR_SEQUENCE_TASK(&iVar0);
  if (!PED::IS_PED_INJURED(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0))
  {
    PED::SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_VEHICLE(iParam0, iParam1, 0f, 0f, 0f, 10f, 0);
  }
}