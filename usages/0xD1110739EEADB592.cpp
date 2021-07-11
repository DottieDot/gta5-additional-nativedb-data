// am_casino_peds.ysc @ L343887
void func_4488(int iParam0)
{
  while (!NETWORK::_NETWORK_IS_THIS_SCRIPT_MARKED(32, 0, Global_1316833))
  {
    SYSTEM::WAIT(0);
  }
  Global_1316833++;
  func_4489(0, -1, 0);
  NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(iParam0, 119);
}