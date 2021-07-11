// act_cinema.ysc @ L119428
int func_1096()
{
  if (func_1097())
  {
    return 0;
  }
  if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE() == 0)
  {
    return 0;
  }
  return 1;
}