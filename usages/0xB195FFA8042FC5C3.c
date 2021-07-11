// am_casino_limo.c @ L2325
void func_57()
{
  int iVar0;
  
  iVar0 = func_9();
  PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
  PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 1, true);
  PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 3, false);
  PED::SET_PED_DIES_WHEN_INJURED(iVar0, true);
  PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, Global_1574997);
  PED::SET_PED_KEEP_TASK(iVar0, true);
  TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(iVar0, 0);
  PED::SET_PED_CONFIG_FLAG(iVar0, 251, true);
  PED::SET_DRIVER_ABILITY(iVar0, 1f);
  if (func_5() == 1)
  {
    ENTITY::SET_ENTITY_VISIBLE(iVar0, false, 0);
  }
}