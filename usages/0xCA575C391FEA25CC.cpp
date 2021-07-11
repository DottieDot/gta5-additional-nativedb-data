// fm_bj_race_controler.ysc @ L307647
void func_4146(bool bParam0)
{
  if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
  {
    if (bParam0)
    {
      NETWORK::_0xCA575C391FEA25CC(PLAYER::PLAYER_ID());
    }
    else
    {
      NETWORK::_0x5E3AA4CA2B6FB0EE(PLAYER::PLAYER_ID());
    }
  }
}