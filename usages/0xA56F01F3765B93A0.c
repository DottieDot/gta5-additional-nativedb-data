// agency_heist3a.c @ L12391
void func_133(var uParam0)
{
  MISC::CLEAR_AREA(uParam0->f_11, 4f, 1, 0, 0, false);
  *uParam0 = PED::CREATE_PED(26, uParam0->f_1, uParam0->f_11, uParam0->f_17, 1, true);
  ENTITY::SET_ENTITY_HEALTH(*uParam0, uParam0->f_18, 0);
  PED::SET_PED_DIES_WHEN_INJURED(*uParam0, true);
  PED::SET_PED_CAN_BE_TARGETTED(*uParam0, false);
  PED::SET_PED_SUFFERS_CRITICAL_HITS(*uParam0, 0);
  PED::SET_PED_CAN_EVASIVE_DIVE(*uParam0, 0);
  ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(*uParam0, 0, 0);
  PED::SET_PED_CAN_RAGDOLL(*uParam0, 1);
  PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, true);
  uParam0->f_24 = 1;
}