// abigail1.c @ L34117
bool func_216(int iParam0, int iParam1)
{
  bool bVar0;
  
  if (iParam0 == PLAYER::PLAYER_ID())
  {
    bVar0 = func_217(-1, 0) == 8;
  }
  else
  {
    bVar0 = Global_1590446[iParam0 /*871*/].f_211 == 8;
  }
  if (iParam1 == 1)
  {
    if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
    {
      bVar0 = PLAYER::GET_PLAYER_TEAM(iParam0) == 8;
    }
  }
  return bVar0;
}