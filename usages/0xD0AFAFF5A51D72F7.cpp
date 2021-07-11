// fmmc_launcher.ysc @ L301220
void func_3866()
{
  if (!func_3867())
  {
    if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
    {
      if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
      {
        if (!NETWORK::NETWORK_IS_TUTORIAL_SESSION_CHANGE_PENDING())
        {
          NETWORK::NETWORK_END_TUTORIAL_SESSION();
        }
      }
    }
  }
}