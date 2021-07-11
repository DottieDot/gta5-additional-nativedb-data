// fmmc_launcher.c @ L390797
int func_6057(var uParam0, var uParam1)
{
  if (func_4162() || func_3995())
  {
    return 0;
  }
  if (func_3993() || func_9960())
  {
    if (func_750(*uParam1))
    {
      if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(uParam0, uParam1))
      {
        return 1;
      }
    }
  }
  else if (NETWORK::NETWORK_IS_TRANSITION_HOST_FROM_HANDLE(uParam0))
  {
    return 1;
  }
  return 0;
}