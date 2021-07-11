// appbusinesshub.c @ L13425
void func_333(int iParam0, bool bParam1, bool bParam2)
{
  if (func_353(PLAYER::PLAYER_ID()) != iParam0)
  {
    func_352(bParam1, func_353(PLAYER::PLAYER_ID()));
    func_350();
    func_392(0, 0);
    func_392(1, 0);
    func_392(2, 0);
    func_392(3, 0);
    func_392(iParam0, 1);
    func_348(iParam0);
    if (!bParam1)
    {
      Global_1366852 = 1;
    }
    if (bParam1)
    {
      func_334(PLAYER::PLAYER_ID(), 0, 0, 0);
    }
    else if (bParam2)
    {
      MISC::SET_BIT(&(Global_1676879.f_4), 6);
    }
    STATS::_0xB26F670685631727(iParam0);
  }
}