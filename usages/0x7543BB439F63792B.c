// fmmc_playlist_controller.c @ L144641
int func_1013(var uParam0)
{
  struct<35> Var0;
  
  if (PLAYER::IS_PLAYER_ONLINE())
  {
    if (func_481(uParam0))
    {
      Var0 = { func_1014(uParam0) };
      return NETWORK::NETWORK_CLAN_IS_ROCKSTAR_CLAN(&Var0, 35);
    }
  }
  return 0;
}