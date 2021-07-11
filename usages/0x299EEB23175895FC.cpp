// am_casino_limo.ysc @ L50110
void func_504()
{
  if (!func_505())
  {
    return;
  }
  if (!func_612(3))
  {
    if (func_289(func_10()) && func_289(func_8()))
    {
      NETWORK::SET_NETWORK_ID_CAN_MIGRATE(func_10(), false);
      NETWORK::SET_NETWORK_ID_CAN_MIGRATE(func_8(), false);
      func_134(3);
    }
  }
}