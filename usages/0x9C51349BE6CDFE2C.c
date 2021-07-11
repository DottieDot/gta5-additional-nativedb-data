// am_mp_arena_garage.c @ L283681
void func_4059(int iParam0, int iParam1)
{
  int iVar0;
  
  if (iParam1 != -1)
  {
    if (STATS::LEADERBOARDS_GET_CACHE_EXISTS(Global_1838577.f_81[iParam1]))
    {
      STATS::_0x8EC74CEB042E7CFF(Global_1838577.f_81[iParam1]);
    }
    Global_1838577.f_81[iParam1] = 0;
  }
  else if (iParam0 != -1)
  {
    if (STATS::LEADERBOARDS_GET_CACHE_EXISTS(iParam0))
    {
      STATS::_0x8EC74CEB042E7CFF(iParam0);
    }
    iVar0 = 0;
    while (iVar0 < 5)
    {
      if (Global_1838577.f_81[iVar0] == iParam0)
      {
        Global_1838577.f_81[iVar0] = 0;
      }
      iVar0++;
    }
  }
}