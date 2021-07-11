// am_casino_limo.c @ L16598
void func_346(var uParam0)
{
  if (CAM::DOES_CAM_EXIST(uParam0->f_387))
  {
    if (CAM::IS_CAM_ACTIVE(uParam0->f_387))
    {
      CAM::SET_CAM_ACTIVE(uParam0->f_387, false);
    }
    CAM::RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
    CAM::STOP_CAM_SHAKING(uParam0->f_387, 1);
    CAM::DESTROY_CAM(uParam0->f_387, 0);
  }
}