// am_taxi.c @ L13221
int func_319(vector3 vParam0, vector3 vParam1, float fParam2, float fParam3)
{
  float fVar0;
  
  fVar0 = SYSTEM::VDIST2(vParam0, vParam1);
  if (fVar0 >= (fParam2 * fParam2))
  {
    return 0;
  }
  if (fVar0 <= (fParam3 * fParam3))
  {
    return 0;
  }
  if (CAM::IS_SPHERE_VISIBLE(vParam1, 2.5f))
  {
    return 0;
  }
  if (MISC::IS_POINT_OBSCURED_BY_A_MISSION_ENTITY(vParam1, 3f, 3f, 3f, 0))
  {
    return 0;
  }
  if (func_320(vParam1, 0))
  {
    return 0;
  }
  return 1;
}