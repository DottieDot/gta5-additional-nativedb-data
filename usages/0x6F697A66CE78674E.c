// fm_horde_controler.c @ L167111
void func_1769(int iParam0, bool bParam1)
{
  int iVar0;
  
  iVar0 = 0;
  if (iParam0 == iParam0)
  {
    iParam0 = iParam0;
  }
  if (bParam1)
  {
  }
  if (func_2744(&(Local_991.f_1)))
  {
    func_1374(&Local_991, iVar0);
  }
  func_1773();
  func_1774();
  func_1771(0, 1);
  func_2750(0);
  iLocal_922 = 0;
  HUD::DISPLAY_RADAR(true);
  func_2654(0);
  iLocal_953 = 1;
  if (!func_5979(PLAYER::PLAYER_ID(), 0))
  {
    PLAYER::SET_PLAYER_TEAM(PLAYER::PLAYER_ID(), 0);
  }
  GRAPHICS::ANIMPOSTFX_STOP_ALL();
  NETWORK::NETWORK_OVERRIDE_TEAM_RESTRICTIONS(0, 1);
  func_1770();
  func_1508(func_307());
}