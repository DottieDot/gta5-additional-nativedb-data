// am_casino_limo.c @ L1326
int func_22()
{
  int iVar0;
  int iVar1;
  
  if (func_32(1))
  {
    iVar0 = 0;
    while (iVar0 < 7)
    {
      iVar1 = func_29(func_31(), iVar0);
      if (((iVar1 != func_28() && func_636(iVar1, 0, 1)) && func_26(iVar1)) && !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT_ON_SCRIPT(iVar1, func_24(166), func_23()))
      {
        return 0;
      }
      iVar0++;
    }
  }
  return 1;
}