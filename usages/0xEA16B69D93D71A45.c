// am_armwrestling.c @ L122607
void func_886(int iParam0, var uParam1, var uParam2, bool bParam3)
{
  var uVar0;
  
  uVar0 = func_887(iParam0);
  if (!NETWORK::NETWORK_DOES_TUNABLE_EXIST_HASH(uVar0, uParam1))
  {
    if (bParam3)
    {
    }
    return;
  }
  else
  {
    *uParam2 = NETWORK::NETWORK_ACCESS_TUNABLE_BOOL_HASH(uVar0, uParam1);
    NETWORK::_NETWORK_REGISTER_TUNABLE_BOOL_HASH(uVar0, uParam1, uParam2);
  }
  if (bParam3)
  {
  }
}