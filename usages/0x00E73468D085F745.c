// finalec1.c @ L112964
void func_605(bool bParam0)
{
  if (func_787(func_225()))
  {
    TASK::CLEAR_PED_TASKS_IMMEDIATELY(func_225());
    ENTITY::SET_ENTITY_COORDS(func_225(), func_104(20), 1, false, 0, 1);
    ENTITY::SET_ENTITY_HEADING(func_225(), 323.6475f);
    if (!PED::IS_PED_USING_ACTION_MODE(func_225()))
    {
      PED::SET_PED_USING_ACTION_MODE(func_225(), true, -1, 0);
    }
    TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(func_225(), func_738(0), -1, false, 0f, false, 0, iLocal_509[0], 0);
    PED::_0x2208438012482A1A(func_225(), 0, 0);
    INTERIOR::FORCE_ROOM_FOR_ENTITY(func_225(), iLocal_339, MISC::GET_HASH_KEY("foundrymainrm"));
  }
  if (func_787(iLocal_75[2]))
  {
    TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_75[2]);
    ENTITY::SET_ENTITY_COORDS(iLocal_75[2], func_104(22), 1, false, 0, 1);
    ENTITY::SET_ENTITY_HEADING(iLocal_75[2], 221.1f);
    INTERIOR::FORCE_ROOM_FOR_ENTITY(func_223(), iLocal_339, MISC::GET_HASH_KEY("foundrymainrm"));
    if (bParam0)
    {
      iLocal_148 = 0;
      func_606();
    }
  }
}