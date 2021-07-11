// fmmc_launcher.ysc @ L537411
void func_8253()
{
  struct<13> Var0;
  
  if (Global_2448961.f_597 == 0)
  {
    if (Global_4456448.f_156052 == 0 && !MISC::IS_STRING_NULL_OR_EMPTY(&(Global_4456448.f_154383)))
    {
      Var0 = { func_3696(&(Global_4456448.f_154383)) };
      NETWORK::NETWORK_SET_TRANSITION_CREATOR_HANDLE(&Var0);
    }
    else
    {
      NETWORK::NETWORK_CLEAR_TRANSITION_CREATOR_HANDLE();
    }
    Global_2448961.f_597 = 1;
  }
}