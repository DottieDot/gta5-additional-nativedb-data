// fmmc_launcher.c @ L544140
void func_8372()
{
  if ((!Global_262145.f_4681 && (NETWORK::NETWORK_IS_TRANSITION_HOST() || NETWORK::NETWORK_IS_HOST())) && NETWORK::NETWORK_SESSION_GET_PRIVATE_SLOTS() == 0)
  {
    NETWORK::NETWORK_SESSION_MARK_VISIBLE(1);
  }
}