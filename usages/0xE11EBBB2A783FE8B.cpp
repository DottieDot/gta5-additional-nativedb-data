// fmmc_launcher.ysc @ L538839
char* func_8296(var uParam0)
{
  int iVar0;
  struct<13> Var1;
  
  iVar0 = 0;
  while (iVar0 <= (NETWORK::NETWORK_GET_FRIEND_COUNT() - 1))
  {
    func_4179(&Var1);
    Var1 = { func_7596(iVar0) };
    if (func_750(Var1))
    {
      if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&Var1, uParam0))
      {
        return NETWORK::NETWORK_GET_FRIEND_NAME(iVar0);
      }
    }
    iVar0++;
  }
  return "";
}