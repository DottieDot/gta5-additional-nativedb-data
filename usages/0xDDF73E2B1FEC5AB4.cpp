// am_mp_defunct_base.ysc @ L281407
void func_4095()
{
  int iVar0;
  int iVar1;
  
  iVar0 = 0;
  while (iVar0 < 32)
  {
    iVar1 = iVar0;
    if (iVar1 != func_69())
    {
      if (func_24(iVar1, 0, 1))
      {
        NETWORK::NETWORK_OVERRIDE_RECEIVE_RESTRICTIONS(iVar0, 0);
      }
    }
    iVar0++;
  }
}