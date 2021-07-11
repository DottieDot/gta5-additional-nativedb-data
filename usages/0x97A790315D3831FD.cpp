// fbi5a.ysc @ L142158
void func_1052(var uParam0)
{
  MISC::CLEAR_AREA(uParam0->f_3, 4f, 1, 0, 0, false);
  *uParam0 = PED::CREATE_PED(26, uParam0->f_1, uParam0->f_3, uParam0->f_12, 1, true);
  ENTITY::SET_ENTITY_HEALTH(*uParam0, uParam0->f_13, 0);
  PED::SET_PED_DIES_WHEN_INJURED(*uParam0, false);
  PED::SET_PED_CAN_BE_TARGETTED(*uParam0, false);
  PED::SET_PED_SUFFERS_CRITICAL_HITS(*uParam0, 0);
  PED::SET_PED_CAN_EVASIVE_DIVE(*uParam0, 0);
  ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(*uParam0, 0, 0);
  PED::SET_PED_CAN_RAGDOLL(*uParam0, 0);
  PED::SET_PED_KEEP_TASK(*uParam0, true);
  PED::SET_PED_MONEY(*uParam0, 0);
  AUDIO::STOP_PED_SPEAKING(*uParam0, true);
  PED::_0xE861D0B05C7662B8(*uParam0, 0, 0);
  PED::SET_PED_CONFIG_FLAG(*uParam0, 132, true);
  PED::SET_PED_CONFIG_FLAG(*uParam0, 118, false);
  PED::SET_PED_CONFIG_FLAG(*uParam0, 208, true);
  PED::SET_PED_CONFIG_FLAG(*uParam0, 32, false);
  PED::SET_PED_CONFIG_FLAG(*uParam0, 188, true);
  PED::SET_PED_ENABLE_WEAPON_BLOCKING(*uParam0, 1);
  WEAPON::GIVE_WEAPON_TO_PED(*uParam0, uParam0->f_20, -1, false, true);
  PED::SET_PED_SEEING_RANGE(*uParam0, 250f);
  PED::SET_PED_HEARING_RANGE(*uParam0, 250f);
  PED::SET_PED_ID_RANGE(*uParam0, 250f);
  func_720(uParam0, 1);
  PED::SET_PED_NAME_DEBUG(*uParam0, &(uParam0->f_21));
}