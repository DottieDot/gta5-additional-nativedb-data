// golf_mp.c @ L117197
int func_1619(int iParam0)
{
  if (CAM::DOES_CAM_EXIST(iParam0->f_541))
  {
    return (CAM::IS_CAM_RENDERING(iParam0->f_541) || CAM::GET_CAM_SPLINE_PHASE(iParam0->f_541) < 1f);
  }
  return 0;
}