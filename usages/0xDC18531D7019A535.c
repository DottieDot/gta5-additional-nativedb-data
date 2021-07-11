// carwash1.c @ L38228
bool func_350(int iParam0)
{
  if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
  {
    return MONEY::_NETWORK_GET_VC_BANK_WALLET_BALANCE_IS_NOT_LESS_THAN(iParam0, -1);
  }
  return func_351(func_162()) >= iParam0;
}