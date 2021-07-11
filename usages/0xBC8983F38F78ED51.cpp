// arena_carmod.ysc @ L4436
void func_44(int iParam0, bool bParam1)
{
  if (bParam1)
  {
    PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
    if (!func_22(iParam0, 6, 1))
    {
      func_42(iParam0, 6, 1);
      Global_98721.f_346++;
      if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
      {
        PLAYER::FORCE_CLEANUP(8);
      }
    }
  }
  else if (func_22(iParam0, 6, 1))
  {
    func_40(iParam0, 6, 1);
    if (Global_98721.f_346 > 0)
    {
      Global_98721.f_346 = (Global_98721.f_346 - 1);
    }
    BRAIN::_0x6D6840CEE8845831("act_cinema");
  }
}