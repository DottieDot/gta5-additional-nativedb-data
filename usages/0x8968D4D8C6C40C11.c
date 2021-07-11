// am_mp_casino.c @ L319248
int func_4796()
{
  int iVar0;
  int iVar1;
  
  iVar0 = func_4798();
  if (iVar0 <= 0)
  {
    return 0;
  }
  if (MONEY::_NETWORK_CASINO_CAN_PURCHASE_CHIPS_WITH_PVC_2())
  {
    if (MONEY::NETWORK_CAN_SPEND_MONEY(iVar0, false, true, 0, -1, 0))
    {
      iVar1 = iVar0;
    }
    else
    {
      iVar1 = (MONEY::NETWORK_GET_VC_BANK_BALANCE() + MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1));
    }
  }
  else if (MONEY::NETWORK_CAN_SPEND_MONEY(iVar0, false, true, 0, -1, 1))
  {
    iVar1 = iVar0;
  }
  else
  {
    iVar1 = MONEY::NETWORK_GET_EVC_BALANCE();
  }
  return iVar1;
}