// bj.ysc @ L11869
int func_189(int iParam0, int iParam1)
{
  if (STATS::LEADERBOARDS_GET_COLUMN_ID(iParam0, 4, iParam1) == 156)
  {
    return 1;
  }
  switch (iParam0)
  {
    case 912:
      if (iParam1 == 5)
      {
        return 1;
      }
      break;
    
    case 780:
      if (iParam1 == 4)
      {
        return 1;
      }
      break;
    
    case 1200:
      if (iParam1 == 5)
      {
        return 1;
      }
      break;
  }
  return 0;
}