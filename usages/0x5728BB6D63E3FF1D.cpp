// fmmc_launcher.ysc @ L301488
void func_3887(bool bParam0)
{
  struct<13> Var0;
  
  if (bParam0)
  {
    Var0 = { func_627() };
    func_3951(&Var0, 1);
    NETWORK::NETWORK_MARK_TRANSITION_GAMER_AS_FULLY_JOINED(&Var0);
    MISC::SET_BIT(&(Global_2449755.f_1.f_2809), 2);
    func_3950();
    func_3949();
  }
  else
  {
    MISC::CLEAR_BIT(&(Global_2449755.f_1.f_2809), 2);
  }
  func_3888(45, Global_2449755.f_1.f_2809, 0);
}