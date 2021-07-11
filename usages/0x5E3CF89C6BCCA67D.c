// am_casino_peds.c @ L181801
void func_2028(var uParam0)
{
  if (CAM::DOES_CAM_EXIST(uParam0->f_7))
  {
    CAM::DESTROY_CAM(uParam0->f_7, 0);
  }
  uParam0->f_7 = CAM::CREATE_CAMERA(26379945, 1);
  CAM::SET_CAM_PARAMS(uParam0->f_7, uParam0->f_9, uParam0->f_12, uParam0->f_15, 0, 1, 1, 2);
  CAM::SET_CAM_FAR_CLIP(uParam0->f_7, 1000f);
  CAM::SHAKE_CAM(uParam0->f_7, "HAND_SHAKE", uParam0->f_36);
  CAM::RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
}