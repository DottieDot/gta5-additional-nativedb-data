// rural_bank_heist.ysc @ L103664
void func_470()
{
  if (!iLocal_1284)
  {
    if (func_438(&Local_1059))
    {
      if (!PED::IS_PED_INJURED(func_355()))
      {
        ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(func_355(), true);
        PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_355(), false);
        PED::SET_PED_SPHERE_DEFENSIVE_AREA(func_355(), -148.5988f, 6147.738f, 31.3352f, 2.75f, 1, 0);
        TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED_TIMED(func_355(), 130f, -1, 0);
        iLocal_1284 = 1;
      }
    }
  }
}