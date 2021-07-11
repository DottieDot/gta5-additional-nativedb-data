// am_mp_nightclub.ysc @ L26427
int func_387(int iParam0)
{
  int iVar0;
  
  iVar0 = 0;
  if (iParam0 == 1)
  {
    if ((CUTSCENE::GET_CUTSCENE_TOTAL_DURATION() - CUTSCENE::GET_CUTSCENE_TIME()) <= 300 || !CUTSCENE::IS_CUTSCENE_PLAYING())
    {
      iVar0 = 1;
    }
  }
  else if (!CUTSCENE::IS_CUTSCENE_PLAYING())
  {
    iVar0 = 1;
  }
  return iVar0;
}