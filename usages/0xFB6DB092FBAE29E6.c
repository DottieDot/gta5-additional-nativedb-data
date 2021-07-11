// freemode.c @ L881545
void func_13266(int iParam0, int iParam1)
{
  int iVar0;
  var uVar1;
  
  func_2051(0, PLAYER::PLAYER_PED_ID(), "", -1636175450, 94232066, iParam1, 1, -1, 0, 0, 0);
  if (func_1110())
  {
    func_1980(1736933716, iParam0, &iVar0, 0, 1, 0);
  }
  else
  {
    MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(iParam0, "TIME_TRIALS", &uVar1);
  }
}