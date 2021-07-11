// fmmc_launcher.c @ L595774
void func_9999()
{
  struct<6> Var0;
  int iVar1;
  
  func_4334();
  func_10005(MISC::_GET_GLOBAL_CHAR_BUFFER());
  func_10004(NETWORK::_0x8B0C2964BA471961());
  NETWORK::_0x966DD84FB6A46017();
  if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1662982.f_3)))
  {
    func_10003();
    func_4867();
    Var0 = { func_10002() };
    iVar1 = -1;
    if (func_10001(&iVar1, &Var0))
    {
      func_4800(iVar1);
    }
    else
    {
      func_4222(&Var0);
    }
    if (func_10000() == 0)
    {
    }
    else if (func_10000() == 1 || func_10000() == 4)
    {
      func_9486();
    }
  }
}