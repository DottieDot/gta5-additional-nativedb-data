// abigail1.c @ L29551
void func_154(char* sParam0, int iParam1)
{
  STATS::STAT_SET_GXT_LABEL(joaat("SP_LAST_MISSION_NAME"), sParam0, 1);
  if (MISC::IS_BIT_SET(iParam1, 0))
  {
    STATS::STAT_SET_GXT_LABEL(joaat("SP0_LAST_MISSION_NAME"), sParam0, 1);
  }
  if (MISC::IS_BIT_SET(iParam1, 1))
  {
    STATS::STAT_SET_GXT_LABEL(joaat("SP1_LAST_MISSION_NAME"), sParam0, 1);
  }
  if (MISC::IS_BIT_SET(iParam1, 2))
  {
    STATS::STAT_SET_GXT_LABEL(joaat("SP2_LAST_MISSION_NAME"), sParam0, 1);
  }
}