// act_cinema.ysc @ L99143
int func_628()
{
  if (CUTSCENE::IS_CUTSCENE_PLAYING() || NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
  {
    return 1;
  }
  return 0;
}