// appinternet.ysc @ L247642
int func_2241(int iParam0)
{
  var uVar0;
  
  if (iParam0 == -1)
  {
    return 0;
  }
  if (MONEY::_NETWORK_CAN_SPEND_MONEY_2(iParam0, 0, 0, 0, &uVar0, -1, 0))
  {
    return 1;
  }
  return 0;
}