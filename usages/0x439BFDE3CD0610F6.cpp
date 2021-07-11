// main_persistent.ysc @ L307636
void func_4394(int iParam0)
{
  var uVar0;
  
  if (func_315(PLAYER::PLAYER_ID(), 0))
  {
    if (SCRIPT::GET_EVENT_DATA(1, iParam0, &uVar0, 13))
    {
      if (NETWORK::NETWORK_IS_HANDLE_VALID(&uVar0, 13))
      {
        if (NETWORK::NETWORK_HAS_FOLLOW_INVITE())
        {
          if (func_4400() != 2 && func_4397())
          {
            if (NETWORK::NETWORK_ACTION_FOLLOW_INVITE())
            {
              NETWORK::NETWORK_CLEAR_FOLLOW_INVITE();
              NETWORK::_NETWORK_BLOCK_KICKED_PLAYERS(1);
              func_4396();
            }
          }
          else
          {
            func_4395();
            NETWORK::NETWORK_CLEAR_FOLLOW_INVITE();
          }
        }
      }
    }
  }
}