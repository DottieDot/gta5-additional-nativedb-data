// maintransition.c @ L105623
void func_580()
{
  if (func_29(201))
  {
    if (func_582())
    {
      LOADINGSCREEN::_0xFA1E0E893D915215(0);
      LOADINGSCREEN::_LOADINGSCREEN_SET_LOAD_FREEMODE(1);
      LOADINGSCREEN::_LOADINGSCREEN_SET_LOAD_FREEMODE_WITH_EVENT_NAME(0);
      LOADINGSCREEN::_LOADINGSCREEN_SET_IS_LOADING_FREEMODE(0);
      NETWORK::_SHUTDOWN_AND_LOAD_MOST_RECENT_SAVE();
      STATS::PLAYSTATS_BACKGROUND_SCRIPT_ACTION("BG_SCRIPT_KICK", 6);
    }
    else
    {
      func_581(0);
      func_4198(-1);
      func_4227(32);
      func_4229("HUD_QUITTING");
      func_4235(63);
    }
  }
}