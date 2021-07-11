// act_cinema.ysc @ L1428
void func_11()
{
  if (MISC::IS_BIT_SET(iLocal_272, 11))
  {
    if (CAM::DOES_CAM_EXIST(iLocal_260))
    {
      CAM::DESTROY_CAM(iLocal_260, 0);
    }
    if (MISC::IS_BIT_SET(iLocal_272, 6))
    {
      CAM::RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
    }
    INTERIOR::UNPIN_INTERIOR(iLocal_261);
    func_1105(1);
    func_15();
    func_12();
    MISC::CLEAR_BIT(&iLocal_272, 10);
    MISC::CLEAR_BIT(&iLocal_272, 2);
    MISC::CLEAR_BIT(&iLocal_272, 6);
    MISC::CLEAR_BIT(&iLocal_272, 11);
  }
}