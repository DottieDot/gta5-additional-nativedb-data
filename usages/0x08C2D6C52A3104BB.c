// family6.c @ L13068
int func_83()
{
  if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() || STREAMING::GET_PLAYER_SWITCH_TYPE() == 3)
  {
    return 0;
  }
  if (STREAMING::GET_PLAYER_SWITCH_STATE() > 8)
  {
    if (STREAMING::GET_PLAYER_SWITCH_STATE() != 11)
    {
      return 0;
    }
    if (STREAMING::GET_PLAYER_SWITCH_STATE() == 11)
    {
      if (STREAMING::GET_PLAYER_SWITCH_INTERP_OUT_DURATION() > 0)
      {
        if (STREAMING::_0x5B48A06DD0E792A5() > 100)
        {
          return 0;
        }
      }
    }
  }
  return 1;
}