// am_armwrestling_apartment.ysc @ L59219
int func_705(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4)
{
  if (ENTITY::DOES_ENTITY_EXIST(*uParam0) && !ENTITY::IS_ENTITY_DEAD(*uParam0, 0))
  {
    if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(*uParam0))
    {
      if (MISC::ARE_STRINGS_EQUAL(TASK::GET_TASK_MOVE_NETWORK_STATE(*uParam0), sParam3) || MISC::ARE_STRINGS_EQUAL(TASK::GET_TASK_MOVE_NETWORK_STATE(*uParam0), sParam4))
      {
        if (TASK::GET_TASK_MOVE_NETWORK_EVENT(*uParam0, sParam1) || TASK::GET_TASK_MOVE_NETWORK_EVENT(*uParam0, sParam2))
        {
          return 1;
        }
      }
    }
  }
  return 0;
}