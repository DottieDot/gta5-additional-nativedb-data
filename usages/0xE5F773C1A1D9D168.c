// am_armwrestling.c @ L43174
void func_252()
{
  int iVar0;
  
  NETWORK::SET_LOCAL_PLAYER_INVISIBLE_LOCALLY(1);
  iVar0 = 0;
  while (iVar0 < 32)
  {
    if (func_24(iVar0, 0, 1))
    {
      NETWORK::SET_PLAYER_INVISIBLE_LOCALLY(iVar0, 1);
    }
    iVar0++;
  }
}