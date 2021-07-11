// am_mp_arcade_claw_crane.ysc @ L83496
void func_466(int iParam0)
{
  if (CAM::DOES_CAM_EXIST(iParam0->f_39))
  {
    PAD::DISABLE_CONTROL_ACTION(0, 1, 1);
    PAD::DISABLE_CONTROL_ACTION(0, 2, 1);
    PAD::DISABLE_CONTROL_ACTION(0, 26, 1);
    PAD::DISABLE_CONTROL_ACTION(0, 47, 1);
    CAM::SET_USE_HI_DOF();
    iParam0->f_28 = (iParam0->f_28 + (((0.1f + (iParam0->f_12 * 0.9f)) - iParam0->f_28) * 0.15f));
    CAM::SET_CAM_SHAKE_AMPLITUDE(iParam0->f_39, iParam0->f_28);
  }
}