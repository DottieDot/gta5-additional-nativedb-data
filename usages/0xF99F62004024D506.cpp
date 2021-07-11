// docks_heista.ysc @ L116944
void func_670(int iParam0, bool bParam1, bool bParam2)
{
  if (func_148(iParam0))
  {
    if (bParam1)
    {
      func_121(iParam0, 12, 10, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
      PED::SET_ENABLE_SCUBA(iParam0, 1);
      PED::SET_PED_DIES_IN_WATER(iParam0, 0);
    }
    else
    {
      func_121(iParam0, 12, 11, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
    }
    if (!bParam2)
    {
      func_121(iParam0, 14, 1, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
    }
  }
}