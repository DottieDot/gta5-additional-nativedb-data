// abigail1.c @ L29969
void func_162(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
  if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_95769))
  {
    return;
  }
  if (MISC::COMPARE_STRINGS(sParam0, &Global_95769, 0, -1) != 0)
  {
    return;
  }
  STATS::PLAYSTATS_MISSION_OVER(sParam0, iParam1, iParam2, iParam3, iParam4, Global_92876);
  StringCopy(&Global_95769, "", 64);
}