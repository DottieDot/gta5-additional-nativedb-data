// freemode.ysc @ L846709
int func_12165()
{
  if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
  {
    return 0;
  }
  if ((func_12143() || func_11357()) && !PAD::IS_CONTROL_ENABLED(0, 75))
  {
    return 0;
  }
  return 1;
}