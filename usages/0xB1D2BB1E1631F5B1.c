// stock_controller.c @ L195
void func_4()
{
  int iVar0;
  
  if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
  {
    if (Global_58643)
    {
      Global_58643 = 0;
      Global_58644 = MISC::GET_GAME_TIMER();
      Global_61456 = 1;
    }
    return;
  }
  if (Global_58643)
  {
    if (!STATS::_0xB1D2BB1E1631F5B1())
    {
      iVar0 = func_5();
      Global_58643 = 0;
      if (iVar0 < 5)
      {
        Global_61456 = 0;
      }
    }
  }
}