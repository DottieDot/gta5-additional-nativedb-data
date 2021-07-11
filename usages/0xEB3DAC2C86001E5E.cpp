// am_mp_smpl_interior_ext.ysc @ L236059
void func_3415()
{
  if (!func_3420())
  {
    func_9(0);
    func_3417(&(Local_199.f_5.f_22), 0);
    func_2350();
    if (CAM::DOES_CAM_EXIST(Local_199.f_5.f_22.f_7))
    {
      CAM::DESTROY_CAM(Local_199.f_5.f_22.f_7, 0);
      CAM::RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
    }
  }
  else
  {
    if ((func_3414(Local_199.f_1) && CAM::DOES_CAM_EXIST(Local_199.f_5.f_22.f_7)) && !GRAPHICS::GET_TOGGLE_PAUSED_RENDERPHASES_STATUS())
    {
      func_3416(&(Local_199.f_5.f_22), 0);
    }
    func_2357();
    HUD::DISABLE_FRONTEND_THIS_FRAME();
    HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
  }
  func_175(1);
}