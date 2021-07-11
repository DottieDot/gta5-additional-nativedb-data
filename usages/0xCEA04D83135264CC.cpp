// agency_heist3b.ysc @ L118872
void func_736(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9)
{
  PED::SET_PED_RELATIONSHIP_GROUP_HASH(*uParam0, iParam2);
  if (iParam3 != 0 && iParam3 != joaat("WEAPON_UNARMED"))
  {
    WEAPON::GIVE_WEAPON_TO_PED(*uParam0, iParam3, -1, true, true);
  }
  if (iParam4 != 0)
  {
    WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(*uParam0, iParam3, iParam4);
  }
  func_589(uParam0, bParam8);
  if (iParam6 != -1)
  {
    ENTITY::SET_ENTITY_HEALTH(*uParam0, iParam6, 0);
  }
  if (iParam7 != -1)
  {
    PED::SET_PED_ARMOUR(*uParam0, iParam7);
  }
  PED::SET_PED_MONEY(*uParam0, 0);
  PED::SET_PED_ACCURACY(*uParam0, iParam5);
  PED::SET_PED_KEEP_TASK(*uParam0, true);
  PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, true);
  PED::SET_PED_NAME_DEBUG(*uParam0, sParam1);
  if (bParam9)
  {
    PED::SET_PED_USING_ACTION_MODE(*uParam0, true, -1, "DEFAULT_ACTION");
  }
  func_739(uParam0, 1);
  func_738(*uParam0, 564);
  func_737(*uParam0, 0);
}