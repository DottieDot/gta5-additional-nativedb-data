// benchmark.c @ L2147
void func_82()
{
  if (AUDIO::REQUEST_AMBIENT_AUDIO_BANK("TIME_LAPSE", 0, -1))
  {
    iLocal_59 = 15000;
    Local_109.f_4 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", false);
    CAM::ADD_CAM_SPLINE_NODE(Local_109.f_4, vLocal_55[iLocal_52 /*3*/], vLocal_56[iLocal_52 /*3*/], iLocal_59, 3, 2);
    CAM::ADD_CAM_SPLINE_NODE(Local_109.f_4, vLocal_57[iLocal_52 /*3*/], vLocal_58[iLocal_52 /*3*/], iLocal_59, 3, 2);
    CAM::SET_CAM_SPLINE_PHASE(Local_109.f_4, 0f);
    CAM::SET_CAM_FOV(Local_109.f_4, 50f);
    CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(Local_109.f_4, 3);
    CAM::SET_CAM_ACTIVE(Local_109.f_4, true);
    Local_109.f_3 = 0;
    func_83(&Local_109, 1, 0, 0, 1, 1, 0, 1);
    iLocal_111 = func_45();
    func_75(&iLocal_111, 0, 0, 23, 0, 0, 0);
    iLocal_112 = func_63(iLocal_111);
    if (iLocal_52 == 4)
    {
      iLocal_67 = MISC::GET_GAME_TIMER();
    }
    func_18();
  }
}