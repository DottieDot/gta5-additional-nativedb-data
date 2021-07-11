// ingamehud.ysc @ L119529
int func_999()
{
  if (!NETWORK::NETWORK_IS_SESSION_BUSY())
  {
    if (((func_814() == 5 || func_814() == 60) || func_814() == 2) || func_475() == 0)
    {
      if (func_1000())
      {
        if ((func_5() && DLC::GET_IS_LOADING_SCREEN_ACTIVE()) || (func_805() && DLC::GET_IS_LOADING_SCREEN_ACTIVE() == 0))
        {
          return 1;
        }
      }
    }
  }
  return 0;
}