// am_taxi.c @ L6368
void func_149(int iParam0)
{
  if (CAM::DOES_CAM_EXIST(iLocal_834))
  {
    func_150(NETWORK::NET_TO_VEH(Local_100.f_2[iParam0 /*23*/]), &iLocal_834, vLocal_842);
    CAM::SET_CAM_FOV(iLocal_834, fLocal_841);
    CAM::SET_CAM_NEAR_CLIP(iLocal_834, 0.01f);
  }
  if (HUD::IS_PAUSE_MENU_ACTIVE())
  {
    if (!MISC::IS_BIT_SET(Local_102[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_2, 13))
    {
      MISC::SET_BIT(&(Local_102[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_2), 13);
    }
  }
  else if (MISC::IS_BIT_SET(Local_102[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_2, 13))
  {
    func_148();
    MISC::CLEAR_BIT(&(Local_102[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_2), 13);
  }
  HUD::DONT_TILT_MINIMAP_THIS_FRAME();
  CAM::_0x62ECFCFDEE7885D6();
}