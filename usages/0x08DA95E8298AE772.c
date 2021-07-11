// barry2.c @ L49922
void func_554(var uParam0)
{
  int iVar0;
  
  if (PED::IS_PED_INJURED(uParam0->f_3) || PED::IS_PED_INJURED(uParam0->f_15))
  {
    return;
  }
  if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, 242628503) != 1)
  {
    TASK::OPEN_SEQUENCE_TASK(&iVar0);
    if (func_545(uParam0->f_3, uParam0->f_15, 0) <= 5f)
    {
      TASK::TASK_AIM_GUN_AT_ENTITY(0, uParam0->f_15, MISC::GET_RANDOM_INT_IN_RANGE(250, 500), 0);
      TASK::TASK_SHOOT_AT_ENTITY(0, uParam0->f_15, MISC::GET_RANDOM_INT_IN_RANGE(250, 500), -957453492);
    }
    TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, uParam0->f_15, uParam0->f_15, 2f, 1, 3f, 4.5f, 1, 0, -957453492);
    TASK::TASK_COMBAT_PED(0, uParam0->f_15, 67108864, 16);
    TASK::CLOSE_SEQUENCE_TASK(iVar0);
    TASK::TASK_PERFORM_SEQUENCE(uParam0->f_3, iVar0);
    TASK::CLEAR_SEQUENCE_TASK(&iVar0);
    if (func_409())
    {
      func_457(uParam0->f_3, "CLOWN_LAUGH", "CLOWNS", 10);
    }
  }
}