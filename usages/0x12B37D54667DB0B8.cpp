// am_armwrestling.ysc @ L42606
void func_235(var uParam0)
{
  int iVar0;
  int iVar1;
  
  if (uParam0->f_1192)
  {
    iVar0 = 0;
    while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
    {
      iVar1 = iVar0;
      if (func_24(iVar1, 0, 1))
      {
        NETWORK::SET_PLAYER_INVISIBLE_LOCALLY(iVar1, 0);
      }
      iVar0++;
    }
  }
}