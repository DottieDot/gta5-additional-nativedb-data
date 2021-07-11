// clothes_shop_mp.c @ L256064
void func_748(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4)
{
  if (iParam0 == PLAYER::PLAYER_PED_ID())
  {
    STATS::PLAYSTATS_CLOTH_CHANGE(iParam0, iParam1, uParam2, uParam3, uParam4);
  }
}