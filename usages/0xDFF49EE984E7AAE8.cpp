// freemode.ysc @ L876817
void func_13109(int iParam0, int iParam1)
{
  int iVar0;
  
  func_2051(0, PLAYER::PLAYER_PED_ID(), "", -1636175450, 94232066, iParam1, 1, -1, 0, 0, 0);
  if (func_1110())
  {
    func_1980(-494565059, iParam0, &iVar0, 0, 1, 0);
  }
  else
  {
    MONEY::_NETWORK_EARN_FROM_RC_TIME_TRIAL(iParam0);
  }
}