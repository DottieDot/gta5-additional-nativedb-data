// agency_heist3a.ysc @ L13113
void func_152(var uParam0, var uParam1, int iParam2)
{
  *uParam0 = PED::CREATE_PED_INSIDE_VEHICLE(*uParam1, 26, uParam0->f_1, iParam2, 1, true);
  PED::SET_PED_RANDOM_COMPONENT_VARIATION(*uParam0, 0);
  PED::SET_PED_DIES_WHEN_INJURED(*uParam0, true);
  PED::SET_PED_AS_ENEMY(*uParam0, 1);
  ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(*uParam0, 1, 0);
  PED::SET_PED_KEEP_TASK(*uParam0, true);
  PED::SET_PED_CONFIG_FLAG(*uParam0, 132, true);
  PED::SET_PED_CONFIG_FLAG(*uParam0, 188, true);
  WEAPON::GIVE_WEAPON_TO_PED(*uParam0, uParam0->f_26, -1, true, true);
  ENTITY::SET_ENTITY_HEALTH(*uParam0, uParam0->f_18, 0);
  PED::SET_PED_MAX_HEALTH(*uParam0, uParam0->f_18);
  if (uParam0->f_22)
  {
    ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(*uParam0, true);
  }
  if (uParam0->f_23)
  {
    PED::ADD_ARMOUR_TO_PED(*uParam0, 100);
  }
  uParam0->f_24 = 1;
  PED::SET_PED_NAME_DEBUG(*uParam0, &(uParam0->f_28));
  PED::SET_PED_HEARING_RANGE(*uParam0, 250f);
  uParam0->f_2 = func_141(*uParam0, 1, 145);
  HUD::SET_BLIP_DISPLAY(uParam0->f_2, 2);
  PED::SET_PED_CAN_EVASIVE_DIVE(*uParam0, 1);
  func_140(uParam0, 1);
  PED::SET_PED_ACCURACY(*uParam0, uParam0->f_20);
  func_139(*uParam0, 0);
}