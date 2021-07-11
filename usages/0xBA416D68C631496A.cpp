// fmmc_launcher.ysc @ L578543
void func_9460()
{
  if (Global_262145.f_4681)
  {
    if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && NETWORK::NETWORK_IS_HOST())
    {
      if (NETWORK::NETWORK_SESSION_IS_VISIBLE())
      {
        NETWORK::NETWORK_SESSION_MARK_VISIBLE(0);
      }
    }
  }
}