// fmmc_launcher.ysc @ L383830
int func_5920(char* sParam0, var uParam1)
{
  CUTSCENE::REQUEST_CUT_FILE(sParam0);
  if (CUTSCENE::HAS_CUT_FILE_LOADED(sParam0))
  {
    *uParam1 = CUTSCENE::_GET_CUT_FILE_NUM_SECTIONS(sParam0);
    CUTSCENE::REMOVE_CUT_FILE(sParam0);
    return 1;
  }
  return 0;
}