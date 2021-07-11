// fm_mission_controller.c @ L646586
int func_10386()
{
  if (func_49(&iLocal_9575))
  {
    return 0;
  }
  if (((((((((((PED::IS_PED_JUMPING(iLocal_1073) || TASK::IS_PED_SPRINTING(iLocal_1073)) || PED::IS_PED_RAGDOLL(iLocal_1073)) || PED::IS_PED_CLIMBING(iLocal_1073)) || PED::IS_PED_DEAD_OR_DYING(iLocal_1073, 1)) || PED::_0xC30BDAEE47256C13(iLocal_1073)) || PED::IS_PED_GOING_INTO_COVER(iLocal_1073)) || PED::IS_PED_VAULTING(iLocal_1073)) || PED::IS_PED_IN_COVER(iLocal_1073, 0)) || PED::GET_PED_CONFIG_FLAG(iLocal_1073, 78, 1)) || Local_6942[iLocal_1075 /*287*/].f_27 > -1) || MISC::IS_BIT_SET(iLocal_4154, 27))
  {
    return 0;
  }
  return 1;
}