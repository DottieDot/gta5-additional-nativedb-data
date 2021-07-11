// act_cinema.ysc @ L121260
int func_1117(bool bParam0)
{
  int iVar0;
  
  if (bParam0)
  {
    iVar0 = MONEY::NETWORK_GET_VC_BANK_BALANCE();
  }
  iVar0 = (iVar0 + MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1));
  return iVar0;
}