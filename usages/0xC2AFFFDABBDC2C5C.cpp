// abigail1.ysc @ L622
int func_10(int iParam0, int iParam1)
{
  int iVar0;
  
  if (iParam0 < 0)
  {
    return 0;
  }
  if (iParam0 > 78)
  {
    return 0;
  }
  if (iParam1 <= 0 || iParam1 > 100)
  {
    return 0;
  }
  iVar0 = PLAYER::_GET_ACHIEVEMENT_PROGRESS(iParam0);
  if (iParam1 > iVar0)
  {
    return PLAYER::_SET_ACHIEVEMENT_PROGRESS(iParam0, iParam1);
  }
  return 0;
}