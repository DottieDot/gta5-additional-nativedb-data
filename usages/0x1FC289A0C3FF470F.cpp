// fm_hold_up_tut.ysc @ L9246
void func_299()
{
  PATHFIND::_SET_IGNORE_SECONDARY_ROUTE_NODES(0);
  func_25();
  func_24(8, 0);
  NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(true);
  if (func_285(PLAYER::PLAYER_ID()))
  {
    func_267(0);
  }
  func_300();
}