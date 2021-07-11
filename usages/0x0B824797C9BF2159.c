// fmmc_launcher.c @ L470554
void func_6903(var uParam0)
{
  if (uParam0->f_59 == 1)
  {
    if (NETWORK::NETWORK_IS_IN_TRANSITION())
    {
      if (!NETWORK::NETWORK_IS_TRANSITION_OPEN_TO_MATCHMAKING())
      {
        NETWORK::NETWORK_OPEN_TRANSITION_MATCHMAKING();
      }
    }
  }
  uParam0->f_59 = 0;
  func_7345();
  if (func_6905())
  {
    if (NETWORK::NETWORK_IS_IN_TRANSITION() && NETWORK::NETWORK_IS_TRANSITION_HOST())
    {
      NETWORK::_0x973D76AA760A6CB6(0);
    }
    func_6904();
  }
}