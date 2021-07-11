// taxi_clowncar.ysc @ L1347
int func_36()
{
  if (!func_38() && !func_37())
  {
    if (!PLAYER::IS_PLAYER_SCRIPT_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
    {
      return 1;
    }
  }
  return 0;
}