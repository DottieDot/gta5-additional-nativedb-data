// achievement_controller.c @ L14053
int func_117()
{
  int iVar0;
  int iVar1;
  
  if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(50))
  {
    return 0;
  }
  iVar0 = 0;
  iVar1 = 0;
  iVar0 = (iVar0 + STATS::STAT_GET_NUMBER_OF_DAYS(joaat("FIRST_PERSON_CAM_TIME")) * 24);
  iVar0 = (iVar0 + STATS::STAT_GET_NUMBER_OF_HOURS(joaat("FIRST_PERSON_CAM_TIME")));
  iVar1 = (iVar1 + STATS::STAT_GET_NUMBER_OF_DAYS(joaat("MP_FIRST_PERSON_CAM_TIME")) * 24);
  iVar1 = (iVar1 + STATS::STAT_GET_NUMBER_OF_HOURS(joaat("MP_FIRST_PERSON_CAM_TIME")));
  if ((iVar0 + iVar1) >= 15)
  {
    func_127(50, 1);
    return 1;
  }
  return 0;
}