// fmmc_launcher.ysc @ L379062
void func_5809(var uParam0, int iParam1, bool bParam2)
{
  struct<14> Var0;
  
  if (uParam0->f_210 && !bParam2)
  {
    return;
  }
  TASK::CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_28[iParam1]);
  PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_28[iParam1], true);
  PED::SET_PED_RESET_FLAG(uParam0->f_28[iParam1], 64, true);
  PED::SET_PED_RESET_FLAG(uParam0->f_28[iParam1], 58, true);
  PED::SET_PED_CONFIG_FLAG(uParam0->f_28[iParam1], 179, true);
  PED::SET_PED_CONFIG_FLAG(uParam0->f_28[iParam1], 208, true);
  PED::SET_PED_CONFIG_FLAG(uParam0->f_28[iParam1], 118, false);
  PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_28[iParam1], Global_1574997);
  ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_28[iParam1], true);
  ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_28[iParam1], true);
  ENTITY::SET_ENTITY_COLLISION(uParam0->f_28[iParam1], false, 0);
  ENTITY::SET_ENTITY_VISIBLE(uParam0->f_28[iParam1], false, 0);
  PED::_0x4668D80430D6C299(uParam0->f_28[iParam1]);
  PED::SET_PED_HELMET(uParam0->f_28[iParam1], 0);
  PED::REMOVE_PED_HELMET(uParam0->f_28[iParam1], 1);
  PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[iParam1], 1, 0, 0, 0);
  if (((PED::GET_PED_DRAWABLE_VARIATION(uParam0->f_28[iParam1], 7) == 30 || PED::GET_PED_DRAWABLE_VARIATION(uParam0->f_28[iParam1], 7) == 31) || PED::GET_PED_DRAWABLE_VARIATION(uParam0->f_28[iParam1], 7) == 34) || PED::GET_PED_DRAWABLE_VARIATION(uParam0->f_28[iParam1], 7) == 35)
  {
    PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[iParam1], 7, 0, 0, 0);
  }
  Var0 = { func_328(ENTITY::GET_ENTITY_MODEL(uParam0->f_28[iParam1]), 2, Global_2424073[uParam0->f_23[iParam1] /*421*/].f_240, -1) };
  PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[iParam1], 2, Var0.f_3, Var0.f_4, 0);
  PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(uParam0->f_28[iParam1], func_5810(Global_1590446[uParam0->f_23[iParam1] /*871*/].f_271), 0);
  PED::CLEAR_PED_PROP(uParam0->f_28[iParam1], 0);
}