// abigail2.c @ L36509
void func_295()
{
  if (func_463(iLocal_61))
  {
    PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_61, true);
    func_296(&uLocal_65, 3, iLocal_61, "ABIGAIL", 0, 1);
    PED::SET_PED_FLEE_ATTRIBUTES(iLocal_61, 128, true);
    PED::SET_PED_FLEE_ATTRIBUTES(iLocal_61, 4, true);
    PED::SET_PED_FLEE_ATTRIBUTES(iLocal_61, 1024, true);
    PED::SET_PED_CONFIG_FLAG(iLocal_61, 281, true);
    PED::SET_PED_CONFIG_FLAG(iLocal_61, 29, true);
    PED::SET_PED_CONFIG_FLAG(iLocal_61, 116, true);
    PED::SET_PED_CONFIG_FLAG(iLocal_61, 118, true);
    PED::SET_PED_CAN_BE_TARGETTED(iLocal_61, true);
    TASK::SET_PED_PATH_CAN_DROP_FROM_HEIGHT(iLocal_61, 0);
    TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(iLocal_61, 0);
  }
}