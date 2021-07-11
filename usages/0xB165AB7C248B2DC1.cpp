// re_paparazzi.ysc @ L3514
void func_81()
{
  if (!PED::IS_PED_INJURED(iLocal_67))
  {
    PED::SET_PED_KEEP_TASK(iLocal_67, true);
    PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, iLocal_55, 1862763509);
    if (!Global_3 && !bLocal_56)
    {
      PED::SET_PED_CONFIG_FLAG(iLocal_67, 317, true);
      PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_67, false);
    }
  }
  func_85(-1, 0);
  func_82();
  AUDIO::UNLOCK_MISSION_NEWS_STORY(62);
  func_281();
}