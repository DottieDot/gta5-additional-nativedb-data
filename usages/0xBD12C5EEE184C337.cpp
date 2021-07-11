// am_mp_arcade.ysc @ L294478
void func_4173()
{
  if (!func_3706(PLAYER::PLAYER_ID()) && func_117(PLAYER::PLAYER_ID()))
  {
    HUD::SET_RADAR_ZOOM_PRECISE(1f);
  }
  else
  {
    HUD::SET_RADAR_ZOOM_PRECISE(0f);
  }
}