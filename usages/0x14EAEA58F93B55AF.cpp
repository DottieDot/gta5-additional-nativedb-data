// am_mp_arena_garage.ysc @ L265005
int func_3838(int iParam0)
{
  int iVar0;
  int iVar1;
  
  if (!func_3854())
  {
    return 0;
  }
  iVar0 = 100;
  if (func_832(PLAYER::PLAYER_ID()))
  {
    iVar0 = 10;
  }
  if (func_169())
  {
    func_3839(837955913, iVar0, &iVar1, 0, 1, 0);
    Global_4263810[iVar1 /*84*/].f_65.f_15 = iParam0;
  }
  else
  {
    MONEY::_NETWORK_SPENT_ARENA_JOIN_SPECTATOR(iVar0, iParam0, 0, 1);
  }
  func_3850(iVar0);
  return 1;
}