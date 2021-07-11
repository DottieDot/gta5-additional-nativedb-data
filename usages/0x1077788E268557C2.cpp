// act_cinema.ysc @ L75698
int func_355()
{
  struct<13> Var0;
  
  if (PLAYER::IS_PLAYER_ONLINE())
  {
    if ((NETWORK::NETWORK_IS_SIGNED_ONLINE() && NETWORK::NETWORK_IS_SIGNED_IN()) && NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT())
    {
      Var0 = { func_356() };
      if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID() && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
      {
        return 1;
      }
    }
  }
  return 0;
}