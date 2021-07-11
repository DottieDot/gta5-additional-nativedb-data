// am_armwrestling.ysc @ L118454
int func_763()
{
  int iVar0;
  int iVar1;
  int iVar2;
  struct<13> Var3;
  
  if (!NETWORK::NETWORK_IS_HANDLE_VALID(&(Global_2449755.f_6471), 13))
  {
    return 0;
  }
  iVar2 = PLAYER::PLAYER_ID();
  iVar1 = 0;
  while (iVar1 < 32)
  {
    iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
    if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0) && iVar0 != iVar2)
    {
      Var3 = { func_92(iVar0) };
      if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&Var3, &(Global_2449755.f_6471)) && func_765(iVar0))
      {
        func_764();
        return 1;
      }
    }
    iVar1++;
  }
  return 0;
}