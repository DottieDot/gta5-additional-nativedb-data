// fmmc_launcher.ysc @ L500494
void func_7383()
{
  if (func_122())
  {
    if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
    {
      NETWORK::NETWORK_CLEAR_CLOCK_TIME_OVERRIDE();
    }
    MISC::CLEAR_BIT(&Global_1695546, 4);
    MISC::CLEAR_OVERRIDE_WEATHER();
    if (GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX() != -1)
    {
      GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
    }
  }
}