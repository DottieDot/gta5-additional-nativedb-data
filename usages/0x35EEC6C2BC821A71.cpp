// am_ferriswheel.ysc @ L4426
void func_53(int iParam0, int iParam1, int iParam2)
{
  if (!func_51() || iParam1)
  {
    Global_1312417 = 1;
    func_49(1);
    if (((!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_48()) && !func_14(PLAYER::PLAYER_ID())) && !func_143(PLAYER::PLAYER_ID()))
    {
      Global_968396 = 1;
    }
    Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_8 = 1;
    STATS::_PLAYSTATS_PASSIVE_MODE(1, iParam0, iParam2, -1);
  }
}