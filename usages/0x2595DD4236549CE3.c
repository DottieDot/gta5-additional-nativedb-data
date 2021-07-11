// abigail1.c @ L39947
void func_342(int iParam0, bool bParam1, int iParam2, int iParam3)
{
  if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
  {
    if (!PED::IS_PED_INJURED(*iParam0))
    {
      ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, false, 1);
      if (iParam3 == 0)
      {
        TASK::CLEAR_PED_SECONDARY_TASK(*iParam0);
      }
      PED::SET_PED_KEEP_TASK(*iParam0, bParam1);
      if (iParam2 == 1)
      {
        PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, false);
      }
    }
    ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
  }
}