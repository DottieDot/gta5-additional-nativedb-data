// fmmc_launcher.c @ L308310
void func_4150()
{
  if (func_143())
  {
    return;
  }
  HUD::_CLEAR_RACE_GALLERY_BLIPS();
  HUD::DISPLAY_RADAR(false);
  HUD::_RACE_GALLERY_FULLSCREEN(0);
  HUD::SET_RADAR_ZOOM(0);
  HUD::SET_GPS_CUSTOM_ROUTE_RENDER(0, 18, 30);
  HUD::UNLOCK_MINIMAP_POSITION();
  HUD::UNLOCK_MINIMAP_ANGLE();
  HUD::_DELETE_WAYPOINT();
  HUD::CLEAR_GPS_CUSTOM_ROUTE();
  HUD::CLEAR_GPS_FLAGS();
  func_3862(226);
  Global_1574572 = 0;
  func_4151(0);
  PLAYER::SET_POLICE_RADAR_BLIPS(1);
}