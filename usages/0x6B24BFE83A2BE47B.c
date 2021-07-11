// am_mp_defunct_base.c @ L328113
void func_4918(var uParam0, var uParam1, int iParam2)
{
  if (iParam2 && uParam0->f_1)
  {
    uParam0->f_1 = 0;
  }
  if (iParam2 && uParam0->f_2)
  {
    uParam0->f_2 = 0;
  }
  if (CAM::IS_CAM_SHAKING(uParam1->f_11))
  {
    CAM::STOP_CAM_SHAKING(uParam1->f_11, 0);
  }
  PAD::STOP_PAD_SHAKE(0);
  MISC::CLEAR_BIT(&(uParam1->f_12), 8);
  MISC::CLEAR_BIT(&(uParam1->f_12), 10);
  MISC::CLEAR_BIT(&(uParam1->f_12), 9);
  func_192(&(uParam1->f_773));
}