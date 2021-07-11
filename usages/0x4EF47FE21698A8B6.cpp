// finalec1.ysc @ L113820
void func_625(int iParam0, int iParam1)
{
  int iVar0;
  
  if (!func_787(Local_150[iParam0 /*14*/]))
  {
    return;
  }
  if (!func_787(iParam1))
  {
    return;
  }
  func_626(iParam0);
  PED::REMOVE_PED_DEFENSIVE_AREA(Local_150[iParam0 /*14*/], 0);
  PED::REMOVE_PED_DEFENSIVE_AREA(Local_150[iParam0 /*14*/], 1);
  PED::SET_PED_DEFENSIVE_AREA_ATTACHED_TO_PED(Local_150[iParam0 /*14*/], iParam1, 10f, 0f, 10f, -10f, 0f, -10f, 10f, 0, 0);
  TASK::OPEN_SEQUENCE_TASK(&iVar0);
  TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
  TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, iParam1, iParam1, 2f, 1, 5f, 8f, 1, 0, -687903391);
  TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
  TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 100f, 0);
  TASK::CLOSE_SEQUENCE_TASK(iVar0);
  TASK::TASK_PERFORM_SEQUENCE(Local_150[iParam0 /*14*/], iVar0);
  TASK::CLEAR_SEQUENCE_TASK(&iVar0);
  PED::SET_PED_ACCURACY(Local_150[iParam0 /*14*/], 5);
  Local_150[iParam0 /*14*/].f_11 = 5;
}