// fm_capture_creator.c @ L162447
int func_1186(char* sParam0, int iParam1)
{
  int iVar0;
  
  iVar0 = 0;
  while (iVar0 <= (iParam1 - 2))
  {
    if (!MISC::ARE_STRINGS_EQUAL(HUD::_GET_TEXT_SUBSTRING_SAFE(sParam0, iVar0, iVar0 + 1, 1), " "))
    {
      return 0;
    }
    iVar0++;
  }
  return 1;
}