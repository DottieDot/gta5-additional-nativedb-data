// maintransition.ysc @ L274472
void func_3598()
{
  int iVar0;
  int iVar1;
  
  iVar0 = 0;
  while (iVar0 <= 31)
  {
    iVar1 = iVar0;
    if (func_4270(iVar1, 0, 0))
    {
      if (NETWORK::NETWORK_SESSION_GET_KICK_VOTE(iVar1))
      {
        Global_1618832[PLAYER::PLAYER_ID() /*100*/].f_33[iVar0] = 1;
        Global_1618832[PLAYER::PLAYER_ID() /*100*/][iVar0] = 1;
      }
    }
    iVar0++;
  }
}