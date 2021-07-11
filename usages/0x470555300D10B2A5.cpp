// am_casino_peds.ysc @ L108675
int func_1124()
{
  if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
  {
    if (STREAMING::GET_PLAYER_SWITCH_TYPE() != 3)
    {
      if (STREAMING::GET_PLAYER_SWITCH_STATE() > 8)
      {
        return 1;
      }
    }
  }
  return 0;
}