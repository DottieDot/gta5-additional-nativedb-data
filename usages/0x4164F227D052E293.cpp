// fmmc_launcher.ysc @ L538817
char* func_8295(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
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
      if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&Var1, &uParam0))
      {
        return NETWORK::_NETWORK_GET_FRIEND_NAME_FROM_INDEX(iVar0);
      }
    }
    iVar0++;
  }
  return "";
}