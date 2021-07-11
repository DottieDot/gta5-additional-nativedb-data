// am_armwrestling.ysc @ L122982
void func_889(int iParam0, int iParam1, var uParam2, bool bParam3)
{
  int iVar0;
  var uVar1;
  
  iVar0 = func_887(iParam0);
  uVar1 = *uParam2;
  if (!NETWORK::NETWORK_ACCESS_TUNABLE_INT_HASH(iVar0, iParam1, uParam2))
  {
    if (bParam3)
    {
    }
    return;
    *uParam2 = uVar1;
  }
  else
  {
    NETWORK::_NETWORK_REGISTER_TUNABLE_INT_HASH(iVar0, iParam1, uParam2);
  }
  if (bParam3)
  {
  }
}