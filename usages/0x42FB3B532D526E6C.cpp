// maintransition.ysc @ L108394
void func_661()
{
  int iVar0;
  
  if (func_389(1) && func_384())
  {
    if (func_29(201))
    {
      NETWORK::NETWORK_CAN_ACCESS_MULTIPLAYER(&iVar0);
      if (iVar0 == 12)
      {
        NETWORK::NETWORK_REQUEST_CLOUD_BACKGROUND_SCRIPTS();
      }
      if (iVar0 == 11)
      {
        NETWORK::NETWORK_REQUEST_CLOUD_TUNABLES();
      }
      if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
      {
        func_4198(-1);
        func_4227(32);
        func_4235(58);
      }
      else
      {
        func_4227(32);
        func_4235(63);
      }
    }
  }
}