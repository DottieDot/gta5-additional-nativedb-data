// rampage1.ysc @ L2264
void func_48(int iParam0, bool bParam1)
{
  if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
  {
    return;
  }
  if (func_17(*iParam0))
  {
    TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(*iParam0, 1);
    TASK::SET_PED_PATH_CAN_USE_LADDERS(*iParam0, 1);
    TASK::SET_PED_PATH_CAN_DROP_FROM_HEIGHT(*iParam0, 1);
  }
  PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, bParam1);
  ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(*iParam0, 0, 0);
  PED::SET_PED_CAN_BE_TARGETTED(*iParam0, false);
  PED::SET_PED_CAN_BE_TARGETED_WITHOUT_LOS(*iParam0, 0);
  func_23(iParam0);
  func_49(iParam0, bParam1, 0, 1);
  *iParam0 = 0;
}