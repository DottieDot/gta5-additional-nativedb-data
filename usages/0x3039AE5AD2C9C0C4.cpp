// am_armwrestling.ysc @ L132201
void func_1338()
{
  int iVar0;
  int iVar1;
  
  iVar0 = 0;
  while (iVar0 < 32)
  {
    iVar1 = iVar0;
    if (func_24(iVar1, 0, 1))
    {
      NETWORK::NETWORK_OVERRIDE_CHAT_RESTRICTIONS(iVar1, 0);
    }
    iVar0++;
  }
}