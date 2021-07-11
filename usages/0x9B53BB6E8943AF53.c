// assassin_valet.c @ L6013
void func_126(int iParam0)
{
  int iVar0;
  
  if (!PED::IS_PED_INJURED(iLocal_938) && !PED::IS_PED_INJURED(iParam0))
  {
    if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
    {
      PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 3, true);
    }
    TASK::CLEAR_SEQUENCE_TASK(&iVar0);
    TASK::OPEN_SEQUENCE_TASK(&iVar0);
    TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 256);
    TASK::TASK_AIM_GUN_AT_ENTITY(0, iLocal_938, -1, 0);
    TASK::CLOSE_SEQUENCE_TASK(iVar0);
    TASK::TASK_PERFORM_SEQUENCE(iParam0, iVar0);
    TASK::CLEAR_SEQUENCE_TASK(&iVar0);
  }
}