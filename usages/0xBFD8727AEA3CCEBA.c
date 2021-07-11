// agency_heist3a.c @ L111573
void func_557(var uParam0, vector3 vParam1, bool bParam2, bool bParam3)
{
  if (!PED::IS_PED_INJURED(uParam0->f_3))
  {
    if (bParam2)
    {
      if (CAM::DOES_CAM_EXIST(uParam0->f_4))
      {
        CAM::DESTROY_CAM(uParam0->f_4, 0);
      }
      uParam0->f_4 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", true);
      CAM::SET_CAM_PARAMS(uParam0->f_4, vParam1, 0f, 0f, 0f, uParam0->f_51, 0, 1, 1, 2);
      CAM::POINT_CAM_AT_ENTITY(uParam0->f_4, uParam0->f_3, 0f, 0f, 0f, 1);
      if (bParam3)
      {
        HUD::DISPLAY_HUD(false);
        HUD::DISPLAY_RADAR(true);
        CAM::RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
      }
    }
  }
  uParam0->f_62 = 1;
}