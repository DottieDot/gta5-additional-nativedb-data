// am_taxi.ysc @ L2465
void func_40()
{
  func_41(4, 0, -1);
  HUD::UNLOCK_MINIMAP_POSITION();
  HUD::UNLOCK_MINIMAP_ANGLE();
  HUD::SET_RADAR_ZOOM(0);
  CAM::SET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL(iLocal_835);
  GRAPHICS::SET_PARTICLE_FX_CAM_INSIDE_VEHICLE(0);
}