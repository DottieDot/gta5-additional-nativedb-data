// act_cinema.ysc @ L91549
int func_507(int iParam0, int iParam1)
{
  if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
  {
    Global_2507671 = { func_377(iParam0) };
    Global_2507684 = { func_377(iParam1) };
    if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2507671))
    {
      if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2507684))
      {
        NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2507601, 35, &Global_2507671);
        NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2507636, 35, &Global_2507684);
        if (Global_2507601 == Global_2507636)
        {
          return 1;
        }
      }
    }
  }
  return 0;
}