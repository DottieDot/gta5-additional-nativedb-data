// assassin_bus.ysc @ L14479
void func_276(int iParam0)
{
  int iVar0;
  
  if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
  {
    if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, 242628503) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iParam0, 242628503) != 0)
    {
      if (func_231(iParam0, vLocal_1440, 1) <= 50f)
      {
        TASK::CLEAR_SEQUENCE_TASK(&iVar0);
        TASK::OPEN_SEQUENCE_TASK(&iVar0);
        TASK::TASK_GO_TO_COORD_ANY_MEANS(0, vLocal_1440, 2f, 0, 0, 786603, -1082130432);
        TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 500f, -1, 0, 0);
        TASK::CLOSE_SEQUENCE_TASK(iVar0);
        TASK::TASK_PERFORM_SEQUENCE(iParam0, iVar0);
        TASK::CLEAR_SEQUENCE_TASK(&iVar0);
      }
      else
      {
        TASK::TASK_SMART_FLEE_PED(iParam0, PLAYER::PLAYER_PED_ID(), 500f, -1, 0, 0);
      }
      iLocal_1345 = 6;
    }
  }
}