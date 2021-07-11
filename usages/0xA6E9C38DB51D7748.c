// am_mp_yacht.c @ L123685
int func_917(int iParam0)
{
  var uVar0;
  char* sVar1;
  
  if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, 0))
  {
    if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
    {
      sVar1 = ENTITY::GET_ENTITY_SCRIPT(iParam0, &uVar0);
      if (MISC::COMPARE_STRINGS(sVar1, "gb_", 0, 3) == 0)
      {
        return 1;
      }
    }
  }
  return 0;
}