// heli_gun.ysc @ L7877
bool func_169()
{
  return ((((((((((((!iLocal_80 && !func_155(PLAYER::PLAYER_ID())) && !CAM::IS_SCREEN_FADING_IN()) && !CAM::IS_SCREEN_FADED_OUT()) && !CAM::IS_SCREEN_FADING_OUT()) && CAM::IS_SCREEN_FADED_IN()) && !HUD::IS_RADAR_HIDDEN()) && HUD::IS_MINIMAP_RENDERING()) && !func_45()) && !HUD::IS_PAUSE_MENU_ACTIVE()) && !NETWORK::NETWORK_IS_IN_MP_CUTSCENE()) && !func_170()) && !func_39(PLAYER::PLAYER_ID()));
}