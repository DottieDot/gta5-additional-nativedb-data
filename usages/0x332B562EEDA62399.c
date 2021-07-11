// fm_mission_controller.c @ L807325
void func_13247(int iParam0)
{
  vector3 vVar0;
  int iVar1;
  
  if (((((!PED::IS_PED_IN_ANY_VEHICLE(iLocal_1073, 0) && !ENTITY::IS_ENTITY_IN_AIR(iLocal_1073)) && !ENTITY::IS_ENTITY_IN_WATER(iLocal_1073)) && MISC::IS_BIT_SET(iLocal_4152, 28)) && !MISC::IS_BIT_SET(iLocal_4152, 29)) && (func_92() || func_13174()))
  {
    vVar0 = { ENTITY::GET_ENTITY_COORDS(iLocal_1073, true) };
    iVar1 = func_978(vVar0);
    PED::SET_PED_TO_LOAD_COVER(iLocal_1073, 1);
    TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(iLocal_1073, vVar0, -1, true, 0f, true, MISC::IS_BIT_SET(iLocal_4155, 7), iVar1, 0);
    PED::_0x2208438012482A1A(iLocal_1073, 1, 0);
    MISC::SET_BIT(&iLocal_4152, 29);
  }
}