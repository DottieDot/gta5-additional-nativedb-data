// am_mp_garage_control.ysc @ L113688
void func_962()
{
  Local_63.f_9.f_15 = 0;
  Global_2531497.f_4518 = 0;
  HUD::UNLOCK_MINIMAP_ANGLE();
  if (iLocal_69)
  {
    NETWORK::SET_STORE_ENABLED(1);
    iLocal_69 = 0;
  }
  if (CAM::DOES_CAM_EXIST(Local_63.f_9))
  {
    CAM::RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
    CAM::DESTROY_CAM(Local_63.f_9, 0);
    func_33();
    func_32(12, 0, -1);
    func_31(1);
    CAM::SET_WIDESCREEN_BORDERS(false, -1);
    HUD::DISPLAY_RADAR(true);
    HUD::DISPLAY_HUD(true);
  }
}