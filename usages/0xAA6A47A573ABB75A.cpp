// main_persistent.ysc @ L316995
void func_4854(int iParam0)
{
  int iVar0;
  
  if (SCRIPT::GET_EVENT_DATA(1, iParam0, &iVar0, 36))
  {
    switch (iVar0)
    {
      case -1198671041:
        if (!NETWORK::NETWORK_ACCESS_TUNABLE_BOOL("BASE_GLOBALS", "MULTIPLAYER_DISABLED"))
        {
        }
        break;
      
      case -1494736646:
        NETWORK::NETWORK_REQUEST_CLOUD_TUNABLES();
        break;
      }
  }
}