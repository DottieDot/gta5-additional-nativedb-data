// abigail2.ysc @ L45835
void func_464(int iParam0)
{
  func_7(&uLocal_42, 0, 0);
  PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
  VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_55, false);
  STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_55);
  func_6(&iLocal_62);
  func_475(&iLocal_61, 1, 0, 1);
  if (func_463(iLocal_56))
  {
    VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_56, 1);
  }
  func_394(&iLocal_56);
  func_352();
  func_474(&uLocal_65, 3);
  func_465(&Local_54, 0, 0, 0);
  PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_243, 0);
  if (iParam0 == 1)
  {
    SCRIPT::TERMINATE_THIS_THREAD();
  }
}