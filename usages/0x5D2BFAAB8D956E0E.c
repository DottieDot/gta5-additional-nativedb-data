// freemode.c @ L150733
void func_1790()
{
  if (Global_2540318.f_77)
  {
    if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2540318.f_78)) > 250)
    {
      Global_2540318.f_77 = 0;
      AUDIO::_0x5D2BFAAB8D956E0E();
    }
  }
}