// am_armwrestling.c @ L7769
int func_111(int iParam0)
{
  int iVar0;
  
  if (PAD::GET_LOCAL_PLAYER_AIM_STATE() != 3)
  {
    return *iParam0;
  }
  iVar0 = SYSTEM::ROUND((func_105(*iParam0, 100) * 25f));
  *iParam0 = (*iParam0 + iVar0);
  return *iParam0;
}