// am_mp_smpl_interior_int.ysc @ L284499
void func_4348()
{
  if (Global_1676879.f_3579.f_386 && NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
  {
    if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
    {
      CAM::DO_SCREEN_FADE_IN(322);
    }
  }
  if (MISC::IS_BIT_SET(Local_312, 14))
  {
    if (HUD::BUSYSPINNER_IS_ON())
    {
      HUD::BUSYSPINNER_OFF();
    }
    MISC::CLEAR_BIT(&Local_312, 14);
  }
  if (func_4353(Local_312.f_1, &(Local_312.f_9.f_22)))
  {
    func_4352(Local_312.f_1, &(Local_312.f_9.f_22));
    func_3378(Local_312.f_1, &(Local_312.f_9.f_22));
    func_4350(&(Local_312.f_499));
    if (!func_4349())
    {
      func_4078(Local_312.f_9.f_22.f_210, 1);
    }
    func_4(5);
  }
}