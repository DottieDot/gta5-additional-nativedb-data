// michael1.c @ L40360
int func_371(int iParam0, vector3 vParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
  int iVar0;
  
  iVar0 = PED::CREATE_PED(26, iParam0, vParam1, fParam2, 1, true);
  PED::SET_PED_COMPONENT_VARIATION(iVar0, 2, 1, 0, 0);
  PED::SET_PED_MAX_HEALTH(iVar0, iParam7);
  ENTITY::SET_ENTITY_HEALTH(iVar0, iParam7, 0);
  PED::ADD_ARMOUR_TO_PED(iVar0, iParam8);
  PED::SET_PED_DIES_WHEN_INJURED(iVar0, true);
  PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, iParam3);
  PED::SET_PED_AS_ENEMY(iVar0, 1);
  PED::SET_PED_TARGET_LOSS_RESPONSE(iVar0, 1);
  PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 1, false);
  PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 47, true);
  WEAPON::GIVE_WEAPON_TO_PED(iVar0, iParam4, -1, true, true);
  WEAPON::SET_CURRENT_PED_WEAPON(iVar0, iParam4, true);
  WEAPON::SET_PED_INFINITE_AMMO(iVar0, 1, iParam4);
  if (iParam5 != 0)
  {
    WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(iVar0, iParam4, iParam5);
  }
  PED::SET_PED_DUCKING(iVar0, iParam6);
  TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(iVar0, 0);
  PED::SET_PED_CONFIG_FLAG(iVar0, 188, true);
  PED::SET_PED_CONFIG_FLAG(iVar0, 118, false);
  PED::SET_PED_CONFIG_FLAG(iVar0, 132, true);
  PED::SET_COMBAT_FLOAT(iVar0, 12, 30f);
  func_372(iVar0, 0);
  return iVar0;
}