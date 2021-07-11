// fmmc_launcher.ysc @ L492757
int func_7286()
{
  if (func_7288())
  {
    if (!func_7287())
    {
      if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
      {
        return 0;
      }
      if (func_102() && NETWORK::NETWORK_GET_ACTIVITY_PLAYER_NUM(1) <= 0)
      {
        return 1;
      }
      if (NETWORK::NETWORK_GET_ACTIVITY_PLAYER_NUM(0) > 1)
      {
        return 0;
      }
    }
  }
  return 1;
}