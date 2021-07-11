// fmmc_launcher.ysc @ L336247
char* func_5072(int iParam0)
{
  int iVar0;
  struct<13> Var1;
  
  if (iParam0 >= 32)
  {
    return "";
  }
  iVar0 = iParam0;
  if (MISC::IS_XBOX360_VERSION())
  {
    Var1 = { func_36(iVar0) };
    return NETWORK::NETWORK_MEMBER_ID_FROM_GAMER_HANDLE(&Var1);
  }
  return PLAYER::GET_PLAYER_NAME(iVar0);
}