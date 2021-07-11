// act_cinema.ysc @ L104365
int func_710(vector3 vParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
  if (func_713(vParam0, uParam1))
  {
    if (func_711(vParam0, uParam1, iParam3, bParam4))
    {
      return 1;
    }
  }
  if (PATHFIND::GET_SAFE_COORD_FOR_PED(vParam0, 0, uParam1, iParam2))
  {
    if (func_711(vParam0, uParam1, iParam3, bParam4))
    {
      return 1;
    }
  }
  return 0;
}