// benchmark.ysc @ L370
void func_5()
{
  if (iLocal_37 != 0)
  {
    if (!func_4("BMARK_EXIT"))
    {
      if (CAM::IS_SCREEN_FADED_IN())
      {
        func_11("BMARK_EXIT");
      }
    }
    else if (func_9(1000))
    {
      func_8();
      if (bLocal_40)
      {
        MISC::_SAVE_BENCHMARK_RECORDING();
      }
      if (MISC::_UI_IS_SINGLEPLAYER_PAUSE_MENU_ACTIVE())
      {
        func_7(iLocal_106, 1);
        func_568(1);
      }
      else
      {
        func_6();
      }
      MISC::_RESET_BENCHMARK_RECORDING();
    }
  }
}