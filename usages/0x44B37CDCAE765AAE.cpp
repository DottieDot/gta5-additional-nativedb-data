// director_mode.ysc @ L131246
int func_840(var uParam0)
{
  if (!iLocal_623)
  {
    if (NETWORK::FILLOUT_PM_PLAYER_LIST(uParam0, 1, 106))
    {
      NETWORK::_0xE26CCFF8094D8C74(106);
      iLocal_623 = 1;
    }
    else
    {
      return 0;
    }
  }
  else if (NETWORK::_0xE26CCFF8094D8C74(106))
  {
    if (NETWORK::NETWORK_CHECK_DATA_MANAGER_SUCCEEDED_FOR_HANDLE(106, uParam0[0 /*13*/]))
    {
      NETWORK::NETWORK_SET_CURRENT_DATA_MANAGER_HANDLE(uParam0[0 /*13*/]);
      bLocal_701 = true;
      return 1;
    }
    else
    {
      return 0;
    }
  }
  return 0;
}