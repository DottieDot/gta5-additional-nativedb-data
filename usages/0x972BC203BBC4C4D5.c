// appcovertops.c @ L6498
void func_206(int iParam0, var uParam1, var uParam2, bool bParam3)
{
  int iVar0;
  var uVar1;
  
  iVar0 = func_207(iParam0);
  uVar1 = *uParam2;
  if (!NETWORK::NETWORK_ACCESS_TUNABLE_FLOAT_HASH(iVar0, uParam1, uParam2))
  {
    if (bParam3)
    {
    }
    return;
    *uParam2 = uVar1;
  }
  else
  {
    NETWORK::_NETWORK_REGISTER_TUNABLE_FLOAT_HASH(iVar0, uParam1, uParam2);
  }
  if (bParam3)
  {
  }
}