// abigail2.ysc @ L34345
int func_214()
{
  if (!Global_262145.f_28013)
  {
    return 0;
  }
  if (!Global_76577)
  {
    return 0;
  }
  if (PLAYER::PLAYER_ID() == func_217())
  {
    return 0;
  }
  if (func_215(PLAYER::PLAYER_ID()))
  {
    return 0;
  }
  if (MISC::IS_BIT_SET(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_1, 7))
  {
    return 0;
  }
  if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
  {
    return 0;
  }
  return 1;
}