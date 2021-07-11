// agency_heist3b.c @ L143458
void func_1041(var uParam0, bool bParam1)
{
  uParam0->f_15 = 0;
  uParam0->f_16 = 0;
  uParam0->f_17 = 0;
  uParam0->f_18 = 0;
  uParam0->f_19 = 0;
  uParam0->f_20 = 0;
  if (CAM::DOES_CAM_EXIST(uParam0->f_9))
  {
    if (CAM::IS_CAM_ACTIVE(uParam0->f_9))
    {
      func_1043(0);
    }
    CAM::DESTROY_CAM(uParam0->f_9, 0);
  }
  if (!Global_42527)
  {
    CAM::STOP_GAMEPLAY_CAM_SHAKING(true);
    CAM::_0x487A82C650EB7799(0f);
    CAM::_0x0225778816FDC28C(0f);
  }
  Global_2405071.f_596 = 0f;
  if (!bParam1)
  {
    CAM::RENDER_SCRIPT_CAMS(false, false, 0, 1, 0, 0);
  }
}