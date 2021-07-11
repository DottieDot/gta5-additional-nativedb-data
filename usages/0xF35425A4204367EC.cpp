// dreyfuss1.ysc @ L42848
void func_425()
{
  if (!func_437(iLocal_89))
  {
    while (!func_427(&iLocal_89, 68, -1472.9f, 483.3f, 115.2f, 75f, 1))
    {
      SYSTEM::WAIT(0);
    }
  }
  if (func_437(iLocal_89))
  {
    func_426(&uLocal_98, 3, iLocal_89, "DREYFUSS", 0, 1);
    PED::SET_PED_CONFIG_FLAG(iLocal_89, 177, true);
    PED::SET_PED_CAN_BE_TARGETTED(iLocal_89, true);
    ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_89, 1, 0);
    ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_89, true, 1);
    TASK::SET_PED_PATH_MAY_ENTER_WATER(iLocal_89, 0);
    PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_89, true);
    PED::SET_PED_CONFIG_FLAG(iLocal_89, 281, true);
    PED::SET_PED_CONFIG_FLAG(iLocal_89, 42, true);
  }
}