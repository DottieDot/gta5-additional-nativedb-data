// finale_endgame.c @ L127219
int func_658(var uParam0, int iParam1)
{
  if (!DATAFILE::DATAFILE_UPDATE_SAVE_TO_CLOUD(uParam0))
  {
    if (*uParam0)
    {
      if (DATAFILE::DATAFILE_GET_FILE_DICT() != 0 && iParam1)
      {
        DATAFILE::DATAFILE_DELETE();
      }
      return 1;
    }
    else
    {
      if (DATAFILE::DATAFILE_GET_FILE_DICT() != 0 && iParam1)
      {
        DATAFILE::DATAFILE_DELETE();
      }
      return 1;
    }
  }
  return 0;
}