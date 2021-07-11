// clothes_shop_mp.c @ L256120
void func_750(int iParam0, var uParam1, int iParam2, var uParam3)
{
  if (iParam0 == PLAYER::PLAYER_PED_ID())
  {
    if (iParam2 > -1)
    {
      STATS::PLAYSTATS_PROP_CHANGE(iParam0, uParam1, iParam2, uParam3);
    }
  }
}