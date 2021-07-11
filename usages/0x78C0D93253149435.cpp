// exile2.ysc @ L142617
int func_1041(int iParam0)
{
  int iVar0;
  
  if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
  {
    iVar0 = STREAMING::GET_PLAYER_SWITCH_STATE();
    if (iVar0 >= 8)
    {
      if (STREAMING::GET_PLAYER_SWITCH_JUMP_CUT_INDEX() < iParam0)
      {
        return 1;
      }
    }
  }
  else
  {
    return 1;
  }
  return 0;
}