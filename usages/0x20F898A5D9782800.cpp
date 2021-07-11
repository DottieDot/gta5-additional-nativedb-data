// exile2.ysc @ L114381
int func_559()
{
  if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
  {
    if (STREAMING::GET_PLAYER_SWITCH_TYPE() == 3)
    {
      if (STREAMING::GET_PLAYER_SHORT_SWITCH_STATE() == 1)
      {
        if (Local_518 == 1)
        {
          return 1;
        }
      }
      else if (STREAMING::GET_PLAYER_SHORT_SWITCH_STATE() == 0)
      {
        if (Local_518 == 3)
        {
          return 1;
        }
      }
    }
  }
  return 0;
}