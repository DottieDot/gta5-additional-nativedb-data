// fm_bj_race_controler.c @ L312798
void func_4296()
{
  int iVar0;
  int iVar1;
  int iVar2;
  
  if (func_262())
  {
    iVar0 = 0;
    while (iVar0 < 32)
    {
      iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
      iVar2 = PLAYER::GET_PLAYER_PED(iVar1);
      if (func_721(iVar2))
      {
        NETWORK::_0x38B7C51AB1EDC7D8(iVar2, 1);
      }
      iVar0++;
    }
  }
}