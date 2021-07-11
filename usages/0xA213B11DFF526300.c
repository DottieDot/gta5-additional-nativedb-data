// ingamehud.c @ L21236
void func_488()
{
  if (Global_2460199 == 0)
  {
    if ((Global_150392 && NETWORK::_0xD313DE83394AF134() == 1) && DLC::_0xA213B11DFF526300() == 0)
    {
      if ((LOADINGSCREEN::_LOADINGSCREEN_GET_LOAD_FREEMODE() == 0 && Global_2460535 == 0) && func_475() == 0)
      {
        func_489(30, 1, -1);
        Global_2460199 = 1;
      }
    }
  }
}