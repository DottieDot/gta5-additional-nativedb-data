// gb_amphibious_assault.ysc @ L2718
void func_64(int iParam0, int iParam1)
{
  int iVar0;
  int iVar1;
  int iVar2;
  
  iVar0 = func_70(0, iParam1);
  ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iVar0, true);
  PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
  PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, Global_1575009);
  ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(iVar0, 1, iLocal_290);
  PED::SET_PED_DIES_WHEN_INJURED(iVar0, true);
  iVar1 = func_69(iParam0, iParam1);
  PED::SET_PED_CONFIG_FLAG(iVar0, 281, true);
  WEAPON::GIVE_WEAPON_TO_PED(iVar0, iVar1, 9999999, true, true);
  PED::SET_PED_COMBAT_MOVEMENT(iVar0, 1);
  PED::SET_PED_CONFIG_FLAG(iVar0, 42, true);
  PED::SET_PED_HIGHLY_PERCEPTIVE(iVar0, 1);
  PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 43, true);
  PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 44, true);
  PED::SET_PED_TARGET_LOSS_RESPONSE(iVar0, 1);
  PED::SET_PED_CONFIG_FLAG(iVar0, 146, true);
  if (func_75(0, iParam1, 0) || func_75(0, iParam1, 1))
  {
    PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 3, false);
    PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 2, true);
    PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 53, true);
  }
  PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iVar0, 3);
  iVar2 = 0;
  func_65(&iVar0, 1);
  PED::SET_PED_KEEP_TASK(iVar0, true);
}