// fm_maintain_transition_players.c @ L3639
int func_115()
{
  var uVar0;
  int iVar1;
  
  NETWORK::NETWORK_GET_TRANSITION_HOST(&uVar0);
  if (NETWORK::NETWORK_IS_HANDLE_VALID(&uVar0, 13))
  {
    iVar1 = 0;
    while (iVar1 <= (Global_2449755.f_1.f_2805 - 1))
    {
      if (NETWORK::NETWORK_IS_HANDLE_VALID(&(Global_2449755.f_1.f_845[iVar1 /*57*/]), 13))
      {
        if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(Global_2449755.f_1.f_845[iVar1 /*57*/]), &uVar0))
        {
          return iVar1;
        }
      }
      iVar1++;
    }
  }
  return 0;
}