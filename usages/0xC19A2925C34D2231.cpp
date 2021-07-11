// ambient_mrsphilips.ysc @ L5901
void func_108(char* sParam0, int iParam1, int iParam2)
{
  if (!MISC::IS_STRING_NULL_OR_EMPTY(&Global_95769))
  {
    STATS::PLAYSTATS_MISSION_OVER(&Global_95769, 0, 0, 0, 1, 0);
    StringCopy(&Global_95769, "", 64);
  }
  StringCopy(&Global_95769, sParam0, 64);
  STATS::PLAYSTATS_MISSION_STARTED(sParam0, iParam1, iParam2, func_109(0));
}