// director_mode.ysc @ L147933
float func_1042(vector3 vParam0, bool bParam1)
{
  float fVar0;
  int iVar1;
  
  iVar1 = WATER::TEST_VERTICAL_PROBE_AGAINST_ALL_WATER(vParam0 + Vector(2f, 0f, 0f), 511, &fVar0);
  if (iVar1 == 2)
  {
    return fVar0;
  }
  if (iVar1 == 1)
  {
    if (bParam1)
    {
      return fVar0;
    }
    else
    {
      if (!MISC::GET_GROUND_Z_FOR_3D_COORD(vParam0 + Vector(2f, 0f, 0f), &fVar0, 0, 0))
      {
        fVar0 = -200f;
      }
      return fVar0;
    }
  }
  return -200f;
}