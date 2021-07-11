// fmmc_launcher.ysc @ L564635
int func_8987()
{
  struct<13> Var0;
  
  if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
  {
    return func_8988();
  }
  else if (NETWORK::NETWORK_IS_IN_TRANSITION())
  {
    Var0 = { func_627() };
    return NETWORK::NETWORK_IS_ACTIVITY_SPECTATOR_FROM_HANDLE(&Var0);
  }
  return 0;
}