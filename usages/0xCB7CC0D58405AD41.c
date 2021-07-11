// fm_maintain_transition_players.c @ L38790
void func_302()
{
  if (func_305(166))
  {
    return;
  }
  if (Global_2460052 != 0f)
  {
    HUD::SET_RADAR_ZOOM_TO_DISTANCE(Global_2460052);
  }
  HUD::LOCK_MINIMAP_POSITION(fLocal_331, fLocal_332);
}