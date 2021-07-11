// event_controller.ysc @ L2886
int func_102()
{
  int iVar0;
  
  if (NETWORK::NETWORK_CAN_ACCESS_MULTIPLAYER(&iVar0) == 0)
  {
    if (iVar0 == 1)
    {
      return 0;
    }
  }
  return 1;
}